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

#include <aws/sagemaker-a2i-runtime/model/HumanLoopActivationResults.h>
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

HumanLoopActivationResults::HumanLoopActivationResults() : 
    m_humanLoopActivationReasonHasBeenSet(false),
    m_humanLoopActivationConditionsEvaluationResultsHasBeenSet(false)
{
}

HumanLoopActivationResults::HumanLoopActivationResults(JsonView jsonValue) : 
    m_humanLoopActivationReasonHasBeenSet(false),
    m_humanLoopActivationConditionsEvaluationResultsHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopActivationResults& HumanLoopActivationResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopActivationReason"))
  {
    m_humanLoopActivationReason = jsonValue.GetObject("HumanLoopActivationReason");

    m_humanLoopActivationReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanLoopActivationConditionsEvaluationResults"))
  {
    m_humanLoopActivationConditionsEvaluationResults = jsonValue.GetString("HumanLoopActivationConditionsEvaluationResults");

    m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopActivationResults::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopActivationReasonHasBeenSet)
  {
   payload.WithObject("HumanLoopActivationReason", m_humanLoopActivationReason.Jsonize());

  }

  if(m_humanLoopActivationConditionsEvaluationResultsHasBeenSet)
  {
   payload.WithString("HumanLoopActivationConditionsEvaluationResults", m_humanLoopActivationConditionsEvaluationResults);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
