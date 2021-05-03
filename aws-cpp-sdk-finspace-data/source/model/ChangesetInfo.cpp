/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ChangesetInfo.h>
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

ChangesetInfo::ChangesetInfo() : 
    m_idHasBeenSet(false),
    m_changesetArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceParamsHasBeenSet(false),
    m_formatType(FormatType::NOT_SET),
    m_formatTypeHasBeenSet(false),
    m_formatParamsHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_status(ChangesetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_changesetLabelsHasBeenSet(false),
    m_updatesChangesetIdHasBeenSet(false),
    m_updatedByChangesetIdHasBeenSet(false)
{
}

ChangesetInfo::ChangesetInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_changesetArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceParamsHasBeenSet(false),
    m_formatType(FormatType::NOT_SET),
    m_formatTypeHasBeenSet(false),
    m_formatParamsHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_status(ChangesetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_changesetLabelsHasBeenSet(false),
    m_updatesChangesetIdHasBeenSet(false),
    m_updatedByChangesetIdHasBeenSet(false)
{
  *this = jsonValue;
}

ChangesetInfo& ChangesetInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("formatType"))
  {
    m_formatType = FormatTypeMapper::GetFormatTypeForName(jsonValue.GetString("formatType"));

    m_formatTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("createTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("createTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChangesetStatusMapper::GetChangesetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changesetLabels"))
  {
    Aws::Map<Aws::String, JsonView> changesetLabelsJsonMap = jsonValue.GetObject("changesetLabels").GetAllObjects();
    for(auto& changesetLabelsItem : changesetLabelsJsonMap)
    {
      m_changesetLabels[changesetLabelsItem.first] = changesetLabelsItem.second.AsString();
    }
    m_changesetLabelsHasBeenSet = true;
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

JsonValue ChangesetInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
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

  if(m_formatTypeHasBeenSet)
  {
   payload.WithString("formatType", FormatTypeMapper::GetNameForFormatType(m_formatType));
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

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("createTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChangesetStatusMapper::GetNameForChangesetStatus(m_status));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  if(m_changesetLabelsHasBeenSet)
  {
   JsonValue changesetLabelsJsonMap;
   for(auto& changesetLabelsItem : m_changesetLabels)
   {
     changesetLabelsJsonMap.WithString(changesetLabelsItem.first, changesetLabelsItem.second);
   }
   payload.WithObject("changesetLabels", std::move(changesetLabelsJsonMap));

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
