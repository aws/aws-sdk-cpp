/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CommitmentPurchaseAnalysisConfiguration.h>
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

CommitmentPurchaseAnalysisConfiguration::CommitmentPurchaseAnalysisConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CommitmentPurchaseAnalysisConfiguration& CommitmentPurchaseAnalysisConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SavingsPlansPurchaseAnalysisConfiguration"))
  {
    m_savingsPlansPurchaseAnalysisConfiguration = jsonValue.GetObject("SavingsPlansPurchaseAnalysisConfiguration");
    m_savingsPlansPurchaseAnalysisConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CommitmentPurchaseAnalysisConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlansPurchaseAnalysisConfigurationHasBeenSet)
  {
   payload.WithObject("SavingsPlansPurchaseAnalysisConfiguration", m_savingsPlansPurchaseAnalysisConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
