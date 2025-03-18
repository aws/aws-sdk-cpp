/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PaymentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

PaymentConfiguration::PaymentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PaymentConfiguration& PaymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryCompute"))
  {
    m_queryCompute = jsonValue.GetObject("queryCompute");
    m_queryComputeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("machineLearning"))
  {
    m_machineLearning = jsonValue.GetObject("machineLearning");
    m_machineLearningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobCompute"))
  {
    m_jobCompute = jsonValue.GetObject("jobCompute");
    m_jobComputeHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queryComputeHasBeenSet)
  {
   payload.WithObject("queryCompute", m_queryCompute.Jsonize());

  }

  if(m_machineLearningHasBeenSet)
  {
   payload.WithObject("machineLearning", m_machineLearning.Jsonize());

  }

  if(m_jobComputeHasBeenSet)
  {
   payload.WithObject("jobCompute", m_jobCompute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
