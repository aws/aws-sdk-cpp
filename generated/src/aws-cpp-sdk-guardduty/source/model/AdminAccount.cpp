/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AdminAccount.h>
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

AdminAccount::AdminAccount() : 
    m_adminAccountIdHasBeenSet(false),
    m_adminStatus(AdminStatus::NOT_SET),
    m_adminStatusHasBeenSet(false)
{
}

AdminAccount::AdminAccount(JsonView jsonValue) : 
    m_adminAccountIdHasBeenSet(false),
    m_adminStatus(AdminStatus::NOT_SET),
    m_adminStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AdminAccount& AdminAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adminAccountId"))
  {
    m_adminAccountId = jsonValue.GetString("adminAccountId");

    m_adminAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adminStatus"))
  {
    m_adminStatus = AdminStatusMapper::GetAdminStatusForName(jsonValue.GetString("adminStatus"));

    m_adminStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminAccount::Jsonize() const
{
  JsonValue payload;

  if(m_adminAccountIdHasBeenSet)
  {
   payload.WithString("adminAccountId", m_adminAccountId);

  }

  if(m_adminStatusHasBeenSet)
  {
   payload.WithString("adminStatus", AdminStatusMapper::GetNameForAdminStatus(m_adminStatus));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
