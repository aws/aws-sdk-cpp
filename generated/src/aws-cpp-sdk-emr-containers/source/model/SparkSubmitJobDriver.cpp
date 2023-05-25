/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/SparkSubmitJobDriver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

SparkSubmitJobDriver::SparkSubmitJobDriver() : 
    m_entryPointHasBeenSet(false),
    m_entryPointArgumentsHasBeenSet(false),
    m_sparkSubmitParametersHasBeenSet(false)
{
}

SparkSubmitJobDriver::SparkSubmitJobDriver(JsonView jsonValue) : 
    m_entryPointHasBeenSet(false),
    m_entryPointArgumentsHasBeenSet(false),
    m_sparkSubmitParametersHasBeenSet(false)
{
  *this = jsonValue;
}

SparkSubmitJobDriver& SparkSubmitJobDriver::operator =(JsonView jsonValue)
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

JsonValue SparkSubmitJobDriver::Jsonize() const
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
} // namespace EMRContainers
} // namespace Aws
