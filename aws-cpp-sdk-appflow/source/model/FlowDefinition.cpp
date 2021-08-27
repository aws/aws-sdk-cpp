/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/FlowDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

FlowDefinition::FlowDefinition() : 
    m_flowArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowStatus(FlowStatus::NOT_SET),
    m_flowStatusHasBeenSet(false),
    m_sourceConnectorType(ConnectorType::NOT_SET),
    m_sourceConnectorTypeHasBeenSet(false),
    m_destinationConnectorType(ConnectorType::NOT_SET),
    m_destinationConnectorTypeHasBeenSet(false),
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastRunExecutionDetailsHasBeenSet(false)
{
}

FlowDefinition::FlowDefinition(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowStatus(FlowStatus::NOT_SET),
    m_flowStatusHasBeenSet(false),
    m_sourceConnectorType(ConnectorType::NOT_SET),
    m_sourceConnectorTypeHasBeenSet(false),
    m_destinationConnectorType(ConnectorType::NOT_SET),
    m_destinationConnectorTypeHasBeenSet(false),
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastRunExecutionDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

FlowDefinition& FlowDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowName"))
  {
    m_flowName = jsonValue.GetString("flowName");

    m_flowNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowStatus"))
  {
    m_flowStatus = FlowStatusMapper::GetFlowStatusForName(jsonValue.GetString("flowStatus"));

    m_flowStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceConnectorType"))
  {
    m_sourceConnectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("sourceConnectorType"));

    m_sourceConnectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConnectorType"))
  {
    m_destinationConnectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("destinationConnectorType"));

    m_destinationConnectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerType"))
  {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("triggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");

    m_lastUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunExecutionDetails"))
  {
    m_lastRunExecutionDetails = jsonValue.GetObject("lastRunExecutionDetails");

    m_lastRunExecutionDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("flowName", m_flowName);

  }

  if(m_flowStatusHasBeenSet)
  {
   payload.WithString("flowStatus", FlowStatusMapper::GetNameForFlowStatus(m_flowStatus));
  }

  if(m_sourceConnectorTypeHasBeenSet)
  {
   payload.WithString("sourceConnectorType", ConnectorTypeMapper::GetNameForConnectorType(m_sourceConnectorType));
  }

  if(m_destinationConnectorTypeHasBeenSet)
  {
   payload.WithString("destinationConnectorType", ConnectorTypeMapper::GetNameForConnectorType(m_destinationConnectorType));
  }

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("triggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_lastRunExecutionDetailsHasBeenSet)
  {
   payload.WithObject("lastRunExecutionDetails", m_lastRunExecutionDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
