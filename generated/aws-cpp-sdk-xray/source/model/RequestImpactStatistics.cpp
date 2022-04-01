/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/RequestImpactStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

RequestImpactStatistics::RequestImpactStatistics() : 
    m_faultCount(0),
    m_faultCountHasBeenSet(false),
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
}

RequestImpactStatistics::RequestImpactStatistics(JsonView jsonValue) : 
    m_faultCount(0),
    m_faultCountHasBeenSet(false),
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
  *this = jsonValue;
}

RequestImpactStatistics& RequestImpactStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaultCount"))
  {
    m_faultCount = jsonValue.GetInt64("FaultCount");

    m_faultCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OkCount"))
  {
    m_okCount = jsonValue.GetInt64("OkCount");

    m_okCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestImpactStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_faultCountHasBeenSet)
  {
   payload.WithInt64("FaultCount", m_faultCount);

  }

  if(m_okCountHasBeenSet)
  {
   payload.WithInt64("OkCount", m_okCount);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
