/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SetVariableAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

SetVariableAction::SetVariableAction() : 
    m_variableNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

SetVariableAction::SetVariableAction(JsonView jsonValue) : 
    m_variableNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

SetVariableAction& SetVariableAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variableName"))
  {
    m_variableName = jsonValue.GetString("variableName");

    m_variableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue SetVariableAction::Jsonize() const
{
  JsonValue payload;

  if(m_variableNameHasBeenSet)
  {
   payload.WithString("variableName", m_variableName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
