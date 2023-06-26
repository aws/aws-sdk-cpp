/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Insights.h>
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

Insights::Insights() : 
    m_activeAssessmentsCount(0),
    m_activeAssessmentsCountHasBeenSet(false),
    m_noncompliantEvidenceCount(0),
    m_noncompliantEvidenceCountHasBeenSet(false),
    m_compliantEvidenceCount(0),
    m_compliantEvidenceCountHasBeenSet(false),
    m_inconclusiveEvidenceCount(0),
    m_inconclusiveEvidenceCountHasBeenSet(false),
    m_assessmentControlsCountByNoncompliantEvidence(0),
    m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet(false),
    m_totalAssessmentControlsCount(0),
    m_totalAssessmentControlsCountHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

Insights::Insights(JsonView jsonValue) : 
    m_activeAssessmentsCount(0),
    m_activeAssessmentsCountHasBeenSet(false),
    m_noncompliantEvidenceCount(0),
    m_noncompliantEvidenceCountHasBeenSet(false),
    m_compliantEvidenceCount(0),
    m_compliantEvidenceCountHasBeenSet(false),
    m_inconclusiveEvidenceCount(0),
    m_inconclusiveEvidenceCountHasBeenSet(false),
    m_assessmentControlsCountByNoncompliantEvidence(0),
    m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet(false),
    m_totalAssessmentControlsCount(0),
    m_totalAssessmentControlsCountHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

Insights& Insights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeAssessmentsCount"))
  {
    m_activeAssessmentsCount = jsonValue.GetInteger("activeAssessmentsCount");

    m_activeAssessmentsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noncompliantEvidenceCount"))
  {
    m_noncompliantEvidenceCount = jsonValue.GetInteger("noncompliantEvidenceCount");

    m_noncompliantEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compliantEvidenceCount"))
  {
    m_compliantEvidenceCount = jsonValue.GetInteger("compliantEvidenceCount");

    m_compliantEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inconclusiveEvidenceCount"))
  {
    m_inconclusiveEvidenceCount = jsonValue.GetInteger("inconclusiveEvidenceCount");

    m_inconclusiveEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentControlsCountByNoncompliantEvidence"))
  {
    m_assessmentControlsCountByNoncompliantEvidence = jsonValue.GetInteger("assessmentControlsCountByNoncompliantEvidence");

    m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalAssessmentControlsCount"))
  {
    m_totalAssessmentControlsCount = jsonValue.GetInteger("totalAssessmentControlsCount");

    m_totalAssessmentControlsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue Insights::Jsonize() const
{
  JsonValue payload;

  if(m_activeAssessmentsCountHasBeenSet)
  {
   payload.WithInteger("activeAssessmentsCount", m_activeAssessmentsCount);

  }

  if(m_noncompliantEvidenceCountHasBeenSet)
  {
   payload.WithInteger("noncompliantEvidenceCount", m_noncompliantEvidenceCount);

  }

  if(m_compliantEvidenceCountHasBeenSet)
  {
   payload.WithInteger("compliantEvidenceCount", m_compliantEvidenceCount);

  }

  if(m_inconclusiveEvidenceCountHasBeenSet)
  {
   payload.WithInteger("inconclusiveEvidenceCount", m_inconclusiveEvidenceCount);

  }

  if(m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet)
  {
   payload.WithInteger("assessmentControlsCountByNoncompliantEvidence", m_assessmentControlsCountByNoncompliantEvidence);

  }

  if(m_totalAssessmentControlsCountHasBeenSet)
  {
   payload.WithInteger("totalAssessmentControlsCount", m_totalAssessmentControlsCount);

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
