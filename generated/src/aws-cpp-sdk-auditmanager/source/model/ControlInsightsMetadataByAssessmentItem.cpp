﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlInsightsMetadataByAssessmentItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

ControlInsightsMetadataByAssessmentItem::ControlInsightsMetadataByAssessmentItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlInsightsMetadataByAssessmentItem& ControlInsightsMetadataByAssessmentItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evidenceInsights"))
  {
    m_evidenceInsights = jsonValue.GetObject("evidenceInsights");
    m_evidenceInsightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("controlSetName"))
  {
    m_controlSetName = jsonValue.GetString("controlSetName");
    m_controlSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlInsightsMetadataByAssessmentItem::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_evidenceInsightsHasBeenSet)
  {
   payload.WithObject("evidenceInsights", m_evidenceInsights.Jsonize());

  }

  if(m_controlSetNameHasBeenSet)
  {
   payload.WithString("controlSetName", m_controlSetName);

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
