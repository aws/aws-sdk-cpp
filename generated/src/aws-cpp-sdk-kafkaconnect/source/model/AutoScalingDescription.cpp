/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/AutoScalingDescription.h>
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

AutoScalingDescription::AutoScalingDescription() : 
    m_maxWorkerCount(0),
    m_maxWorkerCountHasBeenSet(false),
    m_mcuCount(0),
    m_mcuCountHasBeenSet(false),
    m_minWorkerCount(0),
    m_minWorkerCountHasBeenSet(false),
    m_scaleInPolicyHasBeenSet(false),
    m_scaleOutPolicyHasBeenSet(false)
{
}

AutoScalingDescription::AutoScalingDescription(JsonView jsonValue) : 
    m_maxWorkerCount(0),
    m_maxWorkerCountHasBeenSet(false),
    m_mcuCount(0),
    m_mcuCountHasBeenSet(false),
    m_minWorkerCount(0),
    m_minWorkerCountHasBeenSet(false),
    m_scaleInPolicyHasBeenSet(false),
    m_scaleOutPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingDescription& AutoScalingDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxWorkerCount"))
  {
    m_maxWorkerCount = jsonValue.GetInteger("maxWorkerCount");

    m_maxWorkerCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mcuCount"))
  {
    m_mcuCount = jsonValue.GetInteger("mcuCount");

    m_mcuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minWorkerCount"))
  {
    m_minWorkerCount = jsonValue.GetInteger("minWorkerCount");

    m_minWorkerCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleInPolicy"))
  {
    m_scaleInPolicy = jsonValue.GetObject("scaleInPolicy");

    m_scaleInPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleOutPolicy"))
  {
    m_scaleOutPolicy = jsonValue.GetObject("scaleOutPolicy");

    m_scaleOutPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingDescription::Jsonize() const
{
  JsonValue payload;

  if(m_maxWorkerCountHasBeenSet)
  {
   payload.WithInteger("maxWorkerCount", m_maxWorkerCount);

  }

  if(m_mcuCountHasBeenSet)
  {
   payload.WithInteger("mcuCount", m_mcuCount);

  }

  if(m_minWorkerCountHasBeenSet)
  {
   payload.WithInteger("minWorkerCount", m_minWorkerCount);

  }

  if(m_scaleInPolicyHasBeenSet)
  {
   payload.WithObject("scaleInPolicy", m_scaleInPolicy.Jsonize());

  }

  if(m_scaleOutPolicyHasBeenSet)
  {
   payload.WithObject("scaleOutPolicy", m_scaleOutPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
