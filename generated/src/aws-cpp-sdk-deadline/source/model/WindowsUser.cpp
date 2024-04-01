/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/WindowsUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

WindowsUser::WindowsUser() : 
    m_passwordArnHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

WindowsUser::WindowsUser(JsonView jsonValue) : 
    m_passwordArnHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

WindowsUser& WindowsUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("passwordArn"))
  {
    m_passwordArn = jsonValue.GetString("passwordArn");

    m_passwordArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue WindowsUser::Jsonize() const
{
  JsonValue payload;

  if(m_passwordArnHasBeenSet)
  {
   payload.WithString("passwordArn", m_passwordArn);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
