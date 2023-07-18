/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/MetricProcessingConfig.h>
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

MetricProcessingConfig::MetricProcessingConfig() : 
    m_computeLocation(ComputeLocation::NOT_SET),
    m_computeLocationHasBeenSet(false)
{
}

MetricProcessingConfig::MetricProcessingConfig(JsonView jsonValue) : 
    m_computeLocation(ComputeLocation::NOT_SET),
    m_computeLocationHasBeenSet(false)
{
  *this = jsonValue;
}

MetricProcessingConfig& MetricProcessingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeLocation"))
  {
    m_computeLocation = ComputeLocationMapper::GetComputeLocationForName(jsonValue.GetString("computeLocation"));

    m_computeLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricProcessingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_computeLocationHasBeenSet)
  {
   payload.WithString("computeLocation", ComputeLocationMapper::GetNameForComputeLocation(m_computeLocation));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
