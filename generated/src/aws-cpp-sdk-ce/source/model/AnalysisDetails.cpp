/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnalysisDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

AnalysisDetails::AnalysisDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisDetails& AnalysisDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SavingsPlansPurchaseAnalysisDetails"))
  {
    m_savingsPlansPurchaseAnalysisDetails = jsonValue.GetObject("SavingsPlansPurchaseAnalysisDetails");
    m_savingsPlansPurchaseAnalysisDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisDetails::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlansPurchaseAnalysisDetailsHasBeenSet)
  {
   payload.WithObject("SavingsPlansPurchaseAnalysisDetails", m_savingsPlansPurchaseAnalysisDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
