/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelAnomalyDetectionConfiguration.h>
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

ComputationModelAnomalyDetectionConfiguration::ComputationModelAnomalyDetectionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputationModelAnomalyDetectionConfiguration& ComputationModelAnomalyDetectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputProperties"))
  {
    m_inputProperties = jsonValue.GetString("inputProperties");
    m_inputPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resultProperty"))
  {
    m_resultProperty = jsonValue.GetString("resultProperty");
    m_resultPropertyHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputationModelAnomalyDetectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputPropertiesHasBeenSet)
  {
   payload.WithString("inputProperties", m_inputProperties);

  }

  if(m_resultPropertyHasBeenSet)
  {
   payload.WithString("resultProperty", m_resultProperty);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
