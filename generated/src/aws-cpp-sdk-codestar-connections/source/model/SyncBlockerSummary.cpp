/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/SyncBlockerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

SyncBlockerSummary::SyncBlockerSummary() : 
    m_resourceNameHasBeenSet(false),
    m_parentResourceNameHasBeenSet(false),
    m_latestBlockersHasBeenSet(false)
{
}

SyncBlockerSummary::SyncBlockerSummary(JsonView jsonValue) : 
    m_resourceNameHasBeenSet(false),
    m_parentResourceNameHasBeenSet(false),
    m_latestBlockersHasBeenSet(false)
{
  *this = jsonValue;
}

SyncBlockerSummary& SyncBlockerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentResourceName"))
  {
    m_parentResourceName = jsonValue.GetString("ParentResourceName");

    m_parentResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestBlockers"))
  {
    Aws::Utils::Array<JsonView> latestBlockersJsonList = jsonValue.GetArray("LatestBlockers");
    for(unsigned latestBlockersIndex = 0; latestBlockersIndex < latestBlockersJsonList.GetLength(); ++latestBlockersIndex)
    {
      m_latestBlockers.push_back(latestBlockersJsonList[latestBlockersIndex].AsObject());
    }
    m_latestBlockersHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncBlockerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_parentResourceNameHasBeenSet)
  {
   payload.WithString("ParentResourceName", m_parentResourceName);

  }

  if(m_latestBlockersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> latestBlockersJsonList(m_latestBlockers.size());
   for(unsigned latestBlockersIndex = 0; latestBlockersIndex < latestBlockersJsonList.GetLength(); ++latestBlockersIndex)
   {
     latestBlockersJsonList[latestBlockersIndex].AsObject(m_latestBlockers[latestBlockersIndex].Jsonize());
   }
   payload.WithArray("LatestBlockers", std::move(latestBlockersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
