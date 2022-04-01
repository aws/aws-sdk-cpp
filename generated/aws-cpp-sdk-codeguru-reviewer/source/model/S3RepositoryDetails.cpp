/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/S3RepositoryDetails.h>
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

S3RepositoryDetails::S3RepositoryDetails() : 
    m_bucketNameHasBeenSet(false),
    m_codeArtifactsHasBeenSet(false)
{
}

S3RepositoryDetails::S3RepositoryDetails(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_codeArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

S3RepositoryDetails& S3RepositoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeArtifacts"))
  {
    m_codeArtifacts = jsonValue.GetObject("CodeArtifacts");

    m_codeArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue S3RepositoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_codeArtifactsHasBeenSet)
  {
   payload.WithObject("CodeArtifacts", m_codeArtifacts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
