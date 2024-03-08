/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DeprecationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

DeprecationDetail::DeprecationDetail() : 
    m_usageHasBeenSet(false),
    m_replacedWithHasBeenSet(false),
    m_stopServingVersionHasBeenSet(false),
    m_startServingReplacementVersionHasBeenSet(false),
    m_clientStatsHasBeenSet(false)
{
}

DeprecationDetail::DeprecationDetail(JsonView jsonValue) : 
    m_usageHasBeenSet(false),
    m_replacedWithHasBeenSet(false),
    m_stopServingVersionHasBeenSet(false),
    m_startServingReplacementVersionHasBeenSet(false),
    m_clientStatsHasBeenSet(false)
{
  *this = jsonValue;
}

DeprecationDetail& DeprecationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetString("usage");

    m_usageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replacedWith"))
  {
    m_replacedWith = jsonValue.GetString("replacedWith");

    m_replacedWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopServingVersion"))
  {
    m_stopServingVersion = jsonValue.GetString("stopServingVersion");

    m_stopServingVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startServingReplacementVersion"))
  {
    m_startServingReplacementVersion = jsonValue.GetString("startServingReplacementVersion");

    m_startServingReplacementVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientStats"))
  {
    Aws::Utils::Array<JsonView> clientStatsJsonList = jsonValue.GetArray("clientStats");
    for(unsigned clientStatsIndex = 0; clientStatsIndex < clientStatsJsonList.GetLength(); ++clientStatsIndex)
    {
      m_clientStats.push_back(clientStatsJsonList[clientStatsIndex].AsObject());
    }
    m_clientStatsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeprecationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_usageHasBeenSet)
  {
   payload.WithString("usage", m_usage);

  }

  if(m_replacedWithHasBeenSet)
  {
   payload.WithString("replacedWith", m_replacedWith);

  }

  if(m_stopServingVersionHasBeenSet)
  {
   payload.WithString("stopServingVersion", m_stopServingVersion);

  }

  if(m_startServingReplacementVersionHasBeenSet)
  {
   payload.WithString("startServingReplacementVersion", m_startServingReplacementVersion);

  }

  if(m_clientStatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientStatsJsonList(m_clientStats.size());
   for(unsigned clientStatsIndex = 0; clientStatsIndex < clientStatsJsonList.GetLength(); ++clientStatsIndex)
   {
     clientStatsJsonList[clientStatsIndex].AsObject(m_clientStats[clientStatsIndex].Jsonize());
   }
   payload.WithArray("clientStats", std::move(clientStatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
