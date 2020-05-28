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

#include <aws/kafka/model/ClusterOperationStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ClusterOperationStep::ClusterOperationStep() : 
    m_stepInfoHasBeenSet(false),
    m_stepNameHasBeenSet(false)
{
}

ClusterOperationStep::ClusterOperationStep(JsonView jsonValue) : 
    m_stepInfoHasBeenSet(false),
    m_stepNameHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationStep& ClusterOperationStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepInfo"))
  {
    m_stepInfo = jsonValue.GetObject("stepInfo");

    m_stepInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");

    m_stepNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationStep::Jsonize() const
{
  JsonValue payload;

  if(m_stepInfoHasBeenSet)
  {
   payload.WithObject("stepInfo", m_stepInfo.Jsonize());

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
