#pragma once

#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/net/URI.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

namespace Aws
{
  namespace S3
  {
    enum class Scheme
    {
      HTTP,
      HTTPS,
      S3
    };
  }

  namespace Net
  {
    template <>
    class SchemeTraits<S3::Scheme>
    {
    public:
      static const char *ToString(S3::Scheme scheme)
      {
        switch (scheme)
        {
        case S3::Scheme::S3:
          return "s3";
        case S3::Scheme::HTTP:
          return "http";
        case S3::Scheme::HTTPS:
        default:
          return "https";
        }
      }

      static S3::Scheme FromString(const char *name)
      {
        Aws::String trimmedString = Utils::StringUtils::Trim(name);
        Aws::String loweredTrimmedString = Utils::StringUtils::ToLower(trimmedString.c_str());

        if (loweredTrimmedString == "s3")
        {
          return S3::Scheme::S3;
        }
        else if (loweredTrimmedString == "http")
        {
          return S3::Scheme::HTTP;
        }
        else if (loweredTrimmedString == "https")
        {
          return S3::Scheme::HTTPS;
        }

        return S3::Scheme::HTTPS;
      }

      static uint16_t DefaultPort(S3::Scheme scheme)
      {
        switch (scheme)
        {
        case S3::Scheme::HTTP:
          return HTTP_DEFAULT_PORT;
        case S3::Scheme::HTTPS:
          return HTTPS_DEFAULT_PORT;
        case S3::Scheme::S3:
          return 0;
        }

        AWS_LOGSTREAM_ERROR("S3::URI", "Unknown scheme: '" << ToString(scheme));
        assert(false);
        return 0;
      }

    private:
      static constexpr uint16_t HTTP_DEFAULT_PORT = 80;
      static constexpr uint16_t HTTPS_DEFAULT_PORT = 443;
    };
  } // namespace Net

  namespace S3
  {

    /**
     * class modeling universal resource identifier, but implemented for s3
     */
    class AWS_S3_API S3URI : public Net::URI<Scheme>
    {
      using Base = Net::URI<Scheme>;

    public:
      S3URI();

      /**
        * Parses string and sets uri fields
        */
      S3URI(const Aws::String &);

      /**
        * Parses string and sets uri fields
        */
      S3URI(const char *);

      /**
       * the bucket name parsed from the URI (or empty string if no bucket specified)
       */
      Aws::String GetBucket() const { return m_bucket; }

      /** 
       * the key parsed from the URI (or empty string if no key specified)
       */
      Aws::String GetKey() const { return m_key; }

      /**
       * the region parsed from the URI (or empty string if no region specified)
       */
      Aws::String GetRegion() const { return m_region; }

      /**
       * the version id parsed from the URI (or empty string if no version specified)
       */
      Aws::String GetVersionId() const { return m_versionId; }

      /**
       * true if the URI contains the bucket in the path, false if it contains the bucket in the
       * authority
       */
      bool GetIsPathStyle() const { return m_isPathStyle; }

    private:
      void SetFields();

      Aws::String m_bucket;
      Aws::String m_key;
      Aws::String m_region;
      Aws::String m_versionId;
      bool m_isPathStyle = false;
    };

  } // namespace S3

} // namespace Aws