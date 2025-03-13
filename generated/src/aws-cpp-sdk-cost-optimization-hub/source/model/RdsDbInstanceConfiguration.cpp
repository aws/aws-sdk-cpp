/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/RdsDbInstanceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

RdsDbInstanceConfiguration::RdsDbInstanceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsDbInstanceConfiguration& RdsDbInstanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instance"))
  {
    m_instance = jsonValue.GetObject("instance");
    m_instanceHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsDbInstanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("instance", m_instance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
