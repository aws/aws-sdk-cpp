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

#include <aws/codecommit/model/PullRequestSourceReferenceUpdatedEventMetadata.h>
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

PullRequestSourceReferenceUpdatedEventMetadata::PullRequestSourceReferenceUpdatedEventMetadata() : 
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false)
{
}

PullRequestSourceReferenceUpdatedEventMetadata::PullRequestSourceReferenceUpdatedEventMetadata(const JsonValue& jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestSourceReferenceUpdatedEventMetadata& PullRequestSourceReferenceUpdatedEventMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("beforeCommitId"))
  {
    m_beforeCommitId = jsonValue.GetString("beforeCommitId");

    m_beforeCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterCommitId"))
  {
    m_afterCommitId = jsonValue.GetString("afterCommitId");

    m_afterCommitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequestSourceReferenceUpdatedEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_beforeCommitIdHasBeenSet)
  {
   payload.WithString("beforeCommitId", m_beforeCommitId);

  }

  if(m_afterCommitIdHasBeenSet)
  {
   payload.WithString("afterCommitId", m_afterCommitId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
