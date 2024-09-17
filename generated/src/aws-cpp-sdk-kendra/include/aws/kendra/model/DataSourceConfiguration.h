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
#include <aws/kendra/model/GoogleDriveConfiguration.h>
#include <aws/kendra/model/WebCrawlerConfiguration.h>
#include <aws/kendra/model/WorkDocsConfiguration.h>
#include <aws/kendra/model/FsxConfiguration.h>
#include <aws/kendra/model/SlackConfiguration.h>
#include <aws/kendra/model/BoxConfiguration.h>
#include <aws/kendra/model/QuipConfiguration.h>
#include <aws/kendra/model/JiraConfiguration.h>
#include <aws/kendra/model/GitHubConfiguration.h>
#include <aws/kendra/model/TemplateConfiguration.h>
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
   * <p>Provides the configuration information for an Amazon Kendra data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceConfiguration
  {
  public:
    AWS_KENDRA_API DataSourceConfiguration();
    AWS_KENDRA_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>  <p>Amazon Kendra now supports an upgraded Amazon S3
     * connector.</p> <p>You must now use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
     * object instead of the <code>S3DataSourceConfiguration</code> object to configure
     * your connector.</p> <p>Connectors configured using the older console and API
     * architecture will continue to function as configured. However, you won't be able
     * to edit or update them. If you want to edit or update your connector
     * configuration, you must create a new connector.</p> <p>We recommended migrating
     * your connector workflow to the upgraded version. Support for connectors
     * configured using the older architecture is scheduled to end by June 2024.</p>
     * 
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
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline const SharePointConfiguration& GetSharePointConfiguration() const{ return m_sharePointConfiguration; }
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }
    inline void SetSharePointConfiguration(const SharePointConfiguration& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = value; }
    inline void SetSharePointConfiguration(SharePointConfiguration&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithSharePointConfiguration(const SharePointConfiguration& value) { SetSharePointConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithSharePointConfiguration(SharePointConfiguration&& value) { SetSharePointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline const DatabaseConfiguration& GetDatabaseConfiguration() const{ return m_databaseConfiguration; }
    inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }
    inline void SetDatabaseConfiguration(const DatabaseConfiguration& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = value; }
    inline void SetDatabaseConfiguration(DatabaseConfiguration&& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithDatabaseConfiguration(const DatabaseConfiguration& value) { SetDatabaseConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithDatabaseConfiguration(DatabaseConfiguration&& value) { SetDatabaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline const SalesforceConfiguration& GetSalesforceConfiguration() const{ return m_salesforceConfiguration; }
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }
    inline void SetSalesforceConfiguration(const SalesforceConfiguration& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = value; }
    inline void SetSalesforceConfiguration(SalesforceConfiguration&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithSalesforceConfiguration(const SalesforceConfiguration& value) { SetSalesforceConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithSalesforceConfiguration(SalesforceConfiguration&& value) { SetSalesforceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline const OneDriveConfiguration& GetOneDriveConfiguration() const{ return m_oneDriveConfiguration; }
    inline bool OneDriveConfigurationHasBeenSet() const { return m_oneDriveConfigurationHasBeenSet; }
    inline void SetOneDriveConfiguration(const OneDriveConfiguration& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = value; }
    inline void SetOneDriveConfiguration(OneDriveConfiguration&& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithOneDriveConfiguration(const OneDriveConfiguration& value) { SetOneDriveConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithOneDriveConfiguration(OneDriveConfiguration&& value) { SetOneDriveConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline const ServiceNowConfiguration& GetServiceNowConfiguration() const{ return m_serviceNowConfiguration; }
    inline bool ServiceNowConfigurationHasBeenSet() const { return m_serviceNowConfigurationHasBeenSet; }
    inline void SetServiceNowConfiguration(const ServiceNowConfiguration& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = value; }
    inline void SetServiceNowConfiguration(ServiceNowConfiguration&& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithServiceNowConfiguration(const ServiceNowConfiguration& value) { SetServiceNowConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithServiceNowConfiguration(ServiceNowConfiguration&& value) { SetServiceNowConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline const ConfluenceConfiguration& GetConfluenceConfiguration() const{ return m_confluenceConfiguration; }
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }
    inline void SetConfluenceConfiguration(const ConfluenceConfiguration& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = value; }
    inline void SetConfluenceConfiguration(ConfluenceConfiguration&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithConfluenceConfiguration(const ConfluenceConfiguration& value) { SetConfluenceConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceConfiguration&& value) { SetConfluenceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline const GoogleDriveConfiguration& GetGoogleDriveConfiguration() const{ return m_googleDriveConfiguration; }
    inline bool GoogleDriveConfigurationHasBeenSet() const { return m_googleDriveConfigurationHasBeenSet; }
    inline void SetGoogleDriveConfiguration(const GoogleDriveConfiguration& value) { m_googleDriveConfigurationHasBeenSet = true; m_googleDriveConfiguration = value; }
    inline void SetGoogleDriveConfiguration(GoogleDriveConfiguration&& value) { m_googleDriveConfigurationHasBeenSet = true; m_googleDriveConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithGoogleDriveConfiguration(const GoogleDriveConfiguration& value) { SetGoogleDriveConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithGoogleDriveConfiguration(GoogleDriveConfiguration&& value) { SetGoogleDriveConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const WebCrawlerConfiguration& GetWebCrawlerConfiguration() const{ return m_webCrawlerConfiguration; }
    inline bool WebCrawlerConfigurationHasBeenSet() const { return m_webCrawlerConfigurationHasBeenSet; }
    inline void SetWebCrawlerConfiguration(const WebCrawlerConfiguration& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = value; }
    inline void SetWebCrawlerConfiguration(WebCrawlerConfiguration&& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithWebCrawlerConfiguration(const WebCrawlerConfiguration& value) { SetWebCrawlerConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithWebCrawlerConfiguration(WebCrawlerConfiguration&& value) { SetWebCrawlerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline const WorkDocsConfiguration& GetWorkDocsConfiguration() const{ return m_workDocsConfiguration; }
    inline bool WorkDocsConfigurationHasBeenSet() const { return m_workDocsConfigurationHasBeenSet; }
    inline void SetWorkDocsConfiguration(const WorkDocsConfiguration& value) { m_workDocsConfigurationHasBeenSet = true; m_workDocsConfiguration = value; }
    inline void SetWorkDocsConfiguration(WorkDocsConfiguration&& value) { m_workDocsConfigurationHasBeenSet = true; m_workDocsConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithWorkDocsConfiguration(const WorkDocsConfiguration& value) { SetWorkDocsConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithWorkDocsConfiguration(WorkDocsConfiguration&& value) { SetWorkDocsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>  <p>Amazon Kendra now supports an upgraded Amazon FSx Windows
     * connector.</p> <p>You must now use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
     * object instead of the <code>FsxConfiguration</code> object to configure your
     * connector.</p> <p>Connectors configured using the older console and API
     * architecture will continue to function as configured. However, you won't be able
     * to edit or update them. If you want to edit or update your connector
     * configuration, you must create a new connector.</p> <p>We recommended migrating
     * your connector workflow to the upgraded version. Support for connectors
     * configured using the older architecture is scheduled to end by June 2024.</p>
     * 
     */
    inline const FsxConfiguration& GetFsxConfiguration() const{ return m_fsxConfiguration; }
    inline bool FsxConfigurationHasBeenSet() const { return m_fsxConfigurationHasBeenSet; }
    inline void SetFsxConfiguration(const FsxConfiguration& value) { m_fsxConfigurationHasBeenSet = true; m_fsxConfiguration = value; }
    inline void SetFsxConfiguration(FsxConfiguration&& value) { m_fsxConfigurationHasBeenSet = true; m_fsxConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithFsxConfiguration(const FsxConfiguration& value) { SetFsxConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithFsxConfiguration(FsxConfiguration&& value) { SetFsxConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>  <p>Amazon Kendra now supports an upgraded Slack
     * connector.</p> <p>You must now use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
     * object instead of the <code>SlackConfiguration</code> object to configure your
     * connector.</p> <p>Connectors configured using the older console and API
     * architecture will continue to function as configured. However, you won't be able
     * to edit or update them. If you want to edit or update your connector
     * configuration, you must create a new connector.</p> <p>We recommended migrating
     * your connector workflow to the upgraded version. Support for connectors
     * configured using the older architecture is scheduled to end by June 2024.</p>
     * 
     */
    inline const SlackConfiguration& GetSlackConfiguration() const{ return m_slackConfiguration; }
    inline bool SlackConfigurationHasBeenSet() const { return m_slackConfigurationHasBeenSet; }
    inline void SetSlackConfiguration(const SlackConfiguration& value) { m_slackConfigurationHasBeenSet = true; m_slackConfiguration = value; }
    inline void SetSlackConfiguration(SlackConfiguration&& value) { m_slackConfigurationHasBeenSet = true; m_slackConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithSlackConfiguration(const SlackConfiguration& value) { SetSlackConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithSlackConfiguration(SlackConfiguration&& value) { SetSlackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline const BoxConfiguration& GetBoxConfiguration() const{ return m_boxConfiguration; }
    inline bool BoxConfigurationHasBeenSet() const { return m_boxConfigurationHasBeenSet; }
    inline void SetBoxConfiguration(const BoxConfiguration& value) { m_boxConfigurationHasBeenSet = true; m_boxConfiguration = value; }
    inline void SetBoxConfiguration(BoxConfiguration&& value) { m_boxConfigurationHasBeenSet = true; m_boxConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithBoxConfiguration(const BoxConfiguration& value) { SetBoxConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithBoxConfiguration(BoxConfiguration&& value) { SetBoxConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline const QuipConfiguration& GetQuipConfiguration() const{ return m_quipConfiguration; }
    inline bool QuipConfigurationHasBeenSet() const { return m_quipConfigurationHasBeenSet; }
    inline void SetQuipConfiguration(const QuipConfiguration& value) { m_quipConfigurationHasBeenSet = true; m_quipConfiguration = value; }
    inline void SetQuipConfiguration(QuipConfiguration&& value) { m_quipConfigurationHasBeenSet = true; m_quipConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithQuipConfiguration(const QuipConfiguration& value) { SetQuipConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithQuipConfiguration(QuipConfiguration&& value) { SetQuipConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline const JiraConfiguration& GetJiraConfiguration() const{ return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    inline void SetJiraConfiguration(const JiraConfiguration& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = value; }
    inline void SetJiraConfiguration(JiraConfiguration&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithJiraConfiguration(const JiraConfiguration& value) { SetJiraConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithJiraConfiguration(JiraConfiguration&& value) { SetJiraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>  <p>Amazon Kendra now supports an upgraded GitHub
     * connector.</p> <p>You must now use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
     * object instead of the <code>GitHubConfiguration</code> object to configure your
     * connector.</p> <p>Connectors configured using the older console and API
     * architecture will continue to function as configured. However, you won’t be able
     * to edit or update them. If you want to edit or update your connector
     * configuration, you must create a new connector.</p> <p>We recommended migrating
     * your connector workflow to the upgraded version. Support for connectors
     * configured using the older architecture is scheduled to end by June 2024.</p>
     * 
     */
    inline const GitHubConfiguration& GetGitHubConfiguration() const{ return m_gitHubConfiguration; }
    inline bool GitHubConfigurationHasBeenSet() const { return m_gitHubConfigurationHasBeenSet; }
    inline void SetGitHubConfiguration(const GitHubConfiguration& value) { m_gitHubConfigurationHasBeenSet = true; m_gitHubConfiguration = value; }
    inline void SetGitHubConfiguration(GitHubConfiguration&& value) { m_gitHubConfigurationHasBeenSet = true; m_gitHubConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithGitHubConfiguration(const GitHubConfiguration& value) { SetGitHubConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithGitHubConfiguration(GitHubConfiguration&& value) { SetGitHubConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline DataSourceConfiguration& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline DataSourceConfiguration& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    SharePointConfiguration m_sharePointConfiguration;
    bool m_sharePointConfigurationHasBeenSet = false;

    DatabaseConfiguration m_databaseConfiguration;
    bool m_databaseConfigurationHasBeenSet = false;

    SalesforceConfiguration m_salesforceConfiguration;
    bool m_salesforceConfigurationHasBeenSet = false;

    OneDriveConfiguration m_oneDriveConfiguration;
    bool m_oneDriveConfigurationHasBeenSet = false;

    ServiceNowConfiguration m_serviceNowConfiguration;
    bool m_serviceNowConfigurationHasBeenSet = false;

    ConfluenceConfiguration m_confluenceConfiguration;
    bool m_confluenceConfigurationHasBeenSet = false;

    GoogleDriveConfiguration m_googleDriveConfiguration;
    bool m_googleDriveConfigurationHasBeenSet = false;

    WebCrawlerConfiguration m_webCrawlerConfiguration;
    bool m_webCrawlerConfigurationHasBeenSet = false;

    WorkDocsConfiguration m_workDocsConfiguration;
    bool m_workDocsConfigurationHasBeenSet = false;

    FsxConfiguration m_fsxConfiguration;
    bool m_fsxConfigurationHasBeenSet = false;

    SlackConfiguration m_slackConfiguration;
    bool m_slackConfigurationHasBeenSet = false;

    BoxConfiguration m_boxConfiguration;
    bool m_boxConfigurationHasBeenSet = false;

    QuipConfiguration m_quipConfiguration;
    bool m_quipConfigurationHasBeenSet = false;

    JiraConfiguration m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;

    GitHubConfiguration m_gitHubConfiguration;
    bool m_gitHubConfigurationHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
