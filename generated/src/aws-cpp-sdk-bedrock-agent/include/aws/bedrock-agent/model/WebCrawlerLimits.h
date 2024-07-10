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
    AWS_BEDROCKAGENT_API WebCrawlerLimits();
    AWS_BEDROCKAGENT_API WebCrawlerLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebCrawlerLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The max rate at which pages are crawled, up to 300 per minute per host.</p>
     */
    inline int GetRateLimit() const{ return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(int value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline WebCrawlerLimits& WithRateLimit(int value) { SetRateLimit(value); return *this;}
    ///@}
  private:

    int m_rateLimit;
    bool m_rateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
