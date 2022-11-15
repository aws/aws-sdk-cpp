/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GitHubConfiguration.h>
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

GitHubConfiguration::GitHubConfiguration() : 
    m_saaSConfigurationHasBeenSet(false),
    m_onPremiseConfigurationHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_gitHubDocumentCrawlPropertiesHasBeenSet(false),
    m_repositoryFilterHasBeenSet(false),
    m_inclusionFolderNamePatternsHasBeenSet(false),
    m_inclusionFileTypePatternsHasBeenSet(false),
    m_inclusionFileNamePatternsHasBeenSet(false),
    m_exclusionFolderNamePatternsHasBeenSet(false),
    m_exclusionFileTypePatternsHasBeenSet(false),
    m_exclusionFileNamePatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubCommitConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet(false)
{
}

GitHubConfiguration::GitHubConfiguration(JsonView jsonValue) : 
    m_saaSConfigurationHasBeenSet(false),
    m_onPremiseConfigurationHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_gitHubDocumentCrawlPropertiesHasBeenSet(false),
    m_repositoryFilterHasBeenSet(false),
    m_inclusionFolderNamePatternsHasBeenSet(false),
    m_inclusionFileTypePatternsHasBeenSet(false),
    m_inclusionFileNamePatternsHasBeenSet(false),
    m_exclusionFolderNamePatternsHasBeenSet(false),
    m_exclusionFileTypePatternsHasBeenSet(false),
    m_exclusionFileNamePatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubCommitConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet(false),
    m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

GitHubConfiguration& GitHubConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SaaSConfiguration"))
  {
    m_saaSConfiguration = jsonValue.GetObject("SaaSConfiguration");

    m_saaSConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnPremiseConfiguration"))
  {
    m_onPremiseConfiguration = jsonValue.GetObject("OnPremiseConfiguration");

    m_onPremiseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
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

  if(jsonValue.ValueExists("GitHubDocumentCrawlProperties"))
  {
    m_gitHubDocumentCrawlProperties = jsonValue.GetObject("GitHubDocumentCrawlProperties");

    m_gitHubDocumentCrawlPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryFilter"))
  {
    Aws::Utils::Array<JsonView> repositoryFilterJsonList = jsonValue.GetArray("RepositoryFilter");
    for(unsigned repositoryFilterIndex = 0; repositoryFilterIndex < repositoryFilterJsonList.GetLength(); ++repositoryFilterIndex)
    {
      m_repositoryFilter.push_back(repositoryFilterJsonList[repositoryFilterIndex].AsString());
    }
    m_repositoryFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionFolderNamePatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionFolderNamePatternsJsonList = jsonValue.GetArray("InclusionFolderNamePatterns");
    for(unsigned inclusionFolderNamePatternsIndex = 0; inclusionFolderNamePatternsIndex < inclusionFolderNamePatternsJsonList.GetLength(); ++inclusionFolderNamePatternsIndex)
    {
      m_inclusionFolderNamePatterns.push_back(inclusionFolderNamePatternsJsonList[inclusionFolderNamePatternsIndex].AsString());
    }
    m_inclusionFolderNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionFileTypePatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionFileTypePatternsJsonList = jsonValue.GetArray("InclusionFileTypePatterns");
    for(unsigned inclusionFileTypePatternsIndex = 0; inclusionFileTypePatternsIndex < inclusionFileTypePatternsJsonList.GetLength(); ++inclusionFileTypePatternsIndex)
    {
      m_inclusionFileTypePatterns.push_back(inclusionFileTypePatternsJsonList[inclusionFileTypePatternsIndex].AsString());
    }
    m_inclusionFileTypePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionFileNamePatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionFileNamePatternsJsonList = jsonValue.GetArray("InclusionFileNamePatterns");
    for(unsigned inclusionFileNamePatternsIndex = 0; inclusionFileNamePatternsIndex < inclusionFileNamePatternsJsonList.GetLength(); ++inclusionFileNamePatternsIndex)
    {
      m_inclusionFileNamePatterns.push_back(inclusionFileNamePatternsJsonList[inclusionFileNamePatternsIndex].AsString());
    }
    m_inclusionFileNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionFolderNamePatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionFolderNamePatternsJsonList = jsonValue.GetArray("ExclusionFolderNamePatterns");
    for(unsigned exclusionFolderNamePatternsIndex = 0; exclusionFolderNamePatternsIndex < exclusionFolderNamePatternsJsonList.GetLength(); ++exclusionFolderNamePatternsIndex)
    {
      m_exclusionFolderNamePatterns.push_back(exclusionFolderNamePatternsJsonList[exclusionFolderNamePatternsIndex].AsString());
    }
    m_exclusionFolderNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionFileTypePatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionFileTypePatternsJsonList = jsonValue.GetArray("ExclusionFileTypePatterns");
    for(unsigned exclusionFileTypePatternsIndex = 0; exclusionFileTypePatternsIndex < exclusionFileTypePatternsJsonList.GetLength(); ++exclusionFileTypePatternsIndex)
    {
      m_exclusionFileTypePatterns.push_back(exclusionFileTypePatternsJsonList[exclusionFileTypePatternsIndex].AsString());
    }
    m_exclusionFileTypePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionFileNamePatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionFileNamePatternsJsonList = jsonValue.GetArray("ExclusionFileNamePatterns");
    for(unsigned exclusionFileNamePatternsIndex = 0; exclusionFileNamePatternsIndex < exclusionFileNamePatternsJsonList.GetLength(); ++exclusionFileNamePatternsIndex)
    {
      m_exclusionFileNamePatterns.push_back(exclusionFileNamePatternsJsonList[exclusionFileNamePatternsIndex].AsString());
    }
    m_exclusionFileNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubRepositoryConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubRepositoryConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubRepositoryConfigurationFieldMappings");
    for(unsigned gitHubRepositoryConfigurationFieldMappingsIndex = 0; gitHubRepositoryConfigurationFieldMappingsIndex < gitHubRepositoryConfigurationFieldMappingsJsonList.GetLength(); ++gitHubRepositoryConfigurationFieldMappingsIndex)
    {
      m_gitHubRepositoryConfigurationFieldMappings.push_back(gitHubRepositoryConfigurationFieldMappingsJsonList[gitHubRepositoryConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubCommitConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubCommitConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubCommitConfigurationFieldMappings");
    for(unsigned gitHubCommitConfigurationFieldMappingsIndex = 0; gitHubCommitConfigurationFieldMappingsIndex < gitHubCommitConfigurationFieldMappingsJsonList.GetLength(); ++gitHubCommitConfigurationFieldMappingsIndex)
    {
      m_gitHubCommitConfigurationFieldMappings.push_back(gitHubCommitConfigurationFieldMappingsJsonList[gitHubCommitConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubIssueDocumentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubIssueDocumentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubIssueDocumentConfigurationFieldMappings");
    for(unsigned gitHubIssueDocumentConfigurationFieldMappingsIndex = 0; gitHubIssueDocumentConfigurationFieldMappingsIndex < gitHubIssueDocumentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueDocumentConfigurationFieldMappingsIndex)
    {
      m_gitHubIssueDocumentConfigurationFieldMappings.push_back(gitHubIssueDocumentConfigurationFieldMappingsJsonList[gitHubIssueDocumentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubIssueCommentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubIssueCommentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubIssueCommentConfigurationFieldMappings");
    for(unsigned gitHubIssueCommentConfigurationFieldMappingsIndex = 0; gitHubIssueCommentConfigurationFieldMappingsIndex < gitHubIssueCommentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueCommentConfigurationFieldMappingsIndex)
    {
      m_gitHubIssueCommentConfigurationFieldMappings.push_back(gitHubIssueCommentConfigurationFieldMappingsJsonList[gitHubIssueCommentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubIssueAttachmentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubIssueAttachmentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubIssueAttachmentConfigurationFieldMappings");
    for(unsigned gitHubIssueAttachmentConfigurationFieldMappingsIndex = 0; gitHubIssueAttachmentConfigurationFieldMappingsIndex < gitHubIssueAttachmentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueAttachmentConfigurationFieldMappingsIndex)
    {
      m_gitHubIssueAttachmentConfigurationFieldMappings.push_back(gitHubIssueAttachmentConfigurationFieldMappingsJsonList[gitHubIssueAttachmentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubPullRequestCommentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubPullRequestCommentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubPullRequestCommentConfigurationFieldMappings");
    for(unsigned gitHubPullRequestCommentConfigurationFieldMappingsIndex = 0; gitHubPullRequestCommentConfigurationFieldMappingsIndex < gitHubPullRequestCommentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestCommentConfigurationFieldMappingsIndex)
    {
      m_gitHubPullRequestCommentConfigurationFieldMappings.push_back(gitHubPullRequestCommentConfigurationFieldMappingsJsonList[gitHubPullRequestCommentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubPullRequestDocumentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubPullRequestDocumentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubPullRequestDocumentConfigurationFieldMappings");
    for(unsigned gitHubPullRequestDocumentConfigurationFieldMappingsIndex = 0; gitHubPullRequestDocumentConfigurationFieldMappingsIndex < gitHubPullRequestDocumentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestDocumentConfigurationFieldMappingsIndex)
    {
      m_gitHubPullRequestDocumentConfigurationFieldMappings.push_back(gitHubPullRequestDocumentConfigurationFieldMappingsJsonList[gitHubPullRequestDocumentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubPullRequestDocumentAttachmentConfigurationFieldMappings"))
  {
    Aws::Utils::Array<JsonView> gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList = jsonValue.GetArray("GitHubPullRequestDocumentAttachmentConfigurationFieldMappings");
    for(unsigned gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex = 0; gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex < gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex)
    {
      m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings.push_back(gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList[gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex].AsObject());
    }
    m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue GitHubConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_saaSConfigurationHasBeenSet)
  {
   payload.WithObject("SaaSConfiguration", m_saaSConfiguration.Jsonize());

  }

  if(m_onPremiseConfigurationHasBeenSet)
  {
   payload.WithObject("OnPremiseConfiguration", m_onPremiseConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_useChangeLogHasBeenSet)
  {
   payload.WithBool("UseChangeLog", m_useChangeLog);

  }

  if(m_gitHubDocumentCrawlPropertiesHasBeenSet)
  {
   payload.WithObject("GitHubDocumentCrawlProperties", m_gitHubDocumentCrawlProperties.Jsonize());

  }

  if(m_repositoryFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoryFilterJsonList(m_repositoryFilter.size());
   for(unsigned repositoryFilterIndex = 0; repositoryFilterIndex < repositoryFilterJsonList.GetLength(); ++repositoryFilterIndex)
   {
     repositoryFilterJsonList[repositoryFilterIndex].AsString(m_repositoryFilter[repositoryFilterIndex]);
   }
   payload.WithArray("RepositoryFilter", std::move(repositoryFilterJsonList));

  }

  if(m_inclusionFolderNamePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionFolderNamePatternsJsonList(m_inclusionFolderNamePatterns.size());
   for(unsigned inclusionFolderNamePatternsIndex = 0; inclusionFolderNamePatternsIndex < inclusionFolderNamePatternsJsonList.GetLength(); ++inclusionFolderNamePatternsIndex)
   {
     inclusionFolderNamePatternsJsonList[inclusionFolderNamePatternsIndex].AsString(m_inclusionFolderNamePatterns[inclusionFolderNamePatternsIndex]);
   }
   payload.WithArray("InclusionFolderNamePatterns", std::move(inclusionFolderNamePatternsJsonList));

  }

  if(m_inclusionFileTypePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionFileTypePatternsJsonList(m_inclusionFileTypePatterns.size());
   for(unsigned inclusionFileTypePatternsIndex = 0; inclusionFileTypePatternsIndex < inclusionFileTypePatternsJsonList.GetLength(); ++inclusionFileTypePatternsIndex)
   {
     inclusionFileTypePatternsJsonList[inclusionFileTypePatternsIndex].AsString(m_inclusionFileTypePatterns[inclusionFileTypePatternsIndex]);
   }
   payload.WithArray("InclusionFileTypePatterns", std::move(inclusionFileTypePatternsJsonList));

  }

  if(m_inclusionFileNamePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionFileNamePatternsJsonList(m_inclusionFileNamePatterns.size());
   for(unsigned inclusionFileNamePatternsIndex = 0; inclusionFileNamePatternsIndex < inclusionFileNamePatternsJsonList.GetLength(); ++inclusionFileNamePatternsIndex)
   {
     inclusionFileNamePatternsJsonList[inclusionFileNamePatternsIndex].AsString(m_inclusionFileNamePatterns[inclusionFileNamePatternsIndex]);
   }
   payload.WithArray("InclusionFileNamePatterns", std::move(inclusionFileNamePatternsJsonList));

  }

  if(m_exclusionFolderNamePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionFolderNamePatternsJsonList(m_exclusionFolderNamePatterns.size());
   for(unsigned exclusionFolderNamePatternsIndex = 0; exclusionFolderNamePatternsIndex < exclusionFolderNamePatternsJsonList.GetLength(); ++exclusionFolderNamePatternsIndex)
   {
     exclusionFolderNamePatternsJsonList[exclusionFolderNamePatternsIndex].AsString(m_exclusionFolderNamePatterns[exclusionFolderNamePatternsIndex]);
   }
   payload.WithArray("ExclusionFolderNamePatterns", std::move(exclusionFolderNamePatternsJsonList));

  }

  if(m_exclusionFileTypePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionFileTypePatternsJsonList(m_exclusionFileTypePatterns.size());
   for(unsigned exclusionFileTypePatternsIndex = 0; exclusionFileTypePatternsIndex < exclusionFileTypePatternsJsonList.GetLength(); ++exclusionFileTypePatternsIndex)
   {
     exclusionFileTypePatternsJsonList[exclusionFileTypePatternsIndex].AsString(m_exclusionFileTypePatterns[exclusionFileTypePatternsIndex]);
   }
   payload.WithArray("ExclusionFileTypePatterns", std::move(exclusionFileTypePatternsJsonList));

  }

  if(m_exclusionFileNamePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionFileNamePatternsJsonList(m_exclusionFileNamePatterns.size());
   for(unsigned exclusionFileNamePatternsIndex = 0; exclusionFileNamePatternsIndex < exclusionFileNamePatternsJsonList.GetLength(); ++exclusionFileNamePatternsIndex)
   {
     exclusionFileNamePatternsJsonList[exclusionFileNamePatternsIndex].AsString(m_exclusionFileNamePatterns[exclusionFileNamePatternsIndex]);
   }
   payload.WithArray("ExclusionFileNamePatterns", std::move(exclusionFileNamePatternsJsonList));

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubRepositoryConfigurationFieldMappingsJsonList(m_gitHubRepositoryConfigurationFieldMappings.size());
   for(unsigned gitHubRepositoryConfigurationFieldMappingsIndex = 0; gitHubRepositoryConfigurationFieldMappingsIndex < gitHubRepositoryConfigurationFieldMappingsJsonList.GetLength(); ++gitHubRepositoryConfigurationFieldMappingsIndex)
   {
     gitHubRepositoryConfigurationFieldMappingsJsonList[gitHubRepositoryConfigurationFieldMappingsIndex].AsObject(m_gitHubRepositoryConfigurationFieldMappings[gitHubRepositoryConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubRepositoryConfigurationFieldMappings", std::move(gitHubRepositoryConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubCommitConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubCommitConfigurationFieldMappingsJsonList(m_gitHubCommitConfigurationFieldMappings.size());
   for(unsigned gitHubCommitConfigurationFieldMappingsIndex = 0; gitHubCommitConfigurationFieldMappingsIndex < gitHubCommitConfigurationFieldMappingsJsonList.GetLength(); ++gitHubCommitConfigurationFieldMappingsIndex)
   {
     gitHubCommitConfigurationFieldMappingsJsonList[gitHubCommitConfigurationFieldMappingsIndex].AsObject(m_gitHubCommitConfigurationFieldMappings[gitHubCommitConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubCommitConfigurationFieldMappings", std::move(gitHubCommitConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubIssueDocumentConfigurationFieldMappingsJsonList(m_gitHubIssueDocumentConfigurationFieldMappings.size());
   for(unsigned gitHubIssueDocumentConfigurationFieldMappingsIndex = 0; gitHubIssueDocumentConfigurationFieldMappingsIndex < gitHubIssueDocumentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueDocumentConfigurationFieldMappingsIndex)
   {
     gitHubIssueDocumentConfigurationFieldMappingsJsonList[gitHubIssueDocumentConfigurationFieldMappingsIndex].AsObject(m_gitHubIssueDocumentConfigurationFieldMappings[gitHubIssueDocumentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubIssueDocumentConfigurationFieldMappings", std::move(gitHubIssueDocumentConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubIssueCommentConfigurationFieldMappingsJsonList(m_gitHubIssueCommentConfigurationFieldMappings.size());
   for(unsigned gitHubIssueCommentConfigurationFieldMappingsIndex = 0; gitHubIssueCommentConfigurationFieldMappingsIndex < gitHubIssueCommentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueCommentConfigurationFieldMappingsIndex)
   {
     gitHubIssueCommentConfigurationFieldMappingsJsonList[gitHubIssueCommentConfigurationFieldMappingsIndex].AsObject(m_gitHubIssueCommentConfigurationFieldMappings[gitHubIssueCommentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubIssueCommentConfigurationFieldMappings", std::move(gitHubIssueCommentConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubIssueAttachmentConfigurationFieldMappingsJsonList(m_gitHubIssueAttachmentConfigurationFieldMappings.size());
   for(unsigned gitHubIssueAttachmentConfigurationFieldMappingsIndex = 0; gitHubIssueAttachmentConfigurationFieldMappingsIndex < gitHubIssueAttachmentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubIssueAttachmentConfigurationFieldMappingsIndex)
   {
     gitHubIssueAttachmentConfigurationFieldMappingsJsonList[gitHubIssueAttachmentConfigurationFieldMappingsIndex].AsObject(m_gitHubIssueAttachmentConfigurationFieldMappings[gitHubIssueAttachmentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubIssueAttachmentConfigurationFieldMappings", std::move(gitHubIssueAttachmentConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubPullRequestCommentConfigurationFieldMappingsJsonList(m_gitHubPullRequestCommentConfigurationFieldMappings.size());
   for(unsigned gitHubPullRequestCommentConfigurationFieldMappingsIndex = 0; gitHubPullRequestCommentConfigurationFieldMappingsIndex < gitHubPullRequestCommentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestCommentConfigurationFieldMappingsIndex)
   {
     gitHubPullRequestCommentConfigurationFieldMappingsJsonList[gitHubPullRequestCommentConfigurationFieldMappingsIndex].AsObject(m_gitHubPullRequestCommentConfigurationFieldMappings[gitHubPullRequestCommentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubPullRequestCommentConfigurationFieldMappings", std::move(gitHubPullRequestCommentConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubPullRequestDocumentConfigurationFieldMappingsJsonList(m_gitHubPullRequestDocumentConfigurationFieldMappings.size());
   for(unsigned gitHubPullRequestDocumentConfigurationFieldMappingsIndex = 0; gitHubPullRequestDocumentConfigurationFieldMappingsIndex < gitHubPullRequestDocumentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestDocumentConfigurationFieldMappingsIndex)
   {
     gitHubPullRequestDocumentConfigurationFieldMappingsJsonList[gitHubPullRequestDocumentConfigurationFieldMappingsIndex].AsObject(m_gitHubPullRequestDocumentConfigurationFieldMappings[gitHubPullRequestDocumentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubPullRequestDocumentConfigurationFieldMappings", std::move(gitHubPullRequestDocumentConfigurationFieldMappingsJsonList));

  }

  if(m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList(m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings.size());
   for(unsigned gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex = 0; gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex < gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList.GetLength(); ++gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex)
   {
     gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList[gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex].AsObject(m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings[gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("GitHubPullRequestDocumentAttachmentConfigurationFieldMappings", std::move(gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
