/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/UpdateDataSecurityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

UpdateDataSecurityConfig::UpdateDataSecurityConfig() : 
    m_modelKmsKeyIdHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

UpdateDataSecurityConfig::UpdateDataSecurityConfig(JsonView jsonValue) : 
    m_modelKmsKeyIdHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateDataSecurityConfig& UpdateDataSecurityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelKmsKeyId"))
  {
    m_modelKmsKeyId = jsonValue.GetString("ModelKmsKeyId");

    m_modelKmsKeyIdHasBeenSet = true;
  }

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

JsonValue UpdateDataSecurityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelKmsKeyIdHasBeenSet)
  {
   payload.WithString("ModelKmsKeyId", m_modelKmsKeyId);

  }

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
} // namespace Comprehend
} // namespace Aws
