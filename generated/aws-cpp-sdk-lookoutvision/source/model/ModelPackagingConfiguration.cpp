/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelPackagingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

ModelPackagingConfiguration::ModelPackagingConfiguration() : 
    m_greengrassHasBeenSet(false)
{
}

ModelPackagingConfiguration::ModelPackagingConfiguration(JsonView jsonValue) : 
    m_greengrassHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackagingConfiguration& ModelPackagingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Greengrass"))
  {
    m_greengrass = jsonValue.GetObject("Greengrass");

    m_greengrassHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackagingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_greengrassHasBeenSet)
  {
   payload.WithObject("Greengrass", m_greengrass.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
