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
    AWS_KENDRA_API DataSourceConfiguration() = default;
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
    inline const S3DataSourceConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DataSourceConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DataSourceConfiguration>
    DataSourceConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Microsoft SharePoint as
     * your data source.</p>
     */
    inline const SharePointConfiguration& GetSharePointConfiguration() const { return m_sharePointConfiguration; }
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }
    template<typename SharePointConfigurationT = SharePointConfiguration>
    void SetSharePointConfiguration(SharePointConfigurationT&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::forward<SharePointConfigurationT>(value); }
    template<typename SharePointConfigurationT = SharePointConfiguration>
    DataSourceConfiguration& WithSharePointConfiguration(SharePointConfigurationT&& value) { SetSharePointConfiguration(std::forward<SharePointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to a database as your data
     * source.</p>
     */
    inline const DatabaseConfiguration& GetDatabaseConfiguration() const { return m_databaseConfiguration; }
    inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }
    template<typename DatabaseConfigurationT = DatabaseConfiguration>
    void SetDatabaseConfiguration(DatabaseConfigurationT&& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = std::forward<DatabaseConfigurationT>(value); }
    template<typename DatabaseConfigurationT = DatabaseConfiguration>
    DataSourceConfiguration& WithDatabaseConfiguration(DatabaseConfigurationT&& value) { SetDatabaseConfiguration(std::forward<DatabaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Salesforce as your data
     * source.</p>
     */
    inline const SalesforceConfiguration& GetSalesforceConfiguration() const { return m_salesforceConfiguration; }
    inline bool SalesforceConfigurationHasBeenSet() const { return m_salesforceConfigurationHasBeenSet; }
    template<typename SalesforceConfigurationT = SalesforceConfiguration>
    void SetSalesforceConfiguration(SalesforceConfigurationT&& value) { m_salesforceConfigurationHasBeenSet = true; m_salesforceConfiguration = std::forward<SalesforceConfigurationT>(value); }
    template<typename SalesforceConfigurationT = SalesforceConfiguration>
    DataSourceConfiguration& WithSalesforceConfiguration(SalesforceConfigurationT&& value) { SetSalesforceConfiguration(std::forward<SalesforceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Microsoft OneDrive as
     * your data source.</p>
     */
    inline const OneDriveConfiguration& GetOneDriveConfiguration() const { return m_oneDriveConfiguration; }
    inline bool OneDriveConfigurationHasBeenSet() const { return m_oneDriveConfigurationHasBeenSet; }
    template<typename OneDriveConfigurationT = OneDriveConfiguration>
    void SetOneDriveConfiguration(OneDriveConfigurationT&& value) { m_oneDriveConfigurationHasBeenSet = true; m_oneDriveConfiguration = std::forward<OneDriveConfigurationT>(value); }
    template<typename OneDriveConfigurationT = OneDriveConfiguration>
    DataSourceConfiguration& WithOneDriveConfiguration(OneDriveConfigurationT&& value) { SetOneDriveConfiguration(std::forward<OneDriveConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to ServiceNow as your data
     * source.</p>
     */
    inline const ServiceNowConfiguration& GetServiceNowConfiguration() const { return m_serviceNowConfiguration; }
    inline bool ServiceNowConfigurationHasBeenSet() const { return m_serviceNowConfigurationHasBeenSet; }
    template<typename ServiceNowConfigurationT = ServiceNowConfiguration>
    void SetServiceNowConfiguration(ServiceNowConfigurationT&& value) { m_serviceNowConfigurationHasBeenSet = true; m_serviceNowConfiguration = std::forward<ServiceNowConfigurationT>(value); }
    template<typename ServiceNowConfigurationT = ServiceNowConfiguration>
    DataSourceConfiguration& WithServiceNowConfiguration(ServiceNowConfigurationT&& value) { SetServiceNowConfiguration(std::forward<ServiceNowConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Confluence as your data
     * source.</p>
     */
    inline const ConfluenceConfiguration& GetConfluenceConfiguration() const { return m_confluenceConfiguration; }
    inline bool ConfluenceConfigurationHasBeenSet() const { return m_confluenceConfigurationHasBeenSet; }
    template<typename ConfluenceConfigurationT = ConfluenceConfiguration>
    void SetConfluenceConfiguration(ConfluenceConfigurationT&& value) { m_confluenceConfigurationHasBeenSet = true; m_confluenceConfiguration = std::forward<ConfluenceConfigurationT>(value); }
    template<typename ConfluenceConfigurationT = ConfluenceConfiguration>
    DataSourceConfiguration& WithConfluenceConfiguration(ConfluenceConfigurationT&& value) { SetConfluenceConfiguration(std::forward<ConfluenceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Google Drive as your
     * data source.</p>
     */
    inline const GoogleDriveConfiguration& GetGoogleDriveConfiguration() const { return m_googleDriveConfiguration; }
    inline bool GoogleDriveConfigurationHasBeenSet() const { return m_googleDriveConfigurationHasBeenSet; }
    template<typename GoogleDriveConfigurationT = GoogleDriveConfiguration>
    void SetGoogleDriveConfiguration(GoogleDriveConfigurationT&& value) { m_googleDriveConfigurationHasBeenSet = true; m_googleDriveConfiguration = std::forward<GoogleDriveConfigurationT>(value); }
    template<typename GoogleDriveConfigurationT = GoogleDriveConfiguration>
    DataSourceConfiguration& WithGoogleDriveConfiguration(GoogleDriveConfigurationT&& value) { SetGoogleDriveConfiguration(std::forward<GoogleDriveConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WebCrawlerConfiguration& GetWebCrawlerConfiguration() const { return m_webCrawlerConfiguration; }
    inline bool WebCrawlerConfigurationHasBeenSet() const { return m_webCrawlerConfigurationHasBeenSet; }
    template<typename WebCrawlerConfigurationT = WebCrawlerConfiguration>
    void SetWebCrawlerConfiguration(WebCrawlerConfigurationT&& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = std::forward<WebCrawlerConfigurationT>(value); }
    template<typename WebCrawlerConfigurationT = WebCrawlerConfiguration>
    DataSourceConfiguration& WithWebCrawlerConfiguration(WebCrawlerConfigurationT&& value) { SetWebCrawlerConfiguration(std::forward<WebCrawlerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Amazon WorkDocs as your
     * data source.</p>
     */
    inline const WorkDocsConfiguration& GetWorkDocsConfiguration() const { return m_workDocsConfiguration; }
    inline bool WorkDocsConfigurationHasBeenSet() const { return m_workDocsConfigurationHasBeenSet; }
    template<typename WorkDocsConfigurationT = WorkDocsConfiguration>
    void SetWorkDocsConfiguration(WorkDocsConfigurationT&& value) { m_workDocsConfigurationHasBeenSet = true; m_workDocsConfiguration = std::forward<WorkDocsConfigurationT>(value); }
    template<typename WorkDocsConfigurationT = WorkDocsConfiguration>
    DataSourceConfiguration& WithWorkDocsConfiguration(WorkDocsConfigurationT&& value) { SetWorkDocsConfiguration(std::forward<WorkDocsConfigurationT>(value)); return *this;}
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
    inline const FsxConfiguration& GetFsxConfiguration() const { return m_fsxConfiguration; }
    inline bool FsxConfigurationHasBeenSet() const { return m_fsxConfigurationHasBeenSet; }
    template<typename FsxConfigurationT = FsxConfiguration>
    void SetFsxConfiguration(FsxConfigurationT&& value) { m_fsxConfigurationHasBeenSet = true; m_fsxConfiguration = std::forward<FsxConfigurationT>(value); }
    template<typename FsxConfigurationT = FsxConfiguration>
    DataSourceConfiguration& WithFsxConfiguration(FsxConfigurationT&& value) { SetFsxConfiguration(std::forward<FsxConfigurationT>(value)); return *this;}
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
    inline const SlackConfiguration& GetSlackConfiguration() const { return m_slackConfiguration; }
    inline bool SlackConfigurationHasBeenSet() const { return m_slackConfigurationHasBeenSet; }
    template<typename SlackConfigurationT = SlackConfiguration>
    void SetSlackConfiguration(SlackConfigurationT&& value) { m_slackConfigurationHasBeenSet = true; m_slackConfiguration = std::forward<SlackConfigurationT>(value); }
    template<typename SlackConfigurationT = SlackConfiguration>
    DataSourceConfiguration& WithSlackConfiguration(SlackConfigurationT&& value) { SetSlackConfiguration(std::forward<SlackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Box as your data
     * source.</p>
     */
    inline const BoxConfiguration& GetBoxConfiguration() const { return m_boxConfiguration; }
    inline bool BoxConfigurationHasBeenSet() const { return m_boxConfigurationHasBeenSet; }
    template<typename BoxConfigurationT = BoxConfiguration>
    void SetBoxConfiguration(BoxConfigurationT&& value) { m_boxConfigurationHasBeenSet = true; m_boxConfiguration = std::forward<BoxConfigurationT>(value); }
    template<typename BoxConfigurationT = BoxConfiguration>
    DataSourceConfiguration& WithBoxConfiguration(BoxConfigurationT&& value) { SetBoxConfiguration(std::forward<BoxConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Quip as your data
     * source.</p>
     */
    inline const QuipConfiguration& GetQuipConfiguration() const { return m_quipConfiguration; }
    inline bool QuipConfigurationHasBeenSet() const { return m_quipConfigurationHasBeenSet; }
    template<typename QuipConfigurationT = QuipConfiguration>
    void SetQuipConfiguration(QuipConfigurationT&& value) { m_quipConfigurationHasBeenSet = true; m_quipConfiguration = std::forward<QuipConfigurationT>(value); }
    template<typename QuipConfigurationT = QuipConfiguration>
    DataSourceConfiguration& WithQuipConfiguration(QuipConfigurationT&& value) { SetQuipConfiguration(std::forward<QuipConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the configuration information to connect to Jira as your data
     * source.</p>
     */
    inline const JiraConfiguration& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = JiraConfiguration>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = JiraConfiguration>
    DataSourceConfiguration& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
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
    inline const GitHubConfiguration& GetGitHubConfiguration() const { return m_gitHubConfiguration; }
    inline bool GitHubConfigurationHasBeenSet() const { return m_gitHubConfigurationHasBeenSet; }
    template<typename GitHubConfigurationT = GitHubConfiguration>
    void SetGitHubConfiguration(GitHubConfigurationT&& value) { m_gitHubConfigurationHasBeenSet = true; m_gitHubConfiguration = std::forward<GitHubConfigurationT>(value); }
    template<typename GitHubConfigurationT = GitHubConfiguration>
    DataSourceConfiguration& WithGitHubConfiguration(GitHubConfigurationT&& value) { SetGitHubConfiguration(std::forward<GitHubConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a template for the configuration information to connect to your data
     * source.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    DataSourceConfiguration& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
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
