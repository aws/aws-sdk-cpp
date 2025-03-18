/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

Group::Group(JsonView jsonValue)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DistinguishedName"))
  {
    m_distinguishedName = jsonValue.GetString("DistinguishedName");
    m_distinguishedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupScope"))
  {
    m_groupScope = GroupScopeMapper::GetGroupScopeForName(jsonValue.GetString("GroupScope"));
    m_groupScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupType"))
  {
    m_groupType = GroupTypeMapper::GetGroupTypeForName(jsonValue.GetString("GroupType"));
    m_groupTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtherAttributes"))
  {
    Aws::Map<Aws::String, JsonView> otherAttributesJsonMap = jsonValue.GetObject("OtherAttributes").GetAllObjects();
    for(auto& otherAttributesItem : otherAttributesJsonMap)
    {
      m_otherAttributes[otherAttributesItem.first] = otherAttributesItem.second.AsObject();
    }
    m_otherAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");
    m_sAMAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }
  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_distinguishedNameHasBeenSet)
  {
   payload.WithString("DistinguishedName", m_distinguishedName);

  }

  if(m_groupScopeHasBeenSet)
  {
   payload.WithString("GroupScope", GroupScopeMapper::GetNameForGroupScope(m_groupScope));
  }

  if(m_groupTypeHasBeenSet)
  {
   payload.WithString("GroupType", GroupTypeMapper::GetNameForGroupType(m_groupType));
  }

  if(m_otherAttributesHasBeenSet)
  {
   JsonValue otherAttributesJsonMap;
   for(auto& otherAttributesItem : m_otherAttributes)
   {
     otherAttributesJsonMap.WithObject(otherAttributesItem.first, otherAttributesItem.second.Jsonize());
   }
   payload.WithObject("OtherAttributes", std::move(otherAttributesJsonMap));

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
