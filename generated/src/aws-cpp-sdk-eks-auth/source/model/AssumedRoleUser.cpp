/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/AssumedRoleUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKSAuth
{
namespace Model
{

AssumedRoleUser::AssumedRoleUser() : 
    m_arnHasBeenSet(false),
    m_assumeRoleIdHasBeenSet(false)
{
}

AssumedRoleUser::AssumedRoleUser(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_assumeRoleIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssumedRoleUser& AssumedRoleUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assumeRoleId"))
  {
    m_assumeRoleId = jsonValue.GetString("assumeRoleId");

    m_assumeRoleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssumedRoleUser::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_assumeRoleIdHasBeenSet)
  {
   payload.WithString("assumeRoleId", m_assumeRoleId);

  }

  return payload;
}

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
