/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SalesforceSourceConfiguration.h>
#include <aws/bedrock-agent/model/SalesforceCrawlerConfiguration.h>
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
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SalesforceDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint information to connect to your Salesforce data source.</p>
     */
    inline const SalesforceSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SalesforceSourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SalesforceSourceConfiguration>
    SalesforceDataSourceConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Salesforce content. For example, configuring
     * specific types of Salesforce content.</p>
     */
    inline const SalesforceCrawlerConfiguration& GetCrawlerConfiguration() const { return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    template<typename CrawlerConfigurationT = SalesforceCrawlerConfiguration>
    void SetCrawlerConfiguration(CrawlerConfigurationT&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::forward<CrawlerConfigurationT>(value); }
    template<typename CrawlerConfigurationT = SalesforceCrawlerConfiguration>
    SalesforceDataSourceConfiguration& WithCrawlerConfiguration(CrawlerConfigurationT&& value) { SetCrawlerConfiguration(std::forward<CrawlerConfigurationT>(value)); return *this;}
    ///@}
  private:

    SalesforceSourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    SalesforceCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
