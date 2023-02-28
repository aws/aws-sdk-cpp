/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DataSecurityConfig.h>
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

DataSecurityConfig::DataSecurityConfig() : 
    m_modelKmsKeyIdHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_dataLakeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

DataSecurityConfig::DataSecurityConfig(JsonView jsonValue) : 
    m_modelKmsKeyIdHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_dataLakeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DataSecurityConfig& DataSecurityConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DataLakeKmsKeyId"))
  {
    m_dataLakeKmsKeyId = jsonValue.GetString("DataLakeKmsKeyId");

    m_dataLakeKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSecurityConfig::Jsonize() const
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

  if(m_dataLakeKmsKeyIdHasBeenSet)
  {
   payload.WithString("DataLakeKmsKeyId", m_dataLakeKmsKeyId);

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
