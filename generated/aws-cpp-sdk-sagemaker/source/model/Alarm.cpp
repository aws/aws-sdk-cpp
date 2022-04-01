/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Alarm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Alarm::Alarm() : 
    m_alarmNameHasBeenSet(false)
{
}

Alarm::Alarm(JsonView jsonValue) : 
    m_alarmNameHasBeenSet(false)
{
  *this = jsonValue;
}

Alarm& Alarm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlarmName"))
  {
    m_alarmName = jsonValue.GetString("AlarmName");

    m_alarmNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Alarm::Jsonize() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("AlarmName", m_alarmName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
