/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobResourceConfig.h>
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

LabelingJobResourceConfig::LabelingJobResourceConfig() : 
    m_volumeKmsKeyIdHasBeenSet(false)
{
}

LabelingJobResourceConfig::LabelingJobResourceConfig(JsonView jsonValue) : 
    m_volumeKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobResourceConfig& LabelingJobResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");

    m_volumeKmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
