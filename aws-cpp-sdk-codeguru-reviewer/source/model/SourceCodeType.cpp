/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/SourceCodeType.h>
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

SourceCodeType::SourceCodeType() : 
    m_commitDiffHasBeenSet(false),
    m_repositoryHeadHasBeenSet(false),
    m_branchDiffHasBeenSet(false),
    m_s3BucketRepositoryHasBeenSet(false),
    m_requestMetadataHasBeenSet(false)
{
}

SourceCodeType::SourceCodeType(JsonView jsonValue) : 
    m_commitDiffHasBeenSet(false),
    m_repositoryHeadHasBeenSet(false),
    m_branchDiffHasBeenSet(false),
    m_s3BucketRepositoryHasBeenSet(false),
    m_requestMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCodeType& SourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommitDiff"))
  {
    m_commitDiff = jsonValue.GetObject("CommitDiff");

    m_commitDiffHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryHead"))
  {
    m_repositoryHead = jsonValue.GetObject("RepositoryHead");

    m_repositoryHeadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BranchDiff"))
  {
    m_branchDiff = jsonValue.GetObject("BranchDiff");

    m_branchDiffHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketRepository"))
  {
    m_s3BucketRepository = jsonValue.GetObject("S3BucketRepository");

    m_s3BucketRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestMetadata"))
  {
    m_requestMetadata = jsonValue.GetObject("RequestMetadata");

    m_requestMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_commitDiffHasBeenSet)
  {
   payload.WithObject("CommitDiff", m_commitDiff.Jsonize());

  }

  if(m_repositoryHeadHasBeenSet)
  {
   payload.WithObject("RepositoryHead", m_repositoryHead.Jsonize());

  }

  if(m_branchDiffHasBeenSet)
  {
   payload.WithObject("BranchDiff", m_branchDiff.Jsonize());

  }

  if(m_s3BucketRepositoryHasBeenSet)
  {
   payload.WithObject("S3BucketRepository", m_s3BucketRepository.Jsonize());

  }

  if(m_requestMetadataHasBeenSet)
  {
   payload.WithObject("RequestMetadata", m_requestMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
