/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
