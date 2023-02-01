/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/Account.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

Account::Account() : 
    m_accountIDHasBeenSet(false)
{
}

Account::Account(JsonView jsonValue) : 
    m_accountIDHasBeenSet(false)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountID"))
  {
    m_accountID = jsonValue.GetString("accountID");

    m_accountIDHasBeenSet = true;
  }

  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
