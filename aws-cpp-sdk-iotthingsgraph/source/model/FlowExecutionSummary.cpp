﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/FlowExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

FlowExecutionSummary::FlowExecutionSummary() : 
    m_flowExecutionIdHasBeenSet(false),
    m_status(FlowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_systemInstanceIdHasBeenSet(false),
    m_flowTemplateIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

FlowExecutionSummary::FlowExecutionSummary(JsonView jsonValue) : 
    m_flowExecutionIdHasBeenSet(false),
    m_status(FlowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_systemInstanceIdHasBeenSet(false),
    m_flowTemplateIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

FlowExecutionSummary& FlowExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowExecutionId"))
  {
    m_flowExecutionId = jsonValue.GetString("flowExecutionId");

    m_flowExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FlowExecutionStatusMapper::GetFlowExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemInstanceId"))
  {
    m_systemInstanceId = jsonValue.GetString("systemInstanceId");

    m_systemInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowTemplateId"))
  {
    m_flowTemplateId = jsonValue.GetString("flowTemplateId");

    m_flowTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_flowExecutionIdHasBeenSet)
  {
   payload.WithString("flowExecutionId", m_flowExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FlowExecutionStatusMapper::GetNameForFlowExecutionStatus(m_status));
  }

  if(m_systemInstanceIdHasBeenSet)
  {
   payload.WithString("systemInstanceId", m_systemInstanceId);

  }

  if(m_flowTemplateIdHasBeenSet)
  {
   payload.WithString("flowTemplateId", m_flowTemplateId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
