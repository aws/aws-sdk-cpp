/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RemoteAccountDetails.h>
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

RemoteAccountDetails::RemoteAccountDetails() : 
    m_accountIdHasBeenSet(false),
    m_affiliated(false),
    m_affiliatedHasBeenSet(false)
{
}

RemoteAccountDetails::RemoteAccountDetails(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_affiliated(false),
    m_affiliatedHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteAccountDetails& RemoteAccountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("affiliated"))
  {
    m_affiliated = jsonValue.GetBool("affiliated");

    m_affiliatedHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteAccountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_affiliatedHasBeenSet)
  {
   payload.WithBool("affiliated", m_affiliated);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
