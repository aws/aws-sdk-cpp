/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/KeyspaceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

KeyspaceSummary::KeyspaceSummary() : 
    m_keyspaceNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_replicationStrategy(Rs::NOT_SET),
    m_replicationStrategyHasBeenSet(false),
    m_replicationRegionsHasBeenSet(false)
{
}

KeyspaceSummary::KeyspaceSummary(JsonView jsonValue) : 
    m_keyspaceNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_replicationStrategy(Rs::NOT_SET),
    m_replicationStrategyHasBeenSet(false),
    m_replicationRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

KeyspaceSummary& KeyspaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");

    m_keyspaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStrategy"))
  {
    m_replicationStrategy = RsMapper::GetRsForName(jsonValue.GetString("replicationStrategy"));

    m_replicationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationRegions"))
  {
    Aws::Utils::Array<JsonView> replicationRegionsJsonList = jsonValue.GetArray("replicationRegions");
    for(unsigned replicationRegionsIndex = 0; replicationRegionsIndex < replicationRegionsJsonList.GetLength(); ++replicationRegionsIndex)
    {
      m_replicationRegions.push_back(replicationRegionsJsonList[replicationRegionsIndex].AsString());
    }
    m_replicationRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyspaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_replicationStrategyHasBeenSet)
  {
   payload.WithString("replicationStrategy", RsMapper::GetNameForRs(m_replicationStrategy));
  }

  if(m_replicationRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationRegionsJsonList(m_replicationRegions.size());
   for(unsigned replicationRegionsIndex = 0; replicationRegionsIndex < replicationRegionsJsonList.GetLength(); ++replicationRegionsIndex)
   {
     replicationRegionsJsonList[replicationRegionsIndex].AsString(m_replicationRegions[replicationRegionsIndex]);
   }
   payload.WithArray("replicationRegions", std::move(replicationRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
