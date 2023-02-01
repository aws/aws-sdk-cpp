/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/FrameworkControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

FrameworkControl::FrameworkControl() : 
    m_controlNameHasBeenSet(false),
    m_controlInputParametersHasBeenSet(false),
    m_controlScopeHasBeenSet(false)
{
}

FrameworkControl::FrameworkControl(JsonView jsonValue) : 
    m_controlNameHasBeenSet(false),
    m_controlInputParametersHasBeenSet(false),
    m_controlScopeHasBeenSet(false)
{
  *this = jsonValue;
}

FrameworkControl& FrameworkControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlName"))
  {
    m_controlName = jsonValue.GetString("ControlName");

    m_controlNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlInputParameters"))
  {
    Aws::Utils::Array<JsonView> controlInputParametersJsonList = jsonValue.GetArray("ControlInputParameters");
    for(unsigned controlInputParametersIndex = 0; controlInputParametersIndex < controlInputParametersJsonList.GetLength(); ++controlInputParametersIndex)
    {
      m_controlInputParameters.push_back(controlInputParametersJsonList[controlInputParametersIndex].AsObject());
    }
    m_controlInputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlScope"))
  {
    m_controlScope = jsonValue.GetObject("ControlScope");

    m_controlScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameworkControl::Jsonize() const
{
  JsonValue payload;

  if(m_controlNameHasBeenSet)
  {
   payload.WithString("ControlName", m_controlName);

  }

  if(m_controlInputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlInputParametersJsonList(m_controlInputParameters.size());
   for(unsigned controlInputParametersIndex = 0; controlInputParametersIndex < controlInputParametersJsonList.GetLength(); ++controlInputParametersIndex)
   {
     controlInputParametersJsonList[controlInputParametersIndex].AsObject(m_controlInputParameters[controlInputParametersIndex].Jsonize());
   }
   payload.WithArray("ControlInputParameters", std::move(controlInputParametersJsonList));

  }

  if(m_controlScopeHasBeenSet)
  {
   payload.WithObject("ControlScope", m_controlScope.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
