/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobAbortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

IoTJobAbortCriteria::IoTJobAbortCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

IoTJobAbortCriteria& IoTJobAbortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureType"))
  {
    m_failureType = IoTJobExecutionFailureTypeMapper::GetIoTJobExecutionFailureTypeForName(jsonValue.GetString("failureType"));
    m_failureTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = IoTJobAbortActionMapper::GetIoTJobAbortActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetDouble("thresholdPercentage");
    m_thresholdPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minNumberOfExecutedThings"))
  {
    m_minNumberOfExecutedThings = jsonValue.GetInteger("minNumberOfExecutedThings");
    m_minNumberOfExecutedThingsHasBeenSet = true;
  }
  return *this;
}

JsonValue IoTJobAbortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("failureType", IoTJobExecutionFailureTypeMapper::GetNameForIoTJobExecutionFailureType(m_failureType));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", IoTJobAbortActionMapper::GetNameForIoTJobAbortAction(m_action));
  }

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithDouble("thresholdPercentage", m_thresholdPercentage);

  }

  if(m_minNumberOfExecutedThingsHasBeenSet)
  {
   payload.WithInteger("minNumberOfExecutedThings", m_minNumberOfExecutedThings);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
