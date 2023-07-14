/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AccountStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

AccountStatus::AccountStatus() : 
    m_accountIdHasBeenSet(false),
    m_sLRDeploymentStatusHasBeenSet(false)
{
}

AccountStatus::AccountStatus(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_sLRDeploymentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AccountStatus& AccountStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SLRDeploymentStatus"))
  {
    m_sLRDeploymentStatus = jsonValue.GetString("SLRDeploymentStatus");

    m_sLRDeploymentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountStatus::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_sLRDeploymentStatusHasBeenSet)
  {
   payload.WithString("SLRDeploymentStatus", m_sLRDeploymentStatus);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
