/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
