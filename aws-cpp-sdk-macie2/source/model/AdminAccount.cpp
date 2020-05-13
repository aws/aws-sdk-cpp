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

#include <aws/macie2/model/AdminAccount.h>
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

AdminAccount::AdminAccount() : 
    m_accountIdHasBeenSet(false),
    m_status(AdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AdminAccount::AdminAccount(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_status(AdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AdminAccount& AdminAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AdminStatusMapper::GetAdminStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AdminStatusMapper::GetNameForAdminStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
