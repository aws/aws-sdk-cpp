/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_afterCommitIdHasBeenSet(false),
    m_mergeBaseHasBeenSet(false)
{
}

PullRequestSourceReferenceUpdatedEventMetadata::PullRequestSourceReferenceUpdatedEventMetadata(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false),
    m_mergeBaseHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestSourceReferenceUpdatedEventMetadata& PullRequestSourceReferenceUpdatedEventMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("mergeBase"))
  {
    m_mergeBase = jsonValue.GetString("mergeBase");

    m_mergeBaseHasBeenSet = true;
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

  if(m_mergeBaseHasBeenSet)
  {
   payload.WithString("mergeBase", m_mergeBase);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
