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
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration();
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of crawl limits for the web URLs.</p>
     */
    inline const WebCrawlerLimits& GetCrawlerLimits() const{ return m_crawlerLimits; }
    inline bool CrawlerLimitsHasBeenSet() const { return m_crawlerLimitsHasBeenSet; }
    inline void SetCrawlerLimits(const WebCrawlerLimits& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = value; }
    inline void SetCrawlerLimits(WebCrawlerLimits&& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = std::move(value); }
    inline WebCrawlerConfiguration& WithCrawlerLimits(const WebCrawlerLimits& value) { SetCrawlerLimits(value); return *this;}
    inline WebCrawlerConfiguration& WithCrawlerLimits(WebCrawlerLimits&& value) { SetCrawlerLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const{ return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    inline void SetExclusionFilters(const Aws::Vector<Aws::String>& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = value; }
    inline void SetExclusionFilters(Aws::Vector<Aws::String>&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::move(value); }
    inline WebCrawlerConfiguration& WithExclusionFilters(const Aws::Vector<Aws::String>& value) { SetExclusionFilters(value); return *this;}
    inline WebCrawlerConfiguration& WithExclusionFilters(Aws::Vector<Aws::String>&& value) { SetExclusionFilters(std::move(value)); return *this;}
    inline WebCrawlerConfiguration& AddExclusionFilters(const Aws::String& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    inline WebCrawlerConfiguration& AddExclusionFilters(Aws::String&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(std::move(value)); return *this; }
    inline WebCrawlerConfiguration& AddExclusionFilters(const char* value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const{ return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    inline void SetInclusionFilters(const Aws::Vector<Aws::String>& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = value; }
    inline void SetInclusionFilters(Aws::Vector<Aws::String>&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::move(value); }
    inline WebCrawlerConfiguration& WithInclusionFilters(const Aws::Vector<Aws::String>& value) { SetInclusionFilters(value); return *this;}
    inline WebCrawlerConfiguration& WithInclusionFilters(Aws::Vector<Aws::String>&& value) { SetInclusionFilters(std::move(value)); return *this;}
    inline WebCrawlerConfiguration& AddInclusionFilters(const Aws::String& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    inline WebCrawlerConfiguration& AddInclusionFilters(Aws::String&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(std::move(value)); return *this; }
    inline WebCrawlerConfiguration& AddInclusionFilters(const char* value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
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
    inline const WebScopeType& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const WebScopeType& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(WebScopeType&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline WebCrawlerConfiguration& WithScope(const WebScopeType& value) { SetScope(value); return *this;}
    inline WebCrawlerConfiguration& WithScope(WebScopeType&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used for identifying the crawler or a bot when it accesses a web
     * server. By default, this is set to <code>bedrockbot_UUID</code> for your
     * crawler. You can optionally append a custom string to
     * <code>bedrockbot_UUID</code> to allowlist a specific user agent permitted to
     * access your source URLs. </p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }
    inline WebCrawlerConfiguration& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}
    inline WebCrawlerConfiguration& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}
    inline WebCrawlerConfiguration& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}
    ///@}
  private:

    WebCrawlerLimits m_crawlerLimits;
    bool m_crawlerLimitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    WebScopeType m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
