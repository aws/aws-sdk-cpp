﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

AutomatedDiscoveryAccount::AutomatedDiscoveryAccount() : 
    m_accountIdHasBeenSet(false),
    m_status(AutomatedDiscoveryAccountStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AutomatedDiscoveryAccount::AutomatedDiscoveryAccount(JsonView jsonValue)
  : AutomatedDiscoveryAccount()
{
  *this = jsonValue;
}

AutomatedDiscoveryAccount& AutomatedDiscoveryAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedDiscoveryAccountStatusMapper::GetAutomatedDiscoveryAccountStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomatedDiscoveryAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutomatedDiscoveryAccountStatusMapper::GetNameForAutomatedDiscoveryAccountStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
