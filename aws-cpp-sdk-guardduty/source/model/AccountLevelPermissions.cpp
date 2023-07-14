/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccountLevelPermissions.h>
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

AccountLevelPermissions::AccountLevelPermissions() : 
    m_blockPublicAccessHasBeenSet(false)
{
}

AccountLevelPermissions::AccountLevelPermissions(JsonView jsonValue) : 
    m_blockPublicAccessHasBeenSet(false)
{
  *this = jsonValue;
}

AccountLevelPermissions& AccountLevelPermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockPublicAccess"))
  {
    m_blockPublicAccess = jsonValue.GetObject("blockPublicAccess");

    m_blockPublicAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountLevelPermissions::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicAccessHasBeenSet)
  {
   payload.WithObject("blockPublicAccess", m_blockPublicAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
