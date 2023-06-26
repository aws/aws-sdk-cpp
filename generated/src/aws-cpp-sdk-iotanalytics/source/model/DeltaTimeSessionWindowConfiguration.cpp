/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DeltaTimeSessionWindowConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DeltaTimeSessionWindowConfiguration::DeltaTimeSessionWindowConfiguration() : 
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
}

DeltaTimeSessionWindowConfiguration::DeltaTimeSessionWindowConfiguration(JsonView jsonValue) : 
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

DeltaTimeSessionWindowConfiguration& DeltaTimeSessionWindowConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutInMinutes"))
  {
    m_timeoutInMinutes = jsonValue.GetInteger("timeoutInMinutes");

    m_timeoutInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeltaTimeSessionWindowConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
