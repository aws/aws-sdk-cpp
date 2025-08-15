/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SharePointSourceConfiguration.h>
#include <aws/bedrock-agent/model/SharePointCrawlerConfiguration.h>
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
   * <p>The configuration information to connect to SharePoint as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SharePointDataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SharePointDataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint information to connect to your SharePoint data source.</p>
     */
    inline const SharePointSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SharePointSourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SharePointSourceConfiguration>
    SharePointDataSourceConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the SharePoint content. For example, configuring
     * specific types of SharePoint content.</p>
     */
    inline const SharePointCrawlerConfiguration& GetCrawlerConfiguration() const { return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    template<typename CrawlerConfigurationT = SharePointCrawlerConfiguration>
    void SetCrawlerConfiguration(CrawlerConfigurationT&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::forward<CrawlerConfigurationT>(value); }
    template<typename CrawlerConfigurationT = SharePointCrawlerConfiguration>
    SharePointDataSourceConfiguration& WithCrawlerConfiguration(CrawlerConfigurationT&& value) { SetCrawlerConfiguration(std::forward<CrawlerConfigurationT>(value)); return *this;}
    ///@}
  private:

    SharePointSourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    SharePointCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
