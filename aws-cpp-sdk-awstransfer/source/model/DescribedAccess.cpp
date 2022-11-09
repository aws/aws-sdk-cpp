/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedAccess.h>
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

DescribedAccess::DescribedAccess() : 
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryMappingsHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

DescribedAccess::DescribedAccess(JsonView jsonValue) : 
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryMappingsHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedAccess& DescribedAccess::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedAccess::Jsonize() const
{
  JsonValue payload;

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

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
