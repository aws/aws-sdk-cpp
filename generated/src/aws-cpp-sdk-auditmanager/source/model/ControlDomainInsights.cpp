/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlDomainInsights.h>
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

ControlDomainInsights::ControlDomainInsights() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_controlsCountByNoncompliantEvidence(0),
    m_controlsCountByNoncompliantEvidenceHasBeenSet(false),
    m_totalControlsCount(0),
    m_totalControlsCountHasBeenSet(false),
    m_evidenceInsightsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

ControlDomainInsights::ControlDomainInsights(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_controlsCountByNoncompliantEvidence(0),
    m_controlsCountByNoncompliantEvidenceHasBeenSet(false),
    m_totalControlsCount(0),
    m_totalControlsCountHasBeenSet(false),
    m_evidenceInsightsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

ControlDomainInsights& ControlDomainInsights::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("controlsCountByNoncompliantEvidence"))
  {
    m_controlsCountByNoncompliantEvidence = jsonValue.GetInteger("controlsCountByNoncompliantEvidence");

    m_controlsCountByNoncompliantEvidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalControlsCount"))
  {
    m_totalControlsCount = jsonValue.GetInteger("totalControlsCount");

    m_totalControlsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceInsights"))
  {
    m_evidenceInsights = jsonValue.GetObject("evidenceInsights");

    m_evidenceInsightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlDomainInsights::Jsonize() const
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

  if(m_controlsCountByNoncompliantEvidenceHasBeenSet)
  {
   payload.WithInteger("controlsCountByNoncompliantEvidence", m_controlsCountByNoncompliantEvidence);

  }

  if(m_totalControlsCountHasBeenSet)
  {
   payload.WithInteger("totalControlsCount", m_totalControlsCount);

  }

  if(m_evidenceInsightsHasBeenSet)
  {
   payload.WithObject("evidenceInsights", m_evidenceInsights.Jsonize());

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
