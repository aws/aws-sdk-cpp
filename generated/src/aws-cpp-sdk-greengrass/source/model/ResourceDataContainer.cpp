/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ResourceDataContainer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

ResourceDataContainer::ResourceDataContainer() : 
    m_localDeviceResourceDataHasBeenSet(false),
    m_localVolumeResourceDataHasBeenSet(false),
    m_s3MachineLearningModelResourceDataHasBeenSet(false),
    m_sageMakerMachineLearningModelResourceDataHasBeenSet(false),
    m_secretsManagerSecretResourceDataHasBeenSet(false)
{
}

ResourceDataContainer::ResourceDataContainer(JsonView jsonValue) : 
    m_localDeviceResourceDataHasBeenSet(false),
    m_localVolumeResourceDataHasBeenSet(false),
    m_s3MachineLearningModelResourceDataHasBeenSet(false),
    m_sageMakerMachineLearningModelResourceDataHasBeenSet(false),
    m_secretsManagerSecretResourceDataHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataContainer& ResourceDataContainer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalDeviceResourceData"))
  {
    m_localDeviceResourceData = jsonValue.GetObject("LocalDeviceResourceData");

    m_localDeviceResourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalVolumeResourceData"))
  {
    m_localVolumeResourceData = jsonValue.GetObject("LocalVolumeResourceData");

    m_localVolumeResourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3MachineLearningModelResourceData"))
  {
    m_s3MachineLearningModelResourceData = jsonValue.GetObject("S3MachineLearningModelResourceData");

    m_s3MachineLearningModelResourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerMachineLearningModelResourceData"))
  {
    m_sageMakerMachineLearningModelResourceData = jsonValue.GetObject("SageMakerMachineLearningModelResourceData");

    m_sageMakerMachineLearningModelResourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerSecretResourceData"))
  {
    m_secretsManagerSecretResourceData = jsonValue.GetObject("SecretsManagerSecretResourceData");

    m_secretsManagerSecretResourceDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataContainer::Jsonize() const
{
  JsonValue payload;

  if(m_localDeviceResourceDataHasBeenSet)
  {
   payload.WithObject("LocalDeviceResourceData", m_localDeviceResourceData.Jsonize());

  }

  if(m_localVolumeResourceDataHasBeenSet)
  {
   payload.WithObject("LocalVolumeResourceData", m_localVolumeResourceData.Jsonize());

  }

  if(m_s3MachineLearningModelResourceDataHasBeenSet)
  {
   payload.WithObject("S3MachineLearningModelResourceData", m_s3MachineLearningModelResourceData.Jsonize());

  }

  if(m_sageMakerMachineLearningModelResourceDataHasBeenSet)
  {
   payload.WithObject("SageMakerMachineLearningModelResourceData", m_sageMakerMachineLearningModelResourceData.Jsonize());

  }

  if(m_secretsManagerSecretResourceDataHasBeenSet)
  {
   payload.WithObject("SecretsManagerSecretResourceData", m_secretsManagerSecretResourceData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
