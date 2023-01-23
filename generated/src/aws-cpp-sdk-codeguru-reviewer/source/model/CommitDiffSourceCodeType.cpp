﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

CommitDiffSourceCodeType::CommitDiffSourceCodeType() : 
    m_sourceCommitHasBeenSet(false),
    m_destinationCommitHasBeenSet(false),
    m_mergeBaseCommitHasBeenSet(false)
{
}

CommitDiffSourceCodeType::CommitDiffSourceCodeType(JsonView jsonValue) : 
    m_sourceCommitHasBeenSet(false),
    m_destinationCommitHasBeenSet(false),
    m_mergeBaseCommitHasBeenSet(false)
{
  *this = jsonValue;
}

CommitDiffSourceCodeType& CommitDiffSourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceCommit"))
  {
    m_sourceCommit = jsonValue.GetString("SourceCommit");

    m_sourceCommitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationCommit"))
  {
    m_destinationCommit = jsonValue.GetString("DestinationCommit");

    m_destinationCommitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MergeBaseCommit"))
  {
    m_mergeBaseCommit = jsonValue.GetString("MergeBaseCommit");

    m_mergeBaseCommitHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitDiffSourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceCommitHasBeenSet)
  {
   payload.WithString("SourceCommit", m_sourceCommit);

  }

  if(m_destinationCommitHasBeenSet)
  {
   payload.WithString("DestinationCommit", m_destinationCommit);

  }

  if(m_mergeBaseCommitHasBeenSet)
  {
   payload.WithString("MergeBaseCommit", m_mergeBaseCommit);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
