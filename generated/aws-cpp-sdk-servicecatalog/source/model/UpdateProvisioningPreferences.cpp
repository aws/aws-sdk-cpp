﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdateProvisioningPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

UpdateProvisioningPreferences::UpdateProvisioningPreferences() : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false),
    m_stackSetFailureToleranceCount(0),
    m_stackSetFailureToleranceCountHasBeenSet(false),
    m_stackSetFailureTolerancePercentage(0),
    m_stackSetFailureTolerancePercentageHasBeenSet(false),
    m_stackSetMaxConcurrencyCount(0),
    m_stackSetMaxConcurrencyCountHasBeenSet(false),
    m_stackSetMaxConcurrencyPercentage(0),
    m_stackSetMaxConcurrencyPercentageHasBeenSet(false),
    m_stackSetOperationType(StackSetOperationType::NOT_SET),
    m_stackSetOperationTypeHasBeenSet(false)
{
}

UpdateProvisioningPreferences::UpdateProvisioningPreferences(JsonView jsonValue) : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false),
    m_stackSetFailureToleranceCount(0),
    m_stackSetFailureToleranceCountHasBeenSet(false),
    m_stackSetFailureTolerancePercentage(0),
    m_stackSetFailureTolerancePercentageHasBeenSet(false),
    m_stackSetMaxConcurrencyCount(0),
    m_stackSetMaxConcurrencyCountHasBeenSet(false),
    m_stackSetMaxConcurrencyPercentage(0),
    m_stackSetMaxConcurrencyPercentageHasBeenSet(false),
    m_stackSetOperationType(StackSetOperationType::NOT_SET),
    m_stackSetOperationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateProvisioningPreferences& UpdateProvisioningPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackSetAccounts"))
  {
    Array<JsonView> stackSetAccountsJsonList = jsonValue.GetArray("StackSetAccounts");
    for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
    {
      m_stackSetAccounts.push_back(stackSetAccountsJsonList[stackSetAccountsIndex].AsString());
    }
    m_stackSetAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetRegions"))
  {
    Array<JsonView> stackSetRegionsJsonList = jsonValue.GetArray("StackSetRegions");
    for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
    {
      m_stackSetRegions.push_back(stackSetRegionsJsonList[stackSetRegionsIndex].AsString());
    }
    m_stackSetRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetFailureToleranceCount"))
  {
    m_stackSetFailureToleranceCount = jsonValue.GetInteger("StackSetFailureToleranceCount");

    m_stackSetFailureToleranceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetFailureTolerancePercentage"))
  {
    m_stackSetFailureTolerancePercentage = jsonValue.GetInteger("StackSetFailureTolerancePercentage");

    m_stackSetFailureTolerancePercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetMaxConcurrencyCount"))
  {
    m_stackSetMaxConcurrencyCount = jsonValue.GetInteger("StackSetMaxConcurrencyCount");

    m_stackSetMaxConcurrencyCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetMaxConcurrencyPercentage"))
  {
    m_stackSetMaxConcurrencyPercentage = jsonValue.GetInteger("StackSetMaxConcurrencyPercentage");

    m_stackSetMaxConcurrencyPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetOperationType"))
  {
    m_stackSetOperationType = StackSetOperationTypeMapper::GetStackSetOperationTypeForName(jsonValue.GetString("StackSetOperationType"));

    m_stackSetOperationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateProvisioningPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_stackSetAccountsHasBeenSet)
  {
   Array<JsonValue> stackSetAccountsJsonList(m_stackSetAccounts.size());
   for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
   {
     stackSetAccountsJsonList[stackSetAccountsIndex].AsString(m_stackSetAccounts[stackSetAccountsIndex]);
   }
   payload.WithArray("StackSetAccounts", std::move(stackSetAccountsJsonList));

  }

  if(m_stackSetRegionsHasBeenSet)
  {
   Array<JsonValue> stackSetRegionsJsonList(m_stackSetRegions.size());
   for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
   {
     stackSetRegionsJsonList[stackSetRegionsIndex].AsString(m_stackSetRegions[stackSetRegionsIndex]);
   }
   payload.WithArray("StackSetRegions", std::move(stackSetRegionsJsonList));

  }

  if(m_stackSetFailureToleranceCountHasBeenSet)
  {
   payload.WithInteger("StackSetFailureToleranceCount", m_stackSetFailureToleranceCount);

  }

  if(m_stackSetFailureTolerancePercentageHasBeenSet)
  {
   payload.WithInteger("StackSetFailureTolerancePercentage", m_stackSetFailureTolerancePercentage);

  }

  if(m_stackSetMaxConcurrencyCountHasBeenSet)
  {
   payload.WithInteger("StackSetMaxConcurrencyCount", m_stackSetMaxConcurrencyCount);

  }

  if(m_stackSetMaxConcurrencyPercentageHasBeenSet)
  {
   payload.WithInteger("StackSetMaxConcurrencyPercentage", m_stackSetMaxConcurrencyPercentage);

  }

  if(m_stackSetOperationTypeHasBeenSet)
  {
   payload.WithString("StackSetOperationType", StackSetOperationTypeMapper::GetNameForStackSetOperationType(m_stackSetOperationType));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
