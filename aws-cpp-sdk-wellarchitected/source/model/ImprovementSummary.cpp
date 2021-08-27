/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ImprovementSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ImprovementSummary::ImprovementSummary() : 
    m_questionIdHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false)
{
}

ImprovementSummary::ImprovementSummary(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ImprovementSummary& ImprovementSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionTitle"))
  {
    m_questionTitle = jsonValue.GetString("QuestionTitle");

    m_questionTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Risk"))
  {
    m_risk = RiskMapper::GetRiskForName(jsonValue.GetString("Risk"));

    m_riskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementPlanUrl"))
  {
    m_improvementPlanUrl = jsonValue.GetString("ImprovementPlanUrl");

    m_improvementPlanUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ImprovementSummary::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionTitleHasBeenSet)
  {
   payload.WithString("QuestionTitle", m_questionTitle);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("Risk", RiskMapper::GetNameForRisk(m_risk));
  }

  if(m_improvementPlanUrlHasBeenSet)
  {
   payload.WithString("ImprovementPlanUrl", m_improvementPlanUrl);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
