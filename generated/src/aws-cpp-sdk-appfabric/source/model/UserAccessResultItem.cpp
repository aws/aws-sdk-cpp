/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/UserAccessResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

UserAccessResultItem::UserAccessResultItem() : 
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_tenantDisplayNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_resultStatus(ResultStatus::NOT_SET),
    m_resultStatusHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userFullNameHasBeenSet(false),
    m_userFirstNameHasBeenSet(false),
    m_userLastNameHasBeenSet(false),
    m_userStatusHasBeenSet(false),
    m_taskErrorHasBeenSet(false)
{
}

UserAccessResultItem::UserAccessResultItem(JsonView jsonValue) : 
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_tenantDisplayNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_resultStatus(ResultStatus::NOT_SET),
    m_resultStatusHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userFullNameHasBeenSet(false),
    m_userFirstNameHasBeenSet(false),
    m_userLastNameHasBeenSet(false),
    m_userStatusHasBeenSet(false),
    m_taskErrorHasBeenSet(false)
{
  *this = jsonValue;
}

UserAccessResultItem& UserAccessResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("app"))
  {
    m_app = jsonValue.GetString("app");

    m_appHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenantId"))
  {
    m_tenantId = jsonValue.GetString("tenantId");

    m_tenantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenantDisplayName"))
  {
    m_tenantDisplayName = jsonValue.GetString("tenantDisplayName");

    m_tenantDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultStatus"))
  {
    m_resultStatus = ResultStatusMapper::GetResultStatusForName(jsonValue.GetString("resultStatus"));

    m_resultStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userFullName"))
  {
    m_userFullName = jsonValue.GetString("userFullName");

    m_userFullNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userFirstName"))
  {
    m_userFirstName = jsonValue.GetString("userFirstName");

    m_userFirstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userLastName"))
  {
    m_userLastName = jsonValue.GetString("userLastName");

    m_userLastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userStatus"))
  {
    m_userStatus = jsonValue.GetString("userStatus");

    m_userStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskError"))
  {
    m_taskError = jsonValue.GetObject("taskError");

    m_taskErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue UserAccessResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_tenantDisplayNameHasBeenSet)
  {
   payload.WithString("tenantDisplayName", m_tenantDisplayName);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_resultStatusHasBeenSet)
  {
   payload.WithString("resultStatus", ResultStatusMapper::GetNameForResultStatus(m_resultStatus));
  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_userFullNameHasBeenSet)
  {
   payload.WithString("userFullName", m_userFullName);

  }

  if(m_userFirstNameHasBeenSet)
  {
   payload.WithString("userFirstName", m_userFirstName);

  }

  if(m_userLastNameHasBeenSet)
  {
   payload.WithString("userLastName", m_userLastName);

  }

  if(m_userStatusHasBeenSet)
  {
   payload.WithString("userStatus", m_userStatus);

  }

  if(m_taskErrorHasBeenSet)
  {
   payload.WithObject("taskError", m_taskError.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
