/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AccountDetail.h>
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

AccountDetail::AccountDetail() : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

AccountDetail::AccountDetail(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false)
{
  *this = jsonValue;
}

AccountDetail& AccountDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountDetail::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
