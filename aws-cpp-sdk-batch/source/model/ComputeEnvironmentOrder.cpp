/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/model/ComputeEnvironmentOrder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeEnvironmentOrder::ComputeEnvironmentOrder() : 
    m_order(0),
    m_orderHasBeenSet(false),
    m_computeEnvironmentHasBeenSet(false)
{
}

ComputeEnvironmentOrder::ComputeEnvironmentOrder(const JsonValue& jsonValue) : 
    m_order(0),
    m_orderHasBeenSet(false),
    m_computeEnvironmentHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeEnvironmentOrder& ComputeEnvironmentOrder::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

    m_orderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeEnvironment"))
  {
    m_computeEnvironment = jsonValue.GetString("computeEnvironment");

    m_computeEnvironmentHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeEnvironmentOrder::Jsonize() const
{
  JsonValue payload;

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_computeEnvironmentHasBeenSet)
  {
   payload.WithString("computeEnvironment", m_computeEnvironment);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws