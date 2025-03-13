/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/DbInstanceConfiguration.h>
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

DbInstanceConfiguration::DbInstanceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DbInstanceConfiguration& DbInstanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbInstanceClass"))
  {
    m_dbInstanceClass = jsonValue.GetString("dbInstanceClass");
    m_dbInstanceClassHasBeenSet = true;
  }
  return *this;
}

JsonValue DbInstanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dbInstanceClassHasBeenSet)
  {
   payload.WithString("dbInstanceClass", m_dbInstanceClass);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
