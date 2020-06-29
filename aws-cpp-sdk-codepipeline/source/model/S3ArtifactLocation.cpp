/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/S3ArtifactLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

S3ArtifactLocation::S3ArtifactLocation() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
}

S3ArtifactLocation::S3ArtifactLocation(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3ArtifactLocation& S3ArtifactLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectKey"))
  {
    m_objectKey = jsonValue.GetString("objectKey");

    m_objectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ArtifactLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("objectKey", m_objectKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
