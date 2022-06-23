/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineDefinitionS3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

PipelineDefinitionS3Location::PipelineDefinitionS3Location() : 
    m_bucketHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

PipelineDefinitionS3Location::PipelineDefinitionS3Location(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineDefinitionS3Location& PipelineDefinitionS3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKey"))
  {
    m_objectKey = jsonValue.GetString("ObjectKey");

    m_objectKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineDefinitionS3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("ObjectKey", m_objectKey);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
