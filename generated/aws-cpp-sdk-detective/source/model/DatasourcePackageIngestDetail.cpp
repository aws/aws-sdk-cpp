/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/DatasourcePackageIngestDetail.h>
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

DatasourcePackageIngestDetail::DatasourcePackageIngestDetail() : 
    m_datasourcePackageIngestState(DatasourcePackageIngestState::NOT_SET),
    m_datasourcePackageIngestStateHasBeenSet(false),
    m_lastIngestStateChangeHasBeenSet(false)
{
}

DatasourcePackageIngestDetail::DatasourcePackageIngestDetail(JsonView jsonValue) : 
    m_datasourcePackageIngestState(DatasourcePackageIngestState::NOT_SET),
    m_datasourcePackageIngestStateHasBeenSet(false),
    m_lastIngestStateChangeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasourcePackageIngestDetail& DatasourcePackageIngestDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasourcePackageIngestState"))
  {
    m_datasourcePackageIngestState = DatasourcePackageIngestStateMapper::GetDatasourcePackageIngestStateForName(jsonValue.GetString("DatasourcePackageIngestState"));

    m_datasourcePackageIngestStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastIngestStateChange"))
  {
    Aws::Map<Aws::String, JsonView> lastIngestStateChangeJsonMap = jsonValue.GetObject("LastIngestStateChange").GetAllObjects();
    for(auto& lastIngestStateChangeItem : lastIngestStateChangeJsonMap)
    {
      m_lastIngestStateChange[DatasourcePackageIngestStateMapper::GetDatasourcePackageIngestStateForName(lastIngestStateChangeItem.first)] = lastIngestStateChangeItem.second.AsObject();
    }
    m_lastIngestStateChangeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasourcePackageIngestDetail::Jsonize() const
{
  JsonValue payload;

  if(m_datasourcePackageIngestStateHasBeenSet)
  {
   payload.WithString("DatasourcePackageIngestState", DatasourcePackageIngestStateMapper::GetNameForDatasourcePackageIngestState(m_datasourcePackageIngestState));
  }

  if(m_lastIngestStateChangeHasBeenSet)
  {
   JsonValue lastIngestStateChangeJsonMap;
   for(auto& lastIngestStateChangeItem : m_lastIngestStateChange)
   {
     lastIngestStateChangeJsonMap.WithObject(DatasourcePackageIngestStateMapper::GetNameForDatasourcePackageIngestState(lastIngestStateChangeItem.first), lastIngestStateChangeItem.second.Jsonize());
   }
   payload.WithObject("LastIngestStateChange", std::move(lastIngestStateChangeJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
