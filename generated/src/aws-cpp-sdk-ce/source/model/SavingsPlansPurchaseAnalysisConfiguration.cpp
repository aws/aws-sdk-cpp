/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansPurchaseAnalysisConfiguration.h>
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

SavingsPlansPurchaseAnalysisConfiguration::SavingsPlansPurchaseAnalysisConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SavingsPlansPurchaseAnalysisConfiguration& SavingsPlansPurchaseAnalysisConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountScope"))
  {
    m_accountScope = AccountScopeMapper::GetAccountScopeForName(jsonValue.GetString("AccountScope"));
    m_accountScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisType"))
  {
    m_analysisType = AnalysisTypeMapper::GetAnalysisTypeForName(jsonValue.GetString("AnalysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SavingsPlansToAdd"))
  {
    Aws::Utils::Array<JsonView> savingsPlansToAddJsonList = jsonValue.GetArray("SavingsPlansToAdd");
    for(unsigned savingsPlansToAddIndex = 0; savingsPlansToAddIndex < savingsPlansToAddJsonList.GetLength(); ++savingsPlansToAddIndex)
    {
      m_savingsPlansToAdd.push_back(savingsPlansToAddJsonList[savingsPlansToAddIndex].AsObject());
    }
    m_savingsPlansToAddHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SavingsPlansToExclude"))
  {
    Aws::Utils::Array<JsonView> savingsPlansToExcludeJsonList = jsonValue.GetArray("SavingsPlansToExclude");
    for(unsigned savingsPlansToExcludeIndex = 0; savingsPlansToExcludeIndex < savingsPlansToExcludeJsonList.GetLength(); ++savingsPlansToExcludeIndex)
    {
      m_savingsPlansToExclude.push_back(savingsPlansToExcludeJsonList[savingsPlansToExcludeIndex].AsString());
    }
    m_savingsPlansToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LookBackTimePeriod"))
  {
    m_lookBackTimePeriod = jsonValue.GetObject("LookBackTimePeriod");
    m_lookBackTimePeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue SavingsPlansPurchaseAnalysisConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("AccountScope", AccountScopeMapper::GetNameForAccountScope(m_accountScope));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("AnalysisType", AnalysisTypeMapper::GetNameForAnalysisType(m_analysisType));
  }

  if(m_savingsPlansToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlansToAddJsonList(m_savingsPlansToAdd.size());
   for(unsigned savingsPlansToAddIndex = 0; savingsPlansToAddIndex < savingsPlansToAddJsonList.GetLength(); ++savingsPlansToAddIndex)
   {
     savingsPlansToAddJsonList[savingsPlansToAddIndex].AsObject(m_savingsPlansToAdd[savingsPlansToAddIndex].Jsonize());
   }
   payload.WithArray("SavingsPlansToAdd", std::move(savingsPlansToAddJsonList));

  }

  if(m_savingsPlansToExcludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlansToExcludeJsonList(m_savingsPlansToExclude.size());
   for(unsigned savingsPlansToExcludeIndex = 0; savingsPlansToExcludeIndex < savingsPlansToExcludeJsonList.GetLength(); ++savingsPlansToExcludeIndex)
   {
     savingsPlansToExcludeJsonList[savingsPlansToExcludeIndex].AsString(m_savingsPlansToExclude[savingsPlansToExcludeIndex]);
   }
   payload.WithArray("SavingsPlansToExclude", std::move(savingsPlansToExcludeJsonList));

  }

  if(m_lookBackTimePeriodHasBeenSet)
  {
   payload.WithObject("LookBackTimePeriod", m_lookBackTimePeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
