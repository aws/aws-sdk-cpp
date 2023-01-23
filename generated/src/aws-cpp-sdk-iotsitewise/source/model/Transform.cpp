﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Transform.h>
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

Transform::Transform() : 
    m_expressionHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_processingConfigHasBeenSet(false)
{
}

Transform::Transform(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_processingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Transform& Transform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variables"))
  {
    Aws::Utils::Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("processingConfig"))
  {
    m_processingConfig = jsonValue.GetObject("processingConfig");

    m_processingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Transform::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_variablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_processingConfigHasBeenSet)
  {
   payload.WithObject("processingConfig", m_processingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
