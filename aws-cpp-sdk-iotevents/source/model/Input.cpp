/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
