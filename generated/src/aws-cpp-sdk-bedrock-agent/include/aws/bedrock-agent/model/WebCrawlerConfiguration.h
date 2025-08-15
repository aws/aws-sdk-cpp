/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/WebCrawlerLimits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/WebScopeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The configuration of web URLs that you want to crawl. You should be
   * authorized to crawl the URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/WebCrawlerConfiguration">AWS
   * API Reference</a></p>
   */
  class WebCrawlerConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration() = default;
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of crawl limits for the web URLs.</p>
     */
    inline const WebCrawlerLimits& GetCrawlerLimits() const { return m_crawlerLimits; }
    inline bool CrawlerLimitsHasBeenSet() const { return m_crawlerLimitsHasBeenSet; }
    template<typename CrawlerLimitsT = WebCrawlerLimits>
    void SetCrawlerLimits(CrawlerLimitsT&& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = std::forward<CrawlerLimitsT>(value); }
    template<typename CrawlerLimitsT = WebCrawlerLimits>
    WebCrawlerConfiguration& WithCrawlerLimits(CrawlerLimitsT&& value) { SetCrawlerLimits(std::forward<CrawlerLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const { return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    void SetInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::forward<InclusionFiltersT>(value); }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithInclusionFilters(InclusionFiltersT&& value) { SetInclusionFilters(std::forward<InclusionFiltersT>(value)); return *this;}
    template<typename InclusionFiltersT = Aws::String>
    WebCrawlerConfiguration& AddInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.emplace_back(std::forward<InclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const { return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    void SetExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::forward<ExclusionFiltersT>(value); }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithExclusionFilters(ExclusionFiltersT&& value) { SetExclusionFilters(std::forward<ExclusionFiltersT>(value)); return *this;}
    template<typename ExclusionFiltersT = Aws::String>
    WebCrawlerConfiguration& AddExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.emplace_back(std::forward<ExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of what is crawled for your URLs.</p> <p>You can choose to crawl
     * only web pages that belong to the same host or primary domain. For example, only
     * web pages that contain the seed URL
     * "https://docs.aws.amazon.com/bedrock/latest/userguide/" and no other domains.
     * You can choose to include sub domains in addition to the host or primary domain.
     * For example, web pages that contain "aws.amazon.com" can also include sub domain
     * "docs.aws.amazon.com".</p>
     */
    inline WebScopeType GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(WebScopeType value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline WebCrawlerConfiguration& WithScope(WebScopeType value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the user agent suffix for your web crawler.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    WebCrawlerConfiguration& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used for identifying the crawler or bot when it accesses a web
     * server. The user agent header value consists of the <code>bedrockbot</code>,
     * UUID, and a user agent suffix for your crawler (if one is provided). By default,
     * it is set to <code>bedrockbot_UUID</code>. You can optionally append a custom
     * suffix to <code>bedrockbot_UUID</code> to allowlist a specific user agent
     * permitted to access your source URLs. </p>
     */
    inline const Aws::String& GetUserAgentHeader() const { return m_userAgentHeader; }
    inline bool UserAgentHeaderHasBeenSet() const { return m_userAgentHeaderHasBeenSet; }
    template<typename UserAgentHeaderT = Aws::String>
    void SetUserAgentHeader(UserAgentHeaderT&& value) { m_userAgentHeaderHasBeenSet = true; m_userAgentHeader = std::forward<UserAgentHeaderT>(value); }
    template<typename UserAgentHeaderT = Aws::String>
    WebCrawlerConfiguration& WithUserAgentHeader(UserAgentHeaderT&& value) { SetUserAgentHeader(std::forward<UserAgentHeaderT>(value)); return *this;}
    ///@}
  private:

    WebCrawlerLimits m_crawlerLimits;
    bool m_crawlerLimitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    WebScopeType m_scope{WebScopeType::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    Aws::String m_userAgentHeader;
    bool m_userAgentHeaderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
