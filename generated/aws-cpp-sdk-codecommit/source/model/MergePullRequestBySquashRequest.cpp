﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergePullRequestBySquashRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergePullRequestBySquashRequest::MergePullRequestBySquashRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitIdHasBeenSet(false),
    m_conflictDetailLevel(ConflictDetailLevelTypeEnum::NOT_SET),
    m_conflictDetailLevelHasBeenSet(false),
    m_conflictResolutionStrategy(ConflictResolutionStrategyTypeEnum::NOT_SET),
    m_conflictResolutionStrategyHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_authorNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_keepEmptyFolders(false),
    m_keepEmptyFoldersHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false)
{
}

Aws::String MergePullRequestBySquashRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceCommitIdHasBeenSet)
  {
   payload.WithString("sourceCommitId", m_sourceCommitId);

  }

  if(m_conflictDetailLevelHasBeenSet)
  {
   payload.WithString("conflictDetailLevel", ConflictDetailLevelTypeEnumMapper::GetNameForConflictDetailLevelTypeEnum(m_conflictDetailLevel));
  }

  if(m_conflictResolutionStrategyHasBeenSet)
  {
   payload.WithString("conflictResolutionStrategy", ConflictResolutionStrategyTypeEnumMapper::GetNameForConflictResolutionStrategyTypeEnum(m_conflictResolutionStrategy));
  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

  }

  if(m_authorNameHasBeenSet)
  {
   payload.WithString("authorName", m_authorName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_keepEmptyFoldersHasBeenSet)
  {
   payload.WithBool("keepEmptyFolders", m_keepEmptyFolders);

  }

  if(m_conflictResolutionHasBeenSet)
  {
   payload.WithObject("conflictResolution", m_conflictResolution.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MergePullRequestBySquashRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.MergePullRequestBySquash"));
  return headers;

}




