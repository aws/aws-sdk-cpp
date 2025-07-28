/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelConfiguration.h>
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

ComputationModelConfiguration::ComputationModelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputationModelConfiguration& ComputationModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anomalyDetection"))
  {
    m_anomalyDetection = jsonValue.GetObject("anomalyDetection");
    m_anomalyDetectionHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputationModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyDetectionHasBeenSet)
  {
   payload.WithObject("anomalyDetection", m_anomalyDetection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
