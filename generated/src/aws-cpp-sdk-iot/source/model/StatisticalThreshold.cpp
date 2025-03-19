/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StatisticalThreshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StatisticalThreshold::StatisticalThreshold(JsonView jsonValue)
{
  *this = jsonValue;
}

StatisticalThreshold& StatisticalThreshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = jsonValue.GetString("statistic");
    m_statisticHasBeenSet = true;
  }
  return *this;
}

JsonValue StatisticalThreshold::Jsonize() const
{
  JsonValue payload;

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", m_statistic);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
