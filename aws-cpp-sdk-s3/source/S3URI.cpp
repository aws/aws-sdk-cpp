#include <aws/s3/S3URI.h>
#include <regex>
#include <aws/core/utils/StringUtils.h>

namespace Aws
{
  namespace S3
  {
    S3URI::S3URI() : Base{}
    {
    }

    S3URI::S3URI(const Aws::String &uri) : Base{uri}
    {
      SetFields();
    }

    S3URI::S3URI(const char *uri) : Base{uri}
    {
      SetFields();
    }

    void S3URI::SetFields()
    {
      if (GetScheme() == Scheme::S3)
      {
        // s3://bucket-name/key
        m_bucket = GetAuthority();
        m_key = GetPath().substr(1);
        return;
      }

      using MatchResults = std::match_results<Aws::String::const_iterator, Aws::Allocator<std::sub_match<Aws::String::const_iterator>>>;
      MatchResults authorityMatch, pathMatch;
      if (std::regex_search(GetAuthority(), authorityMatch, std::regex{R"(^((.+)\.)?s3[.-]([a-z0-9-]+)\.)"}) 
          && std::regex_match(GetPath(), pathMatch, std::regex{"/((.*?)(/(.*))?)$"}))
      {
        if (authorityMatch.str(1).empty()) {
          // https://s3.region.amazonaws.com/bucket-name/key
          m_isPathStyle = true;

          m_bucket = Utils::StringUtils::URLDecode(pathMatch.str(2).c_str());
          m_key    = Utils::StringUtils::URLDecode(pathMatch.str(4).c_str());
        } else {
          // https://bucket-name.s3.region.amazonaws.com/key
          m_bucket = Utils::StringUtils::URLDecode(authorityMatch.str(2).c_str());
          m_key    = Utils::StringUtils::URLDecode(pathMatch.str(1).c_str());
        }
        const auto& queryParams = GetQueryStringParameters();
        auto it = queryParams.find("versionId");
        if (it != queryParams.end()) {
          m_versionId = it->second;
        }
        if (authorityMatch.str(3) != "amazonaws") {
          m_region = authorityMatch.str(3).c_str();
        }
      }
    }
  } // namespace S3
} // namespace Aws