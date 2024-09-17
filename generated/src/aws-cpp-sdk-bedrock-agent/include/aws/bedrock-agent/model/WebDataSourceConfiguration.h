/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/WebCrawlerConfiguration.h>
#include <aws/bedrock-agent/model/WebSourceConfiguration.h>
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
   * <p>The configuration details for the web data source.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/WebDataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class WebDataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API WebDataSourceConfiguration();
    AWS_BEDROCKAGENT_API WebDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API WebDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Web Crawler configuration details for the web data source.</p>
     */
    inline const WebCrawlerConfiguration& GetCrawlerConfiguration() const{ return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    inline void SetCrawlerConfiguration(const WebCrawlerConfiguration& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = value; }
    inline void SetCrawlerConfiguration(WebCrawlerConfiguration&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::move(value); }
    inline WebDataSourceConfiguration& WithCrawlerConfiguration(const WebCrawlerConfiguration& value) { SetCrawlerConfiguration(value); return *this;}
    inline WebDataSourceConfiguration& WithCrawlerConfiguration(WebCrawlerConfiguration&& value) { SetCrawlerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration details for the web data source.</p>
     */
    inline const WebSourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const WebSourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(WebSourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline WebDataSourceConfiguration& WithSourceConfiguration(const WebSourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline WebDataSourceConfiguration& WithSourceConfiguration(WebSourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    WebCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;

    WebSourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
