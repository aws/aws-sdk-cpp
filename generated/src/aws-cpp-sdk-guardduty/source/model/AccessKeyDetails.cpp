/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccessKeyDetails.h>
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

AccessKeyDetails::AccessKeyDetails() : 
    m_accessKeyIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

AccessKeyDetails::AccessKeyDetails(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessKeyDetails& AccessKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userType"))
  {
    m_userType = jsonValue.GetString("userType");

    m_userTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("userName", m_userName);

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", m_userType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
