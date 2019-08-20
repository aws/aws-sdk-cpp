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

#include <aws/sagemaker/model/StoppingCondition.h>
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

StoppingCondition::StoppingCondition() : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false),
    m_maxWaitTimeInSeconds(0),
    m_maxWaitTimeInSecondsHasBeenSet(false)
{
}

StoppingCondition::StoppingCondition(JsonView jsonValue) : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false),
    m_maxWaitTimeInSeconds(0),
    m_maxWaitTimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

StoppingCondition& StoppingCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxRuntimeInSeconds"))
  {
    m_maxRuntimeInSeconds = jsonValue.GetInteger("MaxRuntimeInSeconds");

    m_maxRuntimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxWaitTimeInSeconds"))
  {
    m_maxWaitTimeInSeconds = jsonValue.GetInteger("MaxWaitTimeInSeconds");

    m_maxWaitTimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue StoppingCondition::Jsonize() const
{
  JsonValue payload;

  if(m_maxRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxRuntimeInSeconds", m_maxRuntimeInSeconds);

  }

  if(m_maxWaitTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxWaitTimeInSeconds", m_maxWaitTimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
