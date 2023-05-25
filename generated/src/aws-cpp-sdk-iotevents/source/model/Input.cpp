/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/Input.h>
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

Input::Input() : 
    m_inputConfigurationHasBeenSet(false),
    m_inputDefinitionHasBeenSet(false)
{
}

Input::Input(JsonView jsonValue) : 
    m_inputConfigurationHasBeenSet(false),
    m_inputDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputConfiguration"))
  {
    m_inputConfiguration = jsonValue.GetObject("inputConfiguration");

    m_inputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputDefinition"))
  {
    m_inputDefinition = jsonValue.GetObject("inputDefinition");

    m_inputDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_inputConfigurationHasBeenSet)
  {
   payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());

  }

  if(m_inputDefinitionHasBeenSet)
  {
   payload.WithObject("inputDefinition", m_inputDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
