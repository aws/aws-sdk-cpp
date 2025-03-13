/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Account.h>
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

Account::Account(JsonView jsonValue)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("account"))
  {
    m_name = jsonValue.GetString("account");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("account", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
