/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ScaleInPolicyDescription.h>
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

ScaleInPolicyDescription::ScaleInPolicyDescription() : 
    m_cpuUtilizationPercentage(0),
    m_cpuUtilizationPercentageHasBeenSet(false)
{
}

ScaleInPolicyDescription::ScaleInPolicyDescription(JsonView jsonValue) : 
    m_cpuUtilizationPercentage(0),
    m_cpuUtilizationPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

ScaleInPolicyDescription& ScaleInPolicyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuUtilizationPercentage"))
  {
    m_cpuUtilizationPercentage = jsonValue.GetInteger("cpuUtilizationPercentage");

    m_cpuUtilizationPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue ScaleInPolicyDescription::Jsonize() const
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
