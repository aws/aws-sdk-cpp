/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedUser.h>
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

DescribedUser::DescribedUser() : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryMappingsHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeysHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

DescribedUser::DescribedUser(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryMappingsHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeysHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedUser& DescribedUser::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("HomeDirectoryMappings"))
  {
    Aws::Utils::Array<JsonView> homeDirectoryMappingsJsonList = jsonValue.GetArray("HomeDirectoryMappings");
    for(unsigned homeDirectoryMappingsIndex = 0; homeDirectoryMappingsIndex < homeDirectoryMappingsJsonList.GetLength(); ++homeDirectoryMappingsIndex)
    {
      m_homeDirectoryMappings.push_back(homeDirectoryMappingsJsonList[homeDirectoryMappingsIndex].AsObject());
    }
    m_homeDirectoryMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeDirectoryType"))
  {
    m_homeDirectoryType = HomeDirectoryTypeMapper::GetHomeDirectoryTypeForName(jsonValue.GetString("HomeDirectoryType"));

    m_homeDirectoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PosixProfile"))
  {
    m_posixProfile = jsonValue.GetObject("PosixProfile");

    m_posixProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshPublicKeys"))
  {
    Aws::Utils::Array<JsonView> sshPublicKeysJsonList = jsonValue.GetArray("SshPublicKeys");
    for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
    {
      m_sshPublicKeys.push_back(sshPublicKeysJsonList[sshPublicKeysIndex].AsObject());
    }
    m_sshPublicKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedUser::Jsonize() const
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

  if(m_homeDirectoryMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> homeDirectoryMappingsJsonList(m_homeDirectoryMappings.size());
   for(unsigned homeDirectoryMappingsIndex = 0; homeDirectoryMappingsIndex < homeDirectoryMappingsJsonList.GetLength(); ++homeDirectoryMappingsIndex)
   {
     homeDirectoryMappingsJsonList[homeDirectoryMappingsIndex].AsObject(m_homeDirectoryMappings[homeDirectoryMappingsIndex].Jsonize());
   }
   payload.WithArray("HomeDirectoryMappings", std::move(homeDirectoryMappingsJsonList));

  }

  if(m_homeDirectoryTypeHasBeenSet)
  {
   payload.WithString("HomeDirectoryType", HomeDirectoryTypeMapper::GetNameForHomeDirectoryType(m_homeDirectoryType));
  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_posixProfileHasBeenSet)
  {
   payload.WithObject("PosixProfile", m_posixProfile.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_sshPublicKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
   for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
   {
     sshPublicKeysJsonList[sshPublicKeysIndex].AsObject(m_sshPublicKeys[sshPublicKeysIndex].Jsonize());
   }
   payload.WithArray("SshPublicKeys", std::move(sshPublicKeysJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

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
