/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/AccountInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSO
{
namespace Model
{

AccountInfo::AccountInfo() : 
    m_accountIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

AccountInfo::AccountInfo(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AccountInfo& AccountInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountName"))
  {
    m_accountName = jsonValue.GetString("accountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

    m_emailAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("accountName", m_accountName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SSO
} // namespace Aws
