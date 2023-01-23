/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/SparkSubmit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

SparkSubmit::SparkSubmit() : 
    m_entryPointHasBeenSet(false),
    m_entryPointArgumentsHasBeenSet(false),
    m_sparkSubmitParametersHasBeenSet(false)
{
}

SparkSubmit::SparkSubmit(JsonView jsonValue) : 
    m_entryPointHasBeenSet(false),
    m_entryPointArgumentsHasBeenSet(false),
    m_sparkSubmitParametersHasBeenSet(false)
{
  *this = jsonValue;
}

SparkSubmit& SparkSubmit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryPoint"))
  {
    m_entryPoint = jsonValue.GetString("entryPoint");

    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entryPointArguments"))
  {
    Aws::Utils::Array<JsonView> entryPointArgumentsJsonList = jsonValue.GetArray("entryPointArguments");
    for(unsigned entryPointArgumentsIndex = 0; entryPointArgumentsIndex < entryPointArgumentsJsonList.GetLength(); ++entryPointArgumentsIndex)
    {
      m_entryPointArguments.push_back(entryPointArgumentsJsonList[entryPointArgumentsIndex].AsString());
    }
    m_entryPointArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sparkSubmitParameters"))
  {
    m_sparkSubmitParameters = jsonValue.GetString("sparkSubmitParameters");

    m_sparkSubmitParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue SparkSubmit::Jsonize() const
{
  JsonValue payload;

  if(m_entryPointHasBeenSet)
  {
   payload.WithString("entryPoint", m_entryPoint);

  }

  if(m_entryPointArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryPointArgumentsJsonList(m_entryPointArguments.size());
   for(unsigned entryPointArgumentsIndex = 0; entryPointArgumentsIndex < entryPointArgumentsJsonList.GetLength(); ++entryPointArgumentsIndex)
   {
     entryPointArgumentsJsonList[entryPointArgumentsIndex].AsString(m_entryPointArguments[entryPointArgumentsIndex]);
   }
   payload.WithArray("entryPointArguments", std::move(entryPointArgumentsJsonList));

  }

  if(m_sparkSubmitParametersHasBeenSet)
  {
   payload.WithString("sparkSubmitParameters", m_sparkSubmitParameters);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
