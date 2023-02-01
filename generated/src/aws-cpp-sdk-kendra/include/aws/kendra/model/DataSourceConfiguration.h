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
#include <aws/kendra/model/AlfrescoConfiguration.h>
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


    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline void SetS3Configuration(const S3DataSourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline void SetS3Configuration(S3DataSourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(const S3DataSourceConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to an Amazon S3 bucket as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(S3DataSourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline const SharePointConfiguration& GetSharePointConfiguration() const{ return m_sharePointConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline void SetSharePointConfiguration(const SharePointConfiguration& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline void SetSharePointConfiguration(SharePointConfiguration&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(const SharePointConfiguration& value) { SetSharePointConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(SharePointConfiguration&& value) { SetSharePointConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline const DatabaseConfiguration& GetDatabaseConfiguration() const{ return m_databaseConfiguration; }

    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline void SetDatabaseConfiguration(const DatabaseConfiguration& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline void SetDatabaseConfiguration(DatabaseConfiguration&& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(const DatabaseConfiguration& value) { SetDatabaseConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(DatabaseConfiguration&& value) { SetDatabaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline const SalesforceConfiguration& GetSalesforceConfiguration() const{ return m_salesforceConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline void SetSalesforceConfiguration(const SalesforceConfiguration& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline void SetSalesforceConfiguration(SalesforceConfiguration&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithSalesforceConfiguration(const SalesforceConfiguration& value) { SetSalesforceConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithSalesforceConfiguration(SalesforceConfiguration&& value) { SetSalesforceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline const OneDriveConfiguration& GetOneDriveConfiguration() const{ return m_oneDriveConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline bool OneDriveConfigurationHasBeenSet() const { return m_oneDriveConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline void SetOneDriveConfiguration(const OneDriveConfiguration& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline void SetOneDriveConfiguration(OneDriveConfiguration&& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithOneDriveConfiguration(const OneDriveConfiguration& value) { SetOneDriveConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline DataSourceConfiguration& WithOneDriveConfiguration(OneDriveConfiguration&& value) { SetOneDriveConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline const ServiceNowConfiguration& GetServiceNowConfiguration() const{ return m_serviceNowConfiguration; }

    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline bool ServiceNowConfigurationHasBeenSet() const { return m_serviceNowConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline void SetServiceNowConfiguration(const ServiceNowConfiguration& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline void SetServiceNowConfiguration(ServiceNowConfiguration&& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithServiceNowConfiguration(const ServiceNowConfiguration& value) { SetServiceNowConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithServiceNowConfiguration(ServiceNowConfiguration&& value) { SetServiceNowConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline const ConfluenceConfiguration& GetConfluenceConfiguration() const{ return m_confluenceConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline void SetConfluenceConfiguration(const ConfluenceConfiguration& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline void SetConfluenceConfiguration(ConfluenceConfiguration&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithConfluenceConfiguration(const ConfluenceConfiguration& value) { SetConfluenceConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceConfiguration&& value) { SetConfluenceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline const GoogleDriveConfiguration& GetGoogleDriveConfiguration() const{ return m_googleDriveConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline bool GoogleDriveConfigurationHasBeenSet() const { return m_googleDriveConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline void SetGoogleDriveConfiguration(const GoogleDriveConfiguration& value) { m_googleDriveConfigurationHasBeenSet = true; m_googleDriveConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline void SetGoogleDriveConfiguration(GoogleDriveConfiguration&& value) { m_googleDriveConfigurationHasBeenSet = true; m_googleDriveConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline DataSourceConfiguration& WithGoogleDriveConfiguration(const GoogleDriveConfiguration& value) { SetGoogleDriveConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline DataSourceConfiguration& WithGoogleDriveConfiguration(GoogleDriveConfiguration&& value) { SetGoogleDriveConfiguration(std::move(value)); return *this;}


    
    inline const WebCrawlerConfiguration& GetWebCrawlerConfiguration() const{ return m_webCrawlerConfiguration; }

    
    inline bool WebCrawlerConfigurationHasBeenSet() const { return m_webCrawlerConfigurationHasBeenSet; }

    
    inline void SetWebCrawlerConfiguration(const WebCrawlerConfiguration& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = value; }

    
    inline void SetWebCrawlerConfiguration(WebCrawlerConfiguration&& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = std::move(value); }

    
    inline DataSourceConfiguration& WithWebCrawlerConfiguration(const WebCrawlerConfiguration& value) { SetWebCrawlerConfiguration(value); return *this;}

    
    inline DataSourceConfiguration& WithWebCrawlerConfiguration(WebCrawlerConfiguration&& value) { SetWebCrawlerConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline const WorkDocsConfiguration& GetWorkDocsConfiguration() const{ return m_workDocsConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline bool WorkDocsConfigurationHasBeenSet() const { return m_workDocsConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline void SetWorkDocsConfiguration(const WorkDocsConfiguration& value) { m_workDocsConfigurationHasBeenSet = true; m_workDocsConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline void SetWorkDocsConfiguration(WorkDocsConfiguration&& value) { m_workDocsConfigurationHasBeenSet = true; m_workDocsConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline DataSourceConfiguration& WithWorkDocsConfiguration(const WorkDocsConfiguration& value) { SetWorkDocsConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline DataSourceConfiguration& WithWorkDocsConfiguration(WorkDocsConfiguration&& value) { SetWorkDocsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline const FsxConfiguration& GetFsxConfiguration() const{ return m_fsxConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline bool FsxConfigurationHasBeenSet() const { return m_fsxConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline void SetFsxConfiguration(const FsxConfiguration& value) { m_fsxConfigurationHasBeenSet = true; m_fsxConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline void SetFsxConfiguration(FsxConfiguration&& value) { m_fsxConfigurationHasBeenSet = true; m_fsxConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithFsxConfiguration(const FsxConfiguration& value) { SetFsxConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Amazon FSx as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithFsxConfiguration(FsxConfiguration&& value) { SetFsxConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline const SlackConfiguration& GetSlackConfiguration() const{ return m_slackConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline bool SlackConfigurationHasBeenSet() const { return m_slackConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline void SetSlackConfiguration(const SlackConfiguration& value) { m_slackConfigurationHasBeenSet = true; m_slackConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline void SetSlackConfiguration(SlackConfiguration&& value) { m_slackConfigurationHasBeenSet = true; m_slackConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithSlackConfiguration(const SlackConfiguration& value) { SetSlackConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Slack as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithSlackConfiguration(SlackConfiguration&& value) { SetSlackConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline const BoxConfiguration& GetBoxConfiguration() const{ return m_boxConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline bool BoxConfigurationHasBeenSet() const { return m_boxConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline void SetBoxConfiguration(const BoxConfiguration& value) { m_boxConfigurationHasBeenSet = true; m_boxConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline void SetBoxConfiguration(BoxConfiguration&& value) { m_boxConfigurationHasBeenSet = true; m_boxConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithBoxConfiguration(const BoxConfiguration& value) { SetBoxConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithBoxConfiguration(BoxConfiguration&& value) { SetBoxConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline const QuipConfiguration& GetQuipConfiguration() const{ return m_quipConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline bool QuipConfigurationHasBeenSet() const { return m_quipConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline void SetQuipConfiguration(const QuipConfiguration& value) { m_quipConfigurationHasBeenSet = true; m_quipConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline void SetQuipConfiguration(QuipConfiguration&& value) { m_quipConfigurationHasBeenSet = true; m_quipConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithQuipConfiguration(const QuipConfiguration& value) { SetQuipConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithQuipConfiguration(QuipConfiguration&& value) { SetQuipConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline const JiraConfiguration& GetJiraConfiguration() const{ return m_jiraConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline void SetJiraConfiguration(const JiraConfiguration& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline void SetJiraConfiguration(JiraConfiguration&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithJiraConfiguration(const JiraConfiguration& value) { SetJiraConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithJiraConfiguration(JiraConfiguration&& value) { SetJiraConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline const GitHubConfiguration& GetGitHubConfiguration() const{ return m_gitHubConfiguration; }

    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline bool GitHubConfigurationHasBeenSet() const { return m_gitHubConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline void SetGitHubConfiguration(const GitHubConfiguration& value) { m_gitHubConfigurationHasBeenSet = true; m_gitHubConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline void SetGitHubConfiguration(GitHubConfiguration&& value) { m_gitHubConfigurationHasBeenSet = true; m_gitHubConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithGitHubConfiguration(const GitHubConfiguration& value) { SetGitHubConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to GitHub as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithGitHubConfiguration(GitHubConfiguration&& value) { SetGitHubConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline const AlfrescoConfiguration& GetAlfrescoConfiguration() const{ return m_alfrescoConfiguration; }

    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline bool AlfrescoConfigurationHasBeenSet() const { return m_alfrescoConfigurationHasBeenSet; }

    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline void SetAlfrescoConfiguration(const AlfrescoConfiguration& value) { m_alfrescoConfigurationHasBeenSet = true; m_alfrescoConfiguration = value; }

    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline void SetAlfrescoConfiguration(AlfrescoConfiguration&& value) { m_alfrescoConfigurationHasBeenSet = true; m_alfrescoConfiguration = std::move(value); }

    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithAlfrescoConfiguration(const AlfrescoConfiguration& value) { SetAlfrescoConfiguration(value); return *this;}

    /**
     * <p>Provides the configuration information to connect to Alfresco as your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithAlfrescoConfiguration(AlfrescoConfiguration&& value) { SetAlfrescoConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }

    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }

    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }

    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline DataSourceConfiguration& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}

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

    AlfrescoConfiguration m_alfrescoConfiguration;
    bool m_alfrescoConfigurationHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
