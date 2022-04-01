/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ChangesetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

ChangesetSummary::ChangesetSummary() : 
    m_changesetIdHasBeenSet(false),
    m_changesetArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_sourceParamsHasBeenSet(false),
    m_formatParamsHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_status(IngestionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_activeUntilTimestamp(0),
    m_activeUntilTimestampHasBeenSet(false),
    m_activeFromTimestamp(0),
    m_activeFromTimestampHasBeenSet(false),
    m_updatesChangesetIdHasBeenSet(false),
    m_updatedByChangesetIdHasBeenSet(false)
{
}

ChangesetSummary::ChangesetSummary(JsonView jsonValue) : 
    m_changesetIdHasBeenSet(false),
    m_changesetArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_sourceParamsHasBeenSet(false),
    m_formatParamsHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_status(IngestionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_activeUntilTimestamp(0),
    m_activeUntilTimestampHasBeenSet(false),
    m_activeFromTimestamp(0),
    m_activeFromTimestampHasBeenSet(false),
    m_updatesChangesetIdHasBeenSet(false),
    m_updatedByChangesetIdHasBeenSet(false)
{
  *this = jsonValue;
}

ChangesetSummary& ChangesetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changesetArn"))
  {
    m_changesetArn = jsonValue.GetString("changesetArn");

    m_changesetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

    m_datasetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changeType"))
  {
    m_changeType = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("changeType"));

    m_changeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceParams"))
  {
    Aws::Map<Aws::String, JsonView> sourceParamsJsonMap = jsonValue.GetObject("sourceParams").GetAllObjects();
    for(auto& sourceParamsItem : sourceParamsJsonMap)
    {
      m_sourceParams[sourceParamsItem.first] = sourceParamsItem.second.AsString();
    }
    m_sourceParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formatParams"))
  {
    Aws::Map<Aws::String, JsonView> formatParamsJsonMap = jsonValue.GetObject("formatParams").GetAllObjects();
    for(auto& formatParamsItem : formatParamsJsonMap)
    {
      m_formatParams[formatParamsItem.first] = formatParamsItem.second.AsString();
    }
    m_formatParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IngestionStatusMapper::GetIngestionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeUntilTimestamp"))
  {
    m_activeUntilTimestamp = jsonValue.GetInt64("activeUntilTimestamp");

    m_activeUntilTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeFromTimestamp"))
  {
    m_activeFromTimestamp = jsonValue.GetInt64("activeFromTimestamp");

    m_activeFromTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatesChangesetId"))
  {
    m_updatesChangesetId = jsonValue.GetString("updatesChangesetId");

    m_updatesChangesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedByChangesetId"))
  {
    m_updatedByChangesetId = jsonValue.GetString("updatedByChangesetId");

    m_updatedByChangesetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangesetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_changesetArnHasBeenSet)
  {
   payload.WithString("changesetArn", m_changesetArn);

  }

  if(m_datasetIdHasBeenSet)
  {
   payload.WithString("datasetId", m_datasetId);

  }

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("changeType", ChangeTypeMapper::GetNameForChangeType(m_changeType));
  }

  if(m_sourceParamsHasBeenSet)
  {
   JsonValue sourceParamsJsonMap;
   for(auto& sourceParamsItem : m_sourceParams)
   {
     sourceParamsJsonMap.WithString(sourceParamsItem.first, sourceParamsItem.second);
   }
   payload.WithObject("sourceParams", std::move(sourceParamsJsonMap));

  }

  if(m_formatParamsHasBeenSet)
  {
   JsonValue formatParamsJsonMap;
   for(auto& formatParamsItem : m_formatParams)
   {
     formatParamsJsonMap.WithString(formatParamsItem.first, formatParamsItem.second);
   }
   payload.WithObject("formatParams", std::move(formatParamsJsonMap));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IngestionStatusMapper::GetNameForIngestionStatus(m_status));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  if(m_activeUntilTimestampHasBeenSet)
  {
   payload.WithInt64("activeUntilTimestamp", m_activeUntilTimestamp);

  }

  if(m_activeFromTimestampHasBeenSet)
  {
   payload.WithInt64("activeFromTimestamp", m_activeFromTimestamp);

  }

  if(m_updatesChangesetIdHasBeenSet)
  {
   payload.WithString("updatesChangesetId", m_updatesChangesetId);

  }

  if(m_updatedByChangesetIdHasBeenSet)
  {
   payload.WithString("updatedByChangesetId", m_updatedByChangesetId);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
