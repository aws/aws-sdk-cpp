/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/GetMergeConflictsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMergeConflictsRequest::GetMergeConflictsRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_destinationCommitSpecifierHasBeenSet(false),
    m_sourceCommitSpecifierHasBeenSet(false),
    m_mergeOption(MergeOptionTypeEnum::NOT_SET),
    m_mergeOptionHasBeenSet(false),
    m_conflictDetailLevel(ConflictDetailLevelTypeEnum::NOT_SET),
    m_conflictDetailLevelHasBeenSet(false),
    m_maxConflictFiles(0),
    m_maxConflictFilesHasBeenSet(false),
    m_conflictResolutionStrategy(ConflictResolutionStrategyTypeEnum::NOT_SET),
    m_conflictResolutionStrategyHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetMergeConflictsRequest::SerializePayload() const
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

  if(m_conflictDetailLevelHasBeenSet)
  {
   payload.WithString("conflictDetailLevel", ConflictDetailLevelTypeEnumMapper::GetNameForConflictDetailLevelTypeEnum(m_conflictDetailLevel));
  }

  if(m_maxConflictFilesHasBeenSet)
  {
   payload.WithInteger("maxConflictFiles", m_maxConflictFiles);

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

Aws::Http::HeaderValueCollection GetMergeConflictsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetMergeConflicts"));
  return headers;

}




