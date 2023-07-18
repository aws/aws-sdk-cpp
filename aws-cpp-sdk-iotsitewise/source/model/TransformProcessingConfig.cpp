/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TransformProcessingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

TransformProcessingConfig::TransformProcessingConfig() : 
    m_computeLocation(ComputeLocation::NOT_SET),
    m_computeLocationHasBeenSet(false),
    m_forwardingConfigHasBeenSet(false)
{
}

TransformProcessingConfig::TransformProcessingConfig(JsonView jsonValue) : 
    m_computeLocation(ComputeLocation::NOT_SET),
    m_computeLocationHasBeenSet(false),
    m_forwardingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

TransformProcessingConfig& TransformProcessingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeLocation"))
  {
    m_computeLocation = ComputeLocationMapper::GetComputeLocationForName(jsonValue.GetString("computeLocation"));

    m_computeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forwardingConfig"))
  {
    m_forwardingConfig = jsonValue.GetObject("forwardingConfig");

    m_forwardingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformProcessingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_computeLocationHasBeenSet)
  {
   payload.WithString("computeLocation", ComputeLocationMapper::GetNameForComputeLocation(m_computeLocation));
  }

  if(m_forwardingConfigHasBeenSet)
  {
   payload.WithObject("forwardingConfig", m_forwardingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
