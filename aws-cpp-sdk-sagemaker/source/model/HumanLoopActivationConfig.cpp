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

#include <aws/sagemaker/model/HumanLoopActivationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HumanLoopActivationConfig::HumanLoopActivationConfig() : 
    m_humanLoopRequestSourceHasBeenSet(false),
    m_humanLoopActivationConditionsConfigHasBeenSet(false)
{
}

HumanLoopActivationConfig::HumanLoopActivationConfig(JsonView jsonValue) : 
    m_humanLoopRequestSourceHasBeenSet(false),
    m_humanLoopActivationConditionsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopActivationConfig& HumanLoopActivationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopRequestSource"))
  {
    m_humanLoopRequestSource = jsonValue.GetObject("HumanLoopRequestSource");

    m_humanLoopRequestSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanLoopActivationConditionsConfig"))
  {
    m_humanLoopActivationConditionsConfig = jsonValue.GetObject("HumanLoopActivationConditionsConfig");

    m_humanLoopActivationConditionsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopActivationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopRequestSourceHasBeenSet)
  {
   payload.WithObject("HumanLoopRequestSource", m_humanLoopRequestSource.Jsonize());

  }

  if(m_humanLoopActivationConditionsConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopActivationConditionsConfig", m_humanLoopActivationConditionsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
