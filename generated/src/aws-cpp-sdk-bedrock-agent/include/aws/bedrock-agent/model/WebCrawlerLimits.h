/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
   * <p>The rate limits for the URLs that you want to crawl. You should be authorized
   * to crawl the URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/WebCrawlerLimits">AWS
   * API Reference</a></p>
   */
  class WebCrawlerLimits
  {
  public:
    AWS_BEDROCKAGENT_API WebCrawlerLimits() = default;
    AWS_BEDROCKAGENT_API WebCrawlerLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebCrawlerLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The max rate at which pages are crawled, up to 300 per minute per host.</p>
     */
    inline int GetRateLimit() const { return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(int value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline WebCrawlerLimits& WithRateLimit(int value) { SetRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The max number of web pages crawled from your source URLs, up to 25,000
     * pages. If the web pages exceed this limit, the data source sync will fail and no
     * web pages will be ingested. </p>
     */
    inline int GetMaxPages() const { return m_maxPages; }
    inline bool MaxPagesHasBeenSet() const { return m_maxPagesHasBeenSet; }
    inline void SetMaxPages(int value) { m_maxPagesHasBeenSet = true; m_maxPages = value; }
    inline WebCrawlerLimits& WithMaxPages(int value) { SetMaxPages(value); return *this;}
    ///@}
  private:

    int m_rateLimit{0};
    bool m_rateLimitHasBeenSet = false;

    int m_maxPages{0};
    bool m_maxPagesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
