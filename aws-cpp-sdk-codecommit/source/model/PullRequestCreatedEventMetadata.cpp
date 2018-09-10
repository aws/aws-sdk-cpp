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

#include <aws/codecommit/model/PullRequestCreatedEventMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

PullRequestCreatedEventMetadata::PullRequestCreatedEventMetadata() : 
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitIdHasBeenSet(false),
    m_destinationCommitIdHasBeenSet(false),
    m_mergeBaseHasBeenSet(false)
{
}

PullRequestCreatedEventMetadata::PullRequestCreatedEventMetadata(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitIdHasBeenSet(false),
    m_destinationCommitIdHasBeenSet(false),
    m_mergeBaseHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestCreatedEventMetadata& PullRequestCreatedEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCommitId"))
  {
    m_sourceCommitId = jsonValue.GetString("sourceCommitId");

    m_sourceCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationCommitId"))
  {
    m_destinationCommitId = jsonValue.GetString("destinationCommitId");

    m_destinationCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeBase"))
  {
    m_mergeBase = jsonValue.GetString("mergeBase");

    m_mergeBaseHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequestCreatedEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceCommitIdHasBeenSet)
  {
   payload.WithString("sourceCommitId", m_sourceCommitId);

  }

  if(m_destinationCommitIdHasBeenSet)
  {
   payload.WithString("destinationCommitId", m_destinationCommitId);

  }

  if(m_mergeBaseHasBeenSet)
  {
   payload.WithString("mergeBase", m_mergeBase);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
