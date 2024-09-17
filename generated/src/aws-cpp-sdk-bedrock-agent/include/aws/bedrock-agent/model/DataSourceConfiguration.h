/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ConfluenceDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/S3DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/SalesforceDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/SharePointDataSourceConfiguration.h>
#include <aws/bedrock-agent/model/DataSourceType.h>
#include <aws/bedrock-agent/model/WebDataSourceConfiguration.h>
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
    AWS_BEDROCKAGENT_API DataSourceConfiguration();
    AWS_BEDROCKAGENT_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration information to connect to Confluence as your data
     * source.</p>  <p>Confluence data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const ConfluenceDataSourceConfiguration& GetConfluenceConfiguration() const{ return m_confluenceConfiguration; }
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }
    inline void SetConfluenceConfiguration(const ConfluenceDataSourceConfiguration& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = value; }
    inline void SetConfluenceConfiguration(ConfluenceDataSourceConfiguration&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithConfluenceConfiguration(const ConfluenceDataSourceConfiguration& value) { SetConfluenceConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceDataSourceConfiguration&& value) { SetConfluenceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to Amazon S3 as your data
     * source.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const S3DataSourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(S3DataSourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline DataSourceConfiguration& WithS3Configuration(const S3DataSourceConfiguration& value) { SetS3Configuration(value); return *this;}
    inline DataSourceConfiguration& WithS3Configuration(S3DataSourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to Salesforce as your data
     * source.</p>  <p>Salesforce data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const SalesforceDataSourceConfiguration& GetSalesforceConfiguration() const{ return m_salesforceConfiguration; }
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }
    inline void SetSalesforceConfiguration(const SalesforceDataSourceConfiguration& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = value; }
    inline void SetSalesforceConfiguration(SalesforceDataSourceConfiguration&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithSalesforceConfiguration(const SalesforceDataSourceConfiguration& value) { SetSalesforceConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithSalesforceConfiguration(SalesforceDataSourceConfiguration&& value) { SetSalesforceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information to connect to SharePoint as your data
     * source.</p>  <p>SharePoint data source connector is in preview release and
     * is subject to change.</p> 
     */
    inline const SharePointDataSourceConfiguration& GetSharePointConfiguration() const{ return m_sharePointConfiguration; }
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }
    inline void SetSharePointConfiguration(const SharePointDataSourceConfiguration& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = value; }
    inline void SetSharePointConfiguration(SharePointDataSourceConfiguration&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithSharePointConfiguration(const SharePointDataSourceConfiguration& value) { SetSharePointConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithSharePointConfiguration(SharePointDataSourceConfiguration&& value) { SetSharePointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DataSourceConfiguration& WithType(const DataSourceType& value) { SetType(value); return *this;}
    inline DataSourceConfiguration& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of web URLs to crawl for your data source. You should be
     * authorized to crawl the URLs.</p>  <p>Crawling web URLs as your data
     * source is in preview release and is subject to change.</p> 
     */
    inline const WebDataSourceConfiguration& GetWebConfiguration() const{ return m_webConfiguration; }
    inline bool WebConfigurationHasBeenSet() const { return m_webConfigurationHasBeenSet; }
    inline void SetWebConfiguration(const WebDataSourceConfiguration& value) { m_webConfigurationHasBeenSet = true; m_webConfiguration = value; }
    inline void SetWebConfiguration(WebDataSourceConfiguration&& value) { m_webConfigurationHasBeenSet = true; m_webConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithWebConfiguration(const WebDataSourceConfiguration& value) { SetWebConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithWebConfiguration(WebDataSourceConfiguration&& value) { SetWebConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ConfluenceDataSourceConfiguration m_confluenceConfiguration;
    bool m_confluenceConfigurationHasBeenSet = false;

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    SalesforceDataSourceConfiguration m_salesforceConfiguration;
    bool m_salesforceConfigurationHasBeenSet = false;

    SharePointDataSourceConfiguration m_sharePointConfiguration;
    bool m_sharePointConfigurationHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;

    WebDataSourceConfiguration m_webConfiguration;
    bool m_webConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
