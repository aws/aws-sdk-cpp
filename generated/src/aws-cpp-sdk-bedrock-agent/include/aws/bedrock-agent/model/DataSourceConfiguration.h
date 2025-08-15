/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DataSourceType.h>
#include <aws/bedrock-agent/model/S3DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/WebDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/ConfluenceDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/SalesforceDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/SharePointDataSourceConfiguration.h>
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
   * <p>The connection configuration for the data source.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API DataSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source.</p>
     */
    inline DataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSourceConfiguration& WithType(DataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to Amazon S3 as your data
     * source.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DataSourceConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DataSourceConfiguration>
    DataSourceConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of web URLs to crawl for your data source. You should be
     * authorized to crawl the URLs.</p>  <p>Crawling web URLs as your data
     * source is in preview release and is subject to change.</p> 
     */
    inline const WebDataSourceConfiguration& GetWebConfiguration() const { return m_webConfiguration; }
    inline bool WebConfigurationHasBeenSet() const { return m_webConfigurationHasBeenSet; }
    template<typename WebConfigurationT = WebDataSourceConfiguration>
    void SetWebConfiguration(WebConfigurationT&& value) { m_webConfigurationHasBeenSet = true; m_webConfiguration = std::forward<WebConfigurationT>(value); }
    template<typename WebConfigurationT = WebDataSourceConfiguration>
    DataSourceConfiguration& WithWebConfiguration(WebConfigurationT&& value) { SetWebConfiguration(std::forward<WebConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to Confluence as your data
     * source.</p>  <p>Confluence data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const ConfluenceDataSourceConfiguration& GetConfluenceConfiguration() const { return m_confluenceConfiguration; }
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }
    template<typename ConfluenceConfigurationT = ConfluenceDataSourceConfiguration>
    void SetConfluenceConfiguration(ConfluenceConfigurationT&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::forward<ConfluenceConfigurationT>(value); }
    template<typename ConfluenceConfigurationT = ConfluenceDataSourceConfiguration>
    DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceConfigurationT&& value) { SetConfluenceConfiguration(std::forward<ConfluenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to Salesforce as your data
     * source.</p>  <p>Salesforce data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const SalesforceDataSourceConfiguration& GetSalesforceConfiguration() const { return m_salesforceConfiguration; }
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }
    template<typename SalesforceConfigurationT = SalesforceDataSourceConfiguration>
    void SetSalesforceConfiguration(SalesforceConfigurationT&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::forward<SalesforceConfigurationT>(value); }
    template<typename SalesforceConfigurationT = SalesforceDataSourceConfiguration>
    DataSourceConfiguration& WithSalesforceConfiguration(SalesforceConfigurationT&& value) { SetSalesforceConfiguration(std::forward<SalesforceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to SharePoint as your data
     * source.</p>  <p>SharePoint data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const SharePointDataSourceConfiguration& GetSharePointConfiguration() const { return m_sharePointConfiguration; }
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }
    template<typename SharePointConfigurationT = SharePointDataSourceConfiguration>
    void SetSharePointConfiguration(SharePointConfigurationT&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::forward<SharePointConfigurationT>(value); }
    template<typename SharePointConfigurationT = SharePointDataSourceConfiguration>
    DataSourceConfiguration& WithSharePointConfiguration(SharePointConfigurationT&& value) { SetSharePointConfiguration(std::forward<SharePointConfigurationT>(value)); return *this;}
    ///@}
  private:

    DataSourceType m_type{DataSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    WebDataSourceConfiguration m_webConfiguration;
    bool m_webConfigurationHasBeenSet = false;

    ConfluenceDataSourceConfiguration m_confluenceConfiguration;
    bool m_confluenceConfigurationHasBeenSet = false;

    SalesforceDataSourceConfiguration m_salesforceConfiguration;
    bool m_salesforceConfigurationHasBeenSet = false;

    SharePointDataSourceConfiguration m_sharePointConfiguration;
    bool m_sharePointConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
