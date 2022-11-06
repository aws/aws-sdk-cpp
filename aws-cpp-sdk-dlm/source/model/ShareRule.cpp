/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ShareRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

ShareRule::ShareRule() : 
    m_targetAccountsHasBeenSet(false),
    m_unshareInterval(0),
    m_unshareIntervalHasBeenSet(false),
    m_unshareIntervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_unshareIntervalUnitHasBeenSet(false)
{
}

ShareRule::ShareRule(JsonView jsonValue) : 
    m_targetAccountsHasBeenSet(false),
    m_unshareInterval(0),
    m_unshareIntervalHasBeenSet(false),
    m_unshareIntervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_unshareIntervalUnitHasBeenSet(false)
{
  *this = jsonValue;
}

ShareRule& ShareRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetAccounts"))
  {
    Aws::Utils::Array<JsonView> targetAccountsJsonList = jsonValue.GetArray("TargetAccounts");
    for(unsigned targetAccountsIndex = 0; targetAccountsIndex < targetAccountsJsonList.GetLength(); ++targetAccountsIndex)
    {
      m_targetAccounts.push_back(targetAccountsJsonList[targetAccountsIndex].AsString());
    }
    m_targetAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnshareInterval"))
  {
    m_unshareInterval = jsonValue.GetInteger("UnshareInterval");

    m_unshareIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnshareIntervalUnit"))
  {
    m_unshareIntervalUnit = RetentionIntervalUnitValuesMapper::GetRetentionIntervalUnitValuesForName(jsonValue.GetString("UnshareIntervalUnit"));

    m_unshareIntervalUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareRule::Jsonize() const
{
  JsonValue payload;

  if(m_targetAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetAccountsJsonList(m_targetAccounts.size());
   for(unsigned targetAccountsIndex = 0; targetAccountsIndex < targetAccountsJsonList.GetLength(); ++targetAccountsIndex)
   {
     targetAccountsJsonList[targetAccountsIndex].AsString(m_targetAccounts[targetAccountsIndex]);
   }
   payload.WithArray("TargetAccounts", std::move(targetAccountsJsonList));

  }

  if(m_unshareIntervalHasBeenSet)
  {
   payload.WithInteger("UnshareInterval", m_unshareInterval);

  }

  if(m_unshareIntervalUnitHasBeenSet)
  {
   payload.WithString("UnshareIntervalUnit", RetentionIntervalUnitValuesMapper::GetNameForRetentionIntervalUnitValues(m_unshareIntervalUnit));
  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
