/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/MembershipDatasources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

MembershipDatasources::MembershipDatasources() : 
    m_accountIdHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_datasourcePackageIngestHistoryHasBeenSet(false)
{
}

MembershipDatasources::MembershipDatasources(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_datasourcePackageIngestHistoryHasBeenSet(false)
{
  *this = jsonValue;
}

MembershipDatasources& MembershipDatasources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

    m_graphArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasourcePackageIngestHistory"))
  {
    Aws::Map<Aws::String, JsonView> datasourcePackageIngestHistoryJsonMap = jsonValue.GetObject("DatasourcePackageIngestHistory").GetAllObjects();
    for(auto& datasourcePackageIngestHistoryItem : datasourcePackageIngestHistoryJsonMap)
    {
      Aws::Map<Aws::String, JsonView> lastIngestStateChangeDatesJsonMap = datasourcePackageIngestHistoryItem.second.GetAllObjects();
      Aws::Map<DatasourcePackageIngestState, TimestampForCollection> lastIngestStateChangeDatesMap;
      for(auto& lastIngestStateChangeDatesItem : lastIngestStateChangeDatesJsonMap)
      {
        lastIngestStateChangeDatesMap[DatasourcePackageIngestStateMapper::GetDatasourcePackageIngestStateForName(lastIngestStateChangeDatesItem.first)] = lastIngestStateChangeDatesItem.second.AsObject();
      }
      m_datasourcePackageIngestHistory[DatasourcePackageMapper::GetDatasourcePackageForName(datasourcePackageIngestHistoryItem.first)] = std::move(lastIngestStateChangeDatesMap);
    }
    m_datasourcePackageIngestHistoryHasBeenSet = true;
  }

  return *this;
}

JsonValue MembershipDatasources::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_datasourcePackageIngestHistoryHasBeenSet)
  {
   JsonValue datasourcePackageIngestHistoryJsonMap;
   for(auto& datasourcePackageIngestHistoryItem : m_datasourcePackageIngestHistory)
   {
     JsonValue lastIngestStateChangeDatesJsonMap;
     for(auto& lastIngestStateChangeDatesItem : datasourcePackageIngestHistoryItem.second)
     {
       lastIngestStateChangeDatesJsonMap.WithObject(DatasourcePackageIngestStateMapper::GetNameForDatasourcePackageIngestState(lastIngestStateChangeDatesItem.first), lastIngestStateChangeDatesItem.second.Jsonize());
     }
     datasourcePackageIngestHistoryJsonMap.WithObject(DatasourcePackageMapper::GetNameForDatasourcePackage(datasourcePackageIngestHistoryItem.first), std::move(lastIngestStateChangeDatesJsonMap));
   }
   payload.WithObject("DatasourcePackageIngestHistory", std::move(datasourcePackageIngestHistoryJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
