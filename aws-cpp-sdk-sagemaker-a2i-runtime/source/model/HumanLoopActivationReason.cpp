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

#include <aws/sagemaker-a2i-runtime/model/HumanLoopActivationReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanLoopActivationReason::HumanLoopActivationReason() : 
    m_conditionsMatched(false),
    m_conditionsMatchedHasBeenSet(false)
{
}

HumanLoopActivationReason::HumanLoopActivationReason(JsonView jsonValue) : 
    m_conditionsMatched(false),
    m_conditionsMatchedHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopActivationReason& HumanLoopActivationReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionsMatched"))
  {
    m_conditionsMatched = jsonValue.GetBool("ConditionsMatched");

    m_conditionsMatchedHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopActivationReason::Jsonize() const
{
  JsonValue payload;

  if(m_conditionsMatchedHasBeenSet)
  {
   payload.WithBool("ConditionsMatched", m_conditionsMatched);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
