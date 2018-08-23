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

#include <aws/iotanalytics/model/ResourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ResourceConfiguration::ResourceConfiguration() : 
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false)
{
}

ResourceConfiguration::ResourceConfiguration(JsonView jsonValue) : 
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceConfiguration& ResourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));

    m_computeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("volumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("volumeSizeInGB", m_volumeSizeInGB);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
