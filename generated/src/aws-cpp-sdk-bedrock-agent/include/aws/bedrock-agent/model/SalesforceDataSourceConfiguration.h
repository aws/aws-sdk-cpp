/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SalesforceCrawlerConfiguration.h>
#include <aws/bedrock-agent/model/SalesforceSourceConfiguration.h>
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
   * <p>The configuration information to connect to Salesforce as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SalesforceDataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceDataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration();
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the Salesforce content. For example, configuring
     * specific types of Salesforce content.</p>
     */
    inline const SalesforceCrawlerConfiguration& GetCrawlerConfiguration() const{ return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    inline void SetCrawlerConfiguration(const SalesforceCrawlerConfiguration& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = value; }
    inline void SetCrawlerConfiguration(SalesforceCrawlerConfiguration&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::move(value); }
    inline SalesforceDataSourceConfiguration& WithCrawlerConfiguration(const SalesforceCrawlerConfiguration& value) { SetCrawlerConfiguration(value); return *this;}
    inline SalesforceDataSourceConfiguration& WithCrawlerConfiguration(SalesforceCrawlerConfiguration&& value) { SetCrawlerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint information to connect to your Salesforce data source.</p>
     */
    inline const SalesforceSourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SalesforceSourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SalesforceSourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline SalesforceDataSourceConfiguration& WithSourceConfiguration(const SalesforceSourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline SalesforceDataSourceConfiguration& WithSourceConfiguration(SalesforceSourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    SalesforceCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;

    SalesforceSourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
