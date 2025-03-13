/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelObjectiveBudgetReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceLevelObjectiveBudgetReport::ServiceLevelObjectiveBudgetReport(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLevelObjectiveBudgetReport& ServiceLevelObjectiveBudgetReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationType"))
  {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));
    m_evaluationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BudgetStatus"))
  {
    m_budgetStatus = ServiceLevelObjectiveBudgetStatusMapper::GetServiceLevelObjectiveBudgetStatusForName(jsonValue.GetString("BudgetStatus"));
    m_budgetStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attainment"))
  {
    m_attainment = jsonValue.GetDouble("Attainment");
    m_attainmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalBudgetSeconds"))
  {
    m_totalBudgetSeconds = jsonValue.GetInteger("TotalBudgetSeconds");
    m_totalBudgetSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BudgetSecondsRemaining"))
  {
    m_budgetSecondsRemaining = jsonValue.GetInteger("BudgetSecondsRemaining");
    m_budgetSecondsRemainingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalBudgetRequests"))
  {
    m_totalBudgetRequests = jsonValue.GetInteger("TotalBudgetRequests");
    m_totalBudgetRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BudgetRequestsRemaining"))
  {
    m_budgetRequestsRemaining = jsonValue.GetInteger("BudgetRequestsRemaining");
    m_budgetRequestsRemainingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sli"))
  {
    m_sli = jsonValue.GetObject("Sli");
    m_sliHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestBasedSli"))
  {
    m_requestBasedSli = jsonValue.GetObject("RequestBasedSli");
    m_requestBasedSliHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Goal"))
  {
    m_goal = jsonValue.GetObject("Goal");
    m_goalHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLevelObjectiveBudgetReport::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_evaluationTypeHasBeenSet)
  {
   payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if(m_budgetStatusHasBeenSet)
  {
   payload.WithString("BudgetStatus", ServiceLevelObjectiveBudgetStatusMapper::GetNameForServiceLevelObjectiveBudgetStatus(m_budgetStatus));
  }

  if(m_attainmentHasBeenSet)
  {
   payload.WithDouble("Attainment", m_attainment);

  }

  if(m_totalBudgetSecondsHasBeenSet)
  {
   payload.WithInteger("TotalBudgetSeconds", m_totalBudgetSeconds);

  }

  if(m_budgetSecondsRemainingHasBeenSet)
  {
   payload.WithInteger("BudgetSecondsRemaining", m_budgetSecondsRemaining);

  }

  if(m_totalBudgetRequestsHasBeenSet)
  {
   payload.WithInteger("TotalBudgetRequests", m_totalBudgetRequests);

  }

  if(m_budgetRequestsRemainingHasBeenSet)
  {
   payload.WithInteger("BudgetRequestsRemaining", m_budgetRequestsRemaining);

  }

  if(m_sliHasBeenSet)
  {
   payload.WithObject("Sli", m_sli.Jsonize());

  }

  if(m_requestBasedSliHasBeenSet)
  {
   payload.WithObject("RequestBasedSli", m_requestBasedSli.Jsonize());

  }

  if(m_goalHasBeenSet)
  {
   payload.WithObject("Goal", m_goal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
