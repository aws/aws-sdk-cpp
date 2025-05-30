﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AnomalyDetectorConfig::AnomalyDetectorConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AnomalyDetectorConfig& AnomalyDetectorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnomalyDetectorFrequency"))
  {
    m_anomalyDetectorFrequency = FrequencyMapper::GetFrequencyForName(jsonValue.GetString("AnomalyDetectorFrequency"));
    m_anomalyDetectorFrequencyHasBeenSet = true;
  }
  return *this;
}

JsonValue AnomalyDetectorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyDetectorFrequencyHasBeenSet)
  {
   payload.WithString("AnomalyDetectorFrequency", FrequencyMapper::GetNameForFrequency(m_anomalyDetectorFrequency));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
