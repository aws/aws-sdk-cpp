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
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

LabelingJobResourceConfig::LabelingJobResourceConfig(JsonView jsonValue) : 
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
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

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
