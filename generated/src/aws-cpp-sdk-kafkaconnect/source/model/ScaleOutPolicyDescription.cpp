﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ScaleOutPolicyDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

ScaleOutPolicyDescription::ScaleOutPolicyDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

ScaleOutPolicyDescription& ScaleOutPolicyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuUtilizationPercentage"))
  {
    m_cpuUtilizationPercentage = jsonValue.GetInteger("cpuUtilizationPercentage");
    m_cpuUtilizationPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ScaleOutPolicyDescription::Jsonize() const
{
  JsonValue payload;

  if(m_cpuUtilizationPercentageHasBeenSet)
  {
   payload.WithInteger("cpuUtilizationPercentage", m_cpuUtilizationPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
