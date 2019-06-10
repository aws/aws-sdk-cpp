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

#include <aws/codecommit/model/MergeBranchesByThreeWayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergeBranchesByThreeWayRequest::MergeBranchesByThreeWayRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitSpecifierHasBeenSet(false),
    m_destinationCommitSpecifierHasBeenSet(false),
    m_targetBranchHasBeenSet(false),
    m_conflictDetailLevel(ConflictDetailLevelTypeEnum::NOT_SET),
    m_conflictDetailLevelHasBeenSet(false),
    m_conflictResolutionStrategy(ConflictResolutionStrategyTypeEnum::NOT_SET),
    m_conflictResolutionStrategyHasBeenSet(false),
    m_authorNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_keepEmptyFolders(false),
    m_keepEmptyFoldersHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false)
{
}

Aws::String MergeBranchesByThreeWayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceCommitSpecifierHasBeenSet)
  {
   payload.WithString("sourceCommitSpecifier", m_sourceCommitSpecifier);

  }

  if(m_destinationCommitSpecifierHasBeenSet)
  {
   payload.WithString("destinationCommitSpecifier", m_destinationCommitSpecifier);

  }

  if(m_targetBranchHasBeenSet)
  {
   payload.WithString("targetBranch", m_targetBranch);

  }

  if(m_conflictDetailLevelHasBeenSet)
  {
   payload.WithString("conflictDetailLevel", ConflictDetailLevelTypeEnumMapper::GetNameForConflictDetailLevelTypeEnum(m_conflictDetailLevel));
  }

  if(m_conflictResolutionStrategyHasBeenSet)
  {
   payload.WithString("conflictResolutionStrategy", ConflictResolutionStrategyTypeEnumMapper::GetNameForConflictResolutionStrategyTypeEnum(m_conflictResolutionStrategy));
  }

  if(m_authorNameHasBeenSet)
  {
   payload.WithString("authorName", m_authorName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

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

Aws::Http::HeaderValueCollection MergeBranchesByThreeWayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.MergeBranchesByThreeWay"));
  return headers;

}




