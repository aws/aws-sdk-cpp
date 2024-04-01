/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/PosixUser.h>
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

PosixUser::PosixUser() : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

PosixUser::PosixUser(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

PosixUser& PosixUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue PosixUser::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

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
