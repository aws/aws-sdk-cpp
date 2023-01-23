/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/JiraConfiguration.h>
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

JiraConfiguration::JiraConfiguration() : 
    m_jiraAccountUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issueSubEntityFilterHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false),
    m_commentFieldMappingsHasBeenSet(false),
    m_issueFieldMappingsHasBeenSet(false),
    m_projectFieldMappingsHasBeenSet(false),
    m_workLogFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

JiraConfiguration::JiraConfiguration(JsonView jsonValue) : 
    m_jiraAccountUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issueSubEntityFilterHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false),
    m_commentFieldMappingsHasBeenSet(false),
    m_issueFieldMappingsHasBeenSet(false),
    m_projectFieldMappingsHasBeenSet(false),
    m_workLogFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

JiraConfiguration& JiraConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JiraAccountUrl"))
  {
    m_jiraAccountUrl = jsonValue.GetString("JiraAccountUrl");

    m_jiraAccountUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseChangeLog"))
  {
    m_useChangeLog = jsonValue.GetBool("UseChangeLog");

    m_useChangeLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Project"))
  {
    Aws::Utils::Array<JsonView> projectJsonList = jsonValue.GetArray("Project");
    for(unsigned projectIndex = 0; projectIndex < projectJsonList.GetLength(); ++projectIndex)
    {
      m_project.push_back(projectJsonList[projectIndex].AsString());
    }
    m_projectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssueType"))
  {
    Aws::Utils::Array<JsonView> issueTypeJsonList = jsonValue.GetArray("IssueType");
    for(unsigned issueTypeIndex = 0; issueTypeIndex < issueTypeJsonList.GetLength(); ++issueTypeIndex)
    {
      m_issueType.push_back(issueTypeJsonList[issueTypeIndex].AsString());
    }
    m_issueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    Aws::Utils::Array<JsonView> statusJsonList = jsonValue.GetArray("Status");
    for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
    {
      m_status.push_back(statusJsonList[statusIndex].AsString());
    }
    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssueSubEntityFilter"))
  {
    Aws::Utils::Array<JsonView> issueSubEntityFilterJsonList = jsonValue.GetArray("IssueSubEntityFilter");
    for(unsigned issueSubEntityFilterIndex = 0; issueSubEntityFilterIndex < issueSubEntityFilterJsonList.GetLength(); ++issueSubEntityFilterIndex)
    {
      m_issueSubEntityFilter.push_back(IssueSubEntityMapper::GetIssueSubEntityForName(issueSubEntityFilterJsonList[issueSubEntityFilterIndex].AsString()));
    }
    m_issueSubEntityFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentFieldMappings"))
  {
    Aws::Utils::Array<JsonView> attachmentFieldMappingsJsonList = jsonValue.GetArray("AttachmentFieldMappings");
    for(unsigned attachmentFieldMappingsIndex = 0; attachmentFieldMappingsIndex < attachmentFieldMappingsJsonList.GetLength(); ++attachmentFieldMappingsIndex)
    {
      m_attachmentFieldMappings.push_back(attachmentFieldMappingsJsonList[attachmentFieldMappingsIndex].AsObject());
    }
    m_attachmentFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommentFieldMappings"))
  {
    Aws::Utils::Array<JsonView> commentFieldMappingsJsonList = jsonValue.GetArray("CommentFieldMappings");
    for(unsigned commentFieldMappingsIndex = 0; commentFieldMappingsIndex < commentFieldMappingsJsonList.GetLength(); ++commentFieldMappingsIndex)
    {
      m_commentFieldMappings.push_back(commentFieldMappingsJsonList[commentFieldMappingsIndex].AsObject());
    }
    m_commentFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssueFieldMappings"))
  {
    Aws::Utils::Array<JsonView> issueFieldMappingsJsonList = jsonValue.GetArray("IssueFieldMappings");
    for(unsigned issueFieldMappingsIndex = 0; issueFieldMappingsIndex < issueFieldMappingsJsonList.GetLength(); ++issueFieldMappingsIndex)
    {
      m_issueFieldMappings.push_back(issueFieldMappingsJsonList[issueFieldMappingsIndex].AsObject());
    }
    m_issueFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectFieldMappings"))
  {
    Aws::Utils::Array<JsonView> projectFieldMappingsJsonList = jsonValue.GetArray("ProjectFieldMappings");
    for(unsigned projectFieldMappingsIndex = 0; projectFieldMappingsIndex < projectFieldMappingsJsonList.GetLength(); ++projectFieldMappingsIndex)
    {
      m_projectFieldMappings.push_back(projectFieldMappingsJsonList[projectFieldMappingsIndex].AsObject());
    }
    m_projectFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkLogFieldMappings"))
  {
    Aws::Utils::Array<JsonView> workLogFieldMappingsJsonList = jsonValue.GetArray("WorkLogFieldMappings");
    for(unsigned workLogFieldMappingsIndex = 0; workLogFieldMappingsIndex < workLogFieldMappingsJsonList.GetLength(); ++workLogFieldMappingsIndex)
    {
      m_workLogFieldMappings.push_back(workLogFieldMappingsJsonList[workLogFieldMappingsIndex].AsObject());
    }
    m_workLogFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionPatternsJsonList = jsonValue.GetArray("InclusionPatterns");
    for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
    {
      m_inclusionPatterns.push_back(inclusionPatternsJsonList[inclusionPatternsIndex].AsString());
    }
    m_inclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
    for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
    {
      m_exclusionPatterns.push_back(exclusionPatternsJsonList[exclusionPatternsIndex].AsString());
    }
    m_exclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue JiraConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jiraAccountUrlHasBeenSet)
  {
   payload.WithString("JiraAccountUrl", m_jiraAccountUrl);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_useChangeLogHasBeenSet)
  {
   payload.WithBool("UseChangeLog", m_useChangeLog);

  }

  if(m_projectHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectJsonList(m_project.size());
   for(unsigned projectIndex = 0; projectIndex < projectJsonList.GetLength(); ++projectIndex)
   {
     projectJsonList[projectIndex].AsString(m_project[projectIndex]);
   }
   payload.WithArray("Project", std::move(projectJsonList));

  }

  if(m_issueTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issueTypeJsonList(m_issueType.size());
   for(unsigned issueTypeIndex = 0; issueTypeIndex < issueTypeJsonList.GetLength(); ++issueTypeIndex)
   {
     issueTypeJsonList[issueTypeIndex].AsString(m_issueType[issueTypeIndex]);
   }
   payload.WithArray("IssueType", std::move(issueTypeJsonList));

  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(m_status[statusIndex]);
   }
   payload.WithArray("Status", std::move(statusJsonList));

  }

  if(m_issueSubEntityFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issueSubEntityFilterJsonList(m_issueSubEntityFilter.size());
   for(unsigned issueSubEntityFilterIndex = 0; issueSubEntityFilterIndex < issueSubEntityFilterJsonList.GetLength(); ++issueSubEntityFilterIndex)
   {
     issueSubEntityFilterJsonList[issueSubEntityFilterIndex].AsString(IssueSubEntityMapper::GetNameForIssueSubEntity(m_issueSubEntityFilter[issueSubEntityFilterIndex]));
   }
   payload.WithArray("IssueSubEntityFilter", std::move(issueSubEntityFilterJsonList));

  }

  if(m_attachmentFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentFieldMappingsJsonList(m_attachmentFieldMappings.size());
   for(unsigned attachmentFieldMappingsIndex = 0; attachmentFieldMappingsIndex < attachmentFieldMappingsJsonList.GetLength(); ++attachmentFieldMappingsIndex)
   {
     attachmentFieldMappingsJsonList[attachmentFieldMappingsIndex].AsObject(m_attachmentFieldMappings[attachmentFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("AttachmentFieldMappings", std::move(attachmentFieldMappingsJsonList));

  }

  if(m_commentFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commentFieldMappingsJsonList(m_commentFieldMappings.size());
   for(unsigned commentFieldMappingsIndex = 0; commentFieldMappingsIndex < commentFieldMappingsJsonList.GetLength(); ++commentFieldMappingsIndex)
   {
     commentFieldMappingsJsonList[commentFieldMappingsIndex].AsObject(m_commentFieldMappings[commentFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("CommentFieldMappings", std::move(commentFieldMappingsJsonList));

  }

  if(m_issueFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issueFieldMappingsJsonList(m_issueFieldMappings.size());
   for(unsigned issueFieldMappingsIndex = 0; issueFieldMappingsIndex < issueFieldMappingsJsonList.GetLength(); ++issueFieldMappingsIndex)
   {
     issueFieldMappingsJsonList[issueFieldMappingsIndex].AsObject(m_issueFieldMappings[issueFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("IssueFieldMappings", std::move(issueFieldMappingsJsonList));

  }

  if(m_projectFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectFieldMappingsJsonList(m_projectFieldMappings.size());
   for(unsigned projectFieldMappingsIndex = 0; projectFieldMappingsIndex < projectFieldMappingsJsonList.GetLength(); ++projectFieldMappingsIndex)
   {
     projectFieldMappingsJsonList[projectFieldMappingsIndex].AsObject(m_projectFieldMappings[projectFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("ProjectFieldMappings", std::move(projectFieldMappingsJsonList));

  }

  if(m_workLogFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workLogFieldMappingsJsonList(m_workLogFieldMappings.size());
   for(unsigned workLogFieldMappingsIndex = 0; workLogFieldMappingsIndex < workLogFieldMappingsJsonList.GetLength(); ++workLogFieldMappingsIndex)
   {
     workLogFieldMappingsJsonList[workLogFieldMappingsIndex].AsObject(m_workLogFieldMappings[workLogFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("WorkLogFieldMappings", std::move(workLogFieldMappingsJsonList));

  }

  if(m_inclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionPatternsJsonList(m_inclusionPatterns.size());
   for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
   {
     inclusionPatternsJsonList[inclusionPatternsIndex].AsString(m_inclusionPatterns[inclusionPatternsIndex]);
   }
   payload.WithArray("InclusionPatterns", std::move(inclusionPatternsJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
   for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
   {
     exclusionPatternsJsonList[exclusionPatternsIndex].AsString(m_exclusionPatterns[exclusionPatternsIndex]);
   }
   payload.WithArray("ExclusionPatterns", std::move(exclusionPatternsJsonList));

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
