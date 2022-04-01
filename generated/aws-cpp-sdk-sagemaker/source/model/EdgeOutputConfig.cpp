/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeOutputConfig.h>
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

EdgeOutputConfig::EdgeOutputConfig() : 
    m_s3OutputLocationHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_presetDeploymentType(EdgePresetDeploymentType::NOT_SET),
    m_presetDeploymentTypeHasBeenSet(false),
    m_presetDeploymentConfigHasBeenSet(false)
{
}

EdgeOutputConfig::EdgeOutputConfig(JsonView jsonValue) : 
    m_s3OutputLocationHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_presetDeploymentType(EdgePresetDeploymentType::NOT_SET),
    m_presetDeploymentTypeHasBeenSet(false),
    m_presetDeploymentConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeOutputConfig& EdgeOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputLocation"))
  {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");

    m_s3OutputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresetDeploymentType"))
  {
    m_presetDeploymentType = EdgePresetDeploymentTypeMapper::GetEdgePresetDeploymentTypeForName(jsonValue.GetString("PresetDeploymentType"));

    m_presetDeploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresetDeploymentConfig"))
  {
    m_presetDeploymentConfig = jsonValue.GetString("PresetDeploymentConfig");

    m_presetDeploymentConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputLocationHasBeenSet)
  {
   payload.WithString("S3OutputLocation", m_s3OutputLocation);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_presetDeploymentTypeHasBeenSet)
  {
   payload.WithString("PresetDeploymentType", EdgePresetDeploymentTypeMapper::GetNameForEdgePresetDeploymentType(m_presetDeploymentType));
  }

  if(m_presetDeploymentConfigHasBeenSet)
  {
   payload.WithString("PresetDeploymentConfig", m_presetDeploymentConfig);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
