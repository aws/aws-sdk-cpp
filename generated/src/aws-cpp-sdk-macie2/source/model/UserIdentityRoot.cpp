/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UserIdentityRoot.h>
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

UserIdentityRoot::UserIdentityRoot() : 
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

UserIdentityRoot::UserIdentityRoot(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentityRoot& UserIdentityRoot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentityRoot::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
