/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccountFreeTrialInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

AccountFreeTrialInfo::AccountFreeTrialInfo() : 
    m_accountIdHasBeenSet(false),
    m_dataSourcesHasBeenSet(false)
{
}

AccountFreeTrialInfo::AccountFreeTrialInfo(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_dataSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AccountFreeTrialInfo& AccountFreeTrialInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSources"))
  {
    m_dataSources = jsonValue.GetObject("dataSources");

    m_dataSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountFreeTrialInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_dataSourcesHasBeenSet)
  {
   payload.WithObject("dataSources", m_dataSources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
