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

#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResolvedTargets::ResolvedTargets() : 
    m_parameterValuesHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
}

ResolvedTargets::ResolvedTargets(const JsonValue& jsonValue) : 
    m_parameterValuesHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedTargets& ResolvedTargets::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ParameterValues"))
  {
    Array<JsonValue> parameterValuesJsonList = jsonValue.GetArray("ParameterValues");
    for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
    {
      m_parameterValues.push_back(parameterValuesJsonList[parameterValuesIndex].AsString());
    }
    m_parameterValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Truncated"))
  {
    m_truncated = jsonValue.GetBool("Truncated");

    m_truncatedHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedTargets::Jsonize() const
{
  JsonValue payload;

  if(m_parameterValuesHasBeenSet)
  {
   Array<JsonValue> parameterValuesJsonList(m_parameterValues.size());
   for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
   {
     parameterValuesJsonList[parameterValuesIndex].AsString(m_parameterValues[parameterValuesIndex]);
   }
   payload.WithArray("ParameterValues", std::move(parameterValuesJsonList));

  }

  if(m_truncatedHasBeenSet)
  {
   payload.WithBool("Truncated", m_truncated);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
