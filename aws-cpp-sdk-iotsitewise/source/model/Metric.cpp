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

#include <aws/iotsitewise/model/Metric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Metric::Metric() : 
    m_expressionHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_windowHasBeenSet(false)
{
}

Metric::Metric(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_windowHasBeenSet(false)
{
  *this = jsonValue;
}

Metric& Metric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variables"))
  {
    Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("window"))
  {
    m_window = jsonValue.GetObject("window");

    m_windowHasBeenSet = true;
  }

  return *this;
}

JsonValue Metric::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_variablesHasBeenSet)
  {
   Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_windowHasBeenSet)
  {
   payload.WithObject("window", m_window.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
