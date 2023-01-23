/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

Group::Group() : 
    m_groupIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_externalIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false)
{
}

Group::Group(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_externalIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalIds"))
  {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("ExternalIds");
    for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
    {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsObject());
    }
    m_externalIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_externalIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalIdsJsonList(m_externalIds.size());
   for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
   {
     externalIdsJsonList[externalIdsIndex].AsObject(m_externalIds[externalIdsIndex].Jsonize());
   }
   payload.WithArray("ExternalIds", std::move(externalIdsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
