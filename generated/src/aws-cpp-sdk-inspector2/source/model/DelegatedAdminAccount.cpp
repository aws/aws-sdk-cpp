/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DelegatedAdminAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

DelegatedAdminAccount::DelegatedAdminAccount() : 
    m_accountIdHasBeenSet(false),
    m_status(DelegatedAdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DelegatedAdminAccount::DelegatedAdminAccount(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_status(DelegatedAdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DelegatedAdminAccount& DelegatedAdminAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DelegatedAdminStatusMapper::GetDelegatedAdminStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DelegatedAdminAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DelegatedAdminStatusMapper::GetNameForDelegatedAdminStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
