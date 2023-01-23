/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/MeasurementProcessingConfig.h>
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

MeasurementProcessingConfig::MeasurementProcessingConfig() : 
    m_forwardingConfigHasBeenSet(false)
{
}

MeasurementProcessingConfig::MeasurementProcessingConfig(JsonView jsonValue) : 
    m_forwardingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

MeasurementProcessingConfig& MeasurementProcessingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forwardingConfig"))
  {
    m_forwardingConfig = jsonValue.GetObject("forwardingConfig");

    m_forwardingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue MeasurementProcessingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_forwardingConfigHasBeenSet)
  {
   payload.WithObject("forwardingConfig", m_forwardingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
