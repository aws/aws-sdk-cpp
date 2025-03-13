/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/FailureConditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

FailureConditions::FailureConditions(JsonView jsonValue)
{
  *this = jsonValue;
}

FailureConditions& FailureConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("result"))
  {
    m_result = ResultMapper::GetResultForName(jsonValue.GetString("result"));
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retryConfiguration"))
  {
    m_retryConfiguration = jsonValue.GetObject("retryConfiguration");
    m_retryConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureConditions::Jsonize() const
{
  JsonValue payload;

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", ResultMapper::GetNameForResult(m_result));
  }

  if(m_retryConfigurationHasBeenSet)
  {
   payload.WithObject("retryConfiguration", m_retryConfiguration.Jsonize());

  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
