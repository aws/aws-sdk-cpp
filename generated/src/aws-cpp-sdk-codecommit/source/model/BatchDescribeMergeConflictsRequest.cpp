﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchDescribeMergeConflictsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDescribeMergeConflictsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_destinationCommitSpecifierHasBeenSet)
  {
   payload.WithString("destinationCommitSpecifier", m_destinationCommitSpecifier);

  }

  if(m_sourceCommitSpecifierHasBeenSet)
  {
   payload.WithString("sourceCommitSpecifier", m_sourceCommitSpecifier);

  }

  if(m_mergeOptionHasBeenSet)
  {
   payload.WithString("mergeOption", MergeOptionTypeEnumMapper::GetNameForMergeOptionTypeEnum(m_mergeOption));
  }

  if(m_maxMergeHunksHasBeenSet)
  {
   payload.WithInteger("maxMergeHunks", m_maxMergeHunks);

  }

  if(m_maxConflictFilesHasBeenSet)
  {
   payload.WithInteger("maxConflictFiles", m_maxConflictFiles);

  }

  if(m_filePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filePathsJsonList(m_filePaths.size());
   for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
   {
     filePathsJsonList[filePathsIndex].AsString(m_filePaths[filePathsIndex]);
   }
   payload.WithArray("filePaths", std::move(filePathsJsonList));

  }

  if(m_conflictDetailLevelHasBeenSet)
  {
   payload.WithString("conflictDetailLevel", ConflictDetailLevelTypeEnumMapper::GetNameForConflictDetailLevelTypeEnum(m_conflictDetailLevel));
  }

  if(m_conflictResolutionStrategyHasBeenSet)
  {
   payload.WithString("conflictResolutionStrategy", ConflictResolutionStrategyTypeEnumMapper::GetNameForConflictResolutionStrategyTypeEnum(m_conflictResolutionStrategy));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDescribeMergeConflictsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.BatchDescribeMergeConflicts"));
  return headers;

}




