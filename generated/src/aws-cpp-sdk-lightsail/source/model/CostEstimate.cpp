/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CostEstimate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

CostEstimate::CostEstimate() : 
    m_usageTypeHasBeenSet(false),
    m_resultsByTimeHasBeenSet(false)
{
}

CostEstimate::CostEstimate(JsonView jsonValue) : 
    m_usageTypeHasBeenSet(false),
    m_resultsByTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CostEstimate& CostEstimate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");

    m_usageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultsByTime"))
  {
    Aws::Utils::Array<JsonView> resultsByTimeJsonList = jsonValue.GetArray("resultsByTime");
    for(unsigned resultsByTimeIndex = 0; resultsByTimeIndex < resultsByTimeJsonList.GetLength(); ++resultsByTimeIndex)
    {
      m_resultsByTime.push_back(resultsByTimeJsonList[resultsByTimeIndex].AsObject());
    }
    m_resultsByTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CostEstimate::Jsonize() const
{
  JsonValue payload;

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_resultsByTimeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultsByTimeJsonList(m_resultsByTime.size());
   for(unsigned resultsByTimeIndex = 0; resultsByTimeIndex < resultsByTimeJsonList.GetLength(); ++resultsByTimeIndex)
   {
     resultsByTimeJsonList[resultsByTimeIndex].AsObject(m_resultsByTime[resultsByTimeIndex].Jsonize());
   }
   payload.WithArray("resultsByTime", std::move(resultsByTimeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
