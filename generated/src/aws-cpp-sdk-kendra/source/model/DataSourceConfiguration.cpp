/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DataSourceConfiguration::DataSourceConfiguration() : 
    m_s3ConfigurationHasBeenSet(false),
    m_sharePointConfigurationHasBeenSet(false),
    m_databaseConfigurationHasBeenSet(false),
    m_salesforceConfigurationHasBeenSet(false),
    m_oneDriveConfigurationHasBeenSet(false),
    m_serviceNowConfigurationHasBeenSet(false),
    m_confluenceConfigurationHasBeenSet(false),
    m_googleDriveConfigurationHasBeenSet(false),
    m_webCrawlerConfigurationHasBeenSet(false),
    m_workDocsConfigurationHasBeenSet(false),
    m_fsxConfigurationHasBeenSet(false),
    m_slackConfigurationHasBeenSet(false),
    m_boxConfigurationHasBeenSet(false),
    m_quipConfigurationHasBeenSet(false),
    m_jiraConfigurationHasBeenSet(false),
    m_gitHubConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false)
{
}

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) : 
    m_s3ConfigurationHasBeenSet(false),
    m_sharePointConfigurationHasBeenSet(false),
    m_databaseConfigurationHasBeenSet(false),
    m_salesforceConfigurationHasBeenSet(false),
    m_oneDriveConfigurationHasBeenSet(false),
    m_serviceNowConfigurationHasBeenSet(false),
    m_confluenceConfigurationHasBeenSet(false),
    m_googleDriveConfigurationHasBeenSet(false),
    m_webCrawlerConfigurationHasBeenSet(false),
    m_workDocsConfigurationHasBeenSet(false),
    m_fsxConfigurationHasBeenSet(false),
    m_slackConfigurationHasBeenSet(false),
    m_boxConfigurationHasBeenSet(false),
    m_quipConfigurationHasBeenSet(false),
    m_jiraConfigurationHasBeenSet(false),
    m_gitHubConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharePointConfiguration"))
  {
    m_sharePointConfiguration = jsonValue.GetObject("SharePointConfiguration");

    m_sharePointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseConfiguration"))
  {
    m_databaseConfiguration = jsonValue.GetObject("DatabaseConfiguration");

    m_databaseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SalesforceConfiguration"))
  {
    m_salesforceConfiguration = jsonValue.GetObject("SalesforceConfiguration");

    m_salesforceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneDriveConfiguration"))
  {
    m_oneDriveConfiguration = jsonValue.GetObject("OneDriveConfiguration");

    m_oneDriveConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNowConfiguration"))
  {
    m_serviceNowConfiguration = jsonValue.GetObject("ServiceNowConfiguration");

    m_serviceNowConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfluenceConfiguration"))
  {
    m_confluenceConfiguration = jsonValue.GetObject("ConfluenceConfiguration");

    m_confluenceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GoogleDriveConfiguration"))
  {
    m_googleDriveConfiguration = jsonValue.GetObject("GoogleDriveConfiguration");

    m_googleDriveConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebCrawlerConfiguration"))
  {
    m_webCrawlerConfiguration = jsonValue.GetObject("WebCrawlerConfiguration");

    m_webCrawlerConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkDocsConfiguration"))
  {
    m_workDocsConfiguration = jsonValue.GetObject("WorkDocsConfiguration");

    m_workDocsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FsxConfiguration"))
  {
    m_fsxConfiguration = jsonValue.GetObject("FsxConfiguration");

    m_fsxConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackConfiguration"))
  {
    m_slackConfiguration = jsonValue.GetObject("SlackConfiguration");

    m_slackConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoxConfiguration"))
  {
    m_boxConfiguration = jsonValue.GetObject("BoxConfiguration");

    m_boxConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuipConfiguration"))
  {
    m_quipConfiguration = jsonValue.GetObject("QuipConfiguration");

    m_quipConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JiraConfiguration"))
  {
    m_jiraConfiguration = jsonValue.GetObject("JiraConfiguration");

    m_jiraConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubConfiguration"))
  {
    m_gitHubConfiguration = jsonValue.GetObject("GitHubConfiguration");

    m_gitHubConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("TemplateConfiguration");

    m_templateConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_sharePointConfigurationHasBeenSet)
  {
   payload.WithObject("SharePointConfiguration", m_sharePointConfiguration.Jsonize());

  }

  if(m_databaseConfigurationHasBeenSet)
  {
   payload.WithObject("DatabaseConfiguration", m_databaseConfiguration.Jsonize());

  }

  if(m_salesforceConfigurationHasBeenSet)
  {
   payload.WithObject("SalesforceConfiguration", m_salesforceConfiguration.Jsonize());

  }

  if(m_oneDriveConfigurationHasBeenSet)
  {
   payload.WithObject("OneDriveConfiguration", m_oneDriveConfiguration.Jsonize());

  }

  if(m_serviceNowConfigurationHasBeenSet)
  {
   payload.WithObject("ServiceNowConfiguration", m_serviceNowConfiguration.Jsonize());

  }

  if(m_confluenceConfigurationHasBeenSet)
  {
   payload.WithObject("ConfluenceConfiguration", m_confluenceConfiguration.Jsonize());

  }

  if(m_googleDriveConfigurationHasBeenSet)
  {
   payload.WithObject("GoogleDriveConfiguration", m_googleDriveConfiguration.Jsonize());

  }

  if(m_webCrawlerConfigurationHasBeenSet)
  {
   payload.WithObject("WebCrawlerConfiguration", m_webCrawlerConfiguration.Jsonize());

  }

  if(m_workDocsConfigurationHasBeenSet)
  {
   payload.WithObject("WorkDocsConfiguration", m_workDocsConfiguration.Jsonize());

  }

  if(m_fsxConfigurationHasBeenSet)
  {
   payload.WithObject("FsxConfiguration", m_fsxConfiguration.Jsonize());

  }

  if(m_slackConfigurationHasBeenSet)
  {
   payload.WithObject("SlackConfiguration", m_slackConfiguration.Jsonize());

  }

  if(m_boxConfigurationHasBeenSet)
  {
   payload.WithObject("BoxConfiguration", m_boxConfiguration.Jsonize());

  }

  if(m_quipConfigurationHasBeenSet)
  {
   payload.WithObject("QuipConfiguration", m_quipConfiguration.Jsonize());

  }

  if(m_jiraConfigurationHasBeenSet)
  {
   payload.WithObject("JiraConfiguration", m_jiraConfiguration.Jsonize());

  }

  if(m_gitHubConfigurationHasBeenSet)
  {
   payload.WithObject("GitHubConfiguration", m_gitHubConfiguration.Jsonize());

  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("TemplateConfiguration", m_templateConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
