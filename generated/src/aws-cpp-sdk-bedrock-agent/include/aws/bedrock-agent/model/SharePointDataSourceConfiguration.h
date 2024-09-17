/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SharePointCrawlerConfiguration.h>
#include <aws/bedrock-agent/model/SharePointSourceConfiguration.h>
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
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration();
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SharePointDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the SharePoint content. For example, configuring
     * specific types of SharePoint content.</p>
     */
    inline const SharePointCrawlerConfiguration& GetCrawlerConfiguration() const{ return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    inline void SetCrawlerConfiguration(const SharePointCrawlerConfiguration& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = value; }
    inline void SetCrawlerConfiguration(SharePointCrawlerConfiguration&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::move(value); }
    inline SharePointDataSourceConfiguration& WithCrawlerConfiguration(const SharePointCrawlerConfiguration& value) { SetCrawlerConfiguration(value); return *this;}
    inline SharePointDataSourceConfiguration& WithCrawlerConfiguration(SharePointCrawlerConfiguration&& value) { SetCrawlerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint information to connect to your SharePoint data source.</p>
     */
    inline const SharePointSourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SharePointSourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SharePointSourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline SharePointDataSourceConfiguration& WithSourceConfiguration(const SharePointSourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline SharePointDataSourceConfiguration& WithSourceConfiguration(SharePointSourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    SharePointCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;

    SharePointSourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
