/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_sageMakerMachineLearningModelResourceDataHasBeenSet(false)
{
}

ResourceDataContainer::ResourceDataContainer(const JsonValue& jsonValue) : 
    m_localDeviceResourceDataHasBeenSet(false),
    m_localVolumeResourceDataHasBeenSet(false),
    m_s3MachineLearningModelResourceDataHasBeenSet(false),
    m_sageMakerMachineLearningModelResourceDataHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataContainer& ResourceDataContainer::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
