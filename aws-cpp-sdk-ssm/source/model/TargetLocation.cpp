/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/TargetLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

TargetLocation::TargetLocation() : 
    m_accountsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_targetLocationMaxConcurrencyHasBeenSet(false),
    m_targetLocationMaxErrorsHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_targetLocationAlarmConfigurationHasBeenSet(false)
{
}

TargetLocation::TargetLocation(JsonView jsonValue) : 
    m_accountsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_targetLocationMaxConcurrencyHasBeenSet(false),
    m_targetLocationMaxErrorsHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_targetLocationAlarmConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TargetLocation& TargetLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocationMaxConcurrency"))
  {
    m_targetLocationMaxConcurrency = jsonValue.GetString("TargetLocationMaxConcurrency");

    m_targetLocationMaxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocationMaxErrors"))
  {
    m_targetLocationMaxErrors = jsonValue.GetString("TargetLocationMaxErrors");

    m_targetLocationMaxErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleName"))
  {
    m_executionRoleName = jsonValue.GetString("ExecutionRoleName");

    m_executionRoleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocationAlarmConfiguration"))
  {
    m_targetLocationAlarmConfiguration = jsonValue.GetObject("TargetLocationAlarmConfiguration");

    m_targetLocationAlarmConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetLocation::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  if(m_targetLocationMaxConcurrencyHasBeenSet)
  {
   payload.WithString("TargetLocationMaxConcurrency", m_targetLocationMaxConcurrency);

  }

  if(m_targetLocationMaxErrorsHasBeenSet)
  {
   payload.WithString("TargetLocationMaxErrors", m_targetLocationMaxErrors);

  }

  if(m_executionRoleNameHasBeenSet)
  {
   payload.WithString("ExecutionRoleName", m_executionRoleName);

  }

  if(m_targetLocationAlarmConfigurationHasBeenSet)
  {
   payload.WithObject("TargetLocationAlarmConfiguration", m_targetLocationAlarmConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
