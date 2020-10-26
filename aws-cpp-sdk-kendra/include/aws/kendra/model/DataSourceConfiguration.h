/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/S3DataSourceConfiguration.h>
#include <aws/kendra/model/SharePointConfiguration.h>
#include <aws/kendra/model/DatabaseConfiguration.h>
#include <aws/kendra/model/SalesforceConfiguration.h>
#include <aws/kendra/model/OneDriveConfiguration.h>
#include <aws/kendra/model/ServiceNowConfiguration.h>
#include <aws/kendra/model/ConfluenceConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Configuration information for a Amazon Kendra data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DataSourceConfiguration
  {
  public:
    DataSourceConfiguration();
    DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline void SetS3Configuration(const S3DataSourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline void SetS3Configuration(S3DataSourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(const S3DataSourceConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Provides information to create a data source connector for a document
     * repository in an Amazon S3 bucket.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(S3DataSourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline const SharePointConfiguration& GetSharePointConfiguration() const{ return m_sharePointConfiguration; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline void SetSharePointConfiguration(const SharePointConfiguration& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = value; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline void SetSharePointConfiguration(SharePointConfiguration&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::move(value); }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(const SharePointConfiguration& value) { SetSharePointConfiguration(value); return *this;}

    /**
     * <p>Provides information necessary to create a data source connector for a
     * Microsoft SharePoint site.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(SharePointConfiguration&& value) { SetSharePointConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline const DatabaseConfiguration& GetDatabaseConfiguration() const{ return m_databaseConfiguration; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline void SetDatabaseConfiguration(const DatabaseConfiguration& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = value; }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline void SetDatabaseConfiguration(DatabaseConfiguration&& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = std::move(value); }

    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(const DatabaseConfiguration& value) { SetDatabaseConfiguration(value); return *this;}

    /**
     * <p>Provides information necessary to create a data source connector for a
     * database.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(DatabaseConfiguration&& value) { SetDatabaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline const SalesforceConfiguration& GetSalesforceConfiguration() const{ return m_salesforceConfiguration; }

    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline void SetSalesforceConfiguration(const SalesforceConfiguration& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = value; }

    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline void SetSalesforceConfiguration(SalesforceConfiguration&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline DataSourceConfiguration& WithSalesforceConfiguration(const SalesforceConfiguration& value) { SetSalesforceConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information for data sources that connect to a
     * Salesforce site.</p>
     */
    inline DataSourceConfiguration& WithSalesforceConfiguration(SalesforceConfiguration&& value) { SetSalesforceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline const OneDriveConfiguration& GetOneDriveConfiguration() const{ return m_oneDriveConfiguration; }

    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline bool OneDriveConfigurationHasBeenSet() const { return m_oneDriveConfigurationHasBeenSet; }

    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline void SetOneDriveConfiguration(const OneDriveConfiguration& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = value; }

    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline void SetOneDriveConfiguration(OneDriveConfiguration&& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = std::move(value); }

    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline DataSourceConfiguration& WithOneDriveConfiguration(const OneDriveConfiguration& value) { SetOneDriveConfiguration(value); return *this;}

    /**
     * <p>Provided configuration for data sources that connect to Microsoft
     * OneDrive.</p>
     */
    inline DataSourceConfiguration& WithOneDriveConfiguration(OneDriveConfiguration&& value) { SetOneDriveConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline const ServiceNowConfiguration& GetServiceNowConfiguration() const{ return m_serviceNowConfiguration; }

    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline bool ServiceNowConfigurationHasBeenSet() const { return m_serviceNowConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline void SetServiceNowConfiguration(const ServiceNowConfiguration& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = value; }

    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline void SetServiceNowConfiguration(ServiceNowConfiguration&& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = std::move(value); }

    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline DataSourceConfiguration& WithServiceNowConfiguration(const ServiceNowConfiguration& value) { SetServiceNowConfiguration(value); return *this;}

    /**
     * <p>Provides configuration for data sources that connect to ServiceNow
     * instances.</p>
     */
    inline DataSourceConfiguration& WithServiceNowConfiguration(ServiceNowConfiguration&& value) { SetServiceNowConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline const ConfluenceConfiguration& GetConfluenceConfiguration() const{ return m_confluenceConfiguration; }

    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline void SetConfluenceConfiguration(const ConfluenceConfiguration& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = value; }

    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline void SetConfluenceConfiguration(ConfluenceConfiguration&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline DataSourceConfiguration& WithConfluenceConfiguration(const ConfluenceConfiguration& value) { SetConfluenceConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information for connecting to a Confluence data
     * source.</p>
     */
    inline DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceConfiguration&& value) { SetConfluenceConfiguration(std::move(value)); return *this;}

  private:

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet;

    SharePointConfiguration m_sharePointConfiguration;
    bool m_sharePointConfigurationHasBeenSet;

    DatabaseConfiguration m_databaseConfiguration;
    bool m_databaseConfigurationHasBeenSet;

    SalesforceConfiguration m_salesforceConfiguration;
    bool m_salesforceConfigurationHasBeenSet;

    OneDriveConfiguration m_oneDriveConfiguration;
    bool m_oneDriveConfigurationHasBeenSet;

    ServiceNowConfiguration m_serviceNowConfiguration;
    bool m_serviceNowConfigurationHasBeenSet;

    ConfluenceConfiguration m_confluenceConfiguration;
    bool m_confluenceConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
