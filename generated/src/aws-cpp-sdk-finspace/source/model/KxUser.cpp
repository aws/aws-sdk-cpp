/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxUser::KxUser() : 
    m_userArnHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false)
{
}

KxUser::KxUser(JsonView jsonValue) : 
    m_userArnHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KxUser& KxUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("createTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTimestamp"))
  {
    m_updateTimestamp = jsonValue.GetDouble("updateTimestamp");

    m_updateTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KxUser::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("userName", m_userName);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("createTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_updateTimestampHasBeenSet)
  {
   payload.WithDouble("updateTimestamp", m_updateTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
