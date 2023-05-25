/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Account.h>
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

Account::Account() : 
    m_accountIdHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Account::Account(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceStatus"))
  {
    m_resourceStatus = jsonValue.GetObject("resourceStatus");

    m_resourceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_resourceStatusHasBeenSet)
  {
   payload.WithObject("resourceStatus", m_resourceStatus.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
