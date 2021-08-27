/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ListedUser::ListedUser() : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeyCount(0),
    m_sshPublicKeyCountHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

ListedUser::ListedUser(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeyCount(0),
    m_sshPublicKeyCountHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListedUser& ListedUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeDirectory"))
  {
    m_homeDirectory = jsonValue.GetString("HomeDirectory");

    m_homeDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeDirectoryType"))
  {
    m_homeDirectoryType = HomeDirectoryTypeMapper::GetHomeDirectoryTypeForName(jsonValue.GetString("HomeDirectoryType"));

    m_homeDirectoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshPublicKeyCount"))
  {
    m_sshPublicKeyCount = jsonValue.GetInteger("SshPublicKeyCount");

    m_sshPublicKeyCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedUser::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_homeDirectoryHasBeenSet)
  {
   payload.WithString("HomeDirectory", m_homeDirectory);

  }

  if(m_homeDirectoryTypeHasBeenSet)
  {
   payload.WithString("HomeDirectoryType", HomeDirectoryTypeMapper::GetNameForHomeDirectoryType(m_homeDirectoryType));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_sshPublicKeyCountHasBeenSet)
  {
   payload.WithInteger("SshPublicKeyCount", m_sshPublicKeyCount);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
