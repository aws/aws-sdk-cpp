/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentPropertyGroupResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ComponentPropertyGroupResponse::ComponentPropertyGroupResponse() : 
    m_groupType(GroupType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_propertyNamesHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false)
{
}

ComponentPropertyGroupResponse::ComponentPropertyGroupResponse(JsonView jsonValue) : 
    m_groupType(GroupType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_propertyNamesHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentPropertyGroupResponse& ComponentPropertyGroupResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupType"))
  {
    m_groupType = GroupTypeMapper::GetGroupTypeForName(jsonValue.GetString("groupType"));

    m_groupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyNames"))
  {
    Aws::Utils::Array<JsonView> propertyNamesJsonList = jsonValue.GetArray("propertyNames");
    for(unsigned propertyNamesIndex = 0; propertyNamesIndex < propertyNamesJsonList.GetLength(); ++propertyNamesIndex)
    {
      m_propertyNames.push_back(propertyNamesJsonList[propertyNamesIndex].AsString());
    }
    m_propertyNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isInherited"))
  {
    m_isInherited = jsonValue.GetBool("isInherited");

    m_isInheritedHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentPropertyGroupResponse::Jsonize() const
{
  JsonValue payload;

  if(m_groupTypeHasBeenSet)
  {
   payload.WithString("groupType", GroupTypeMapper::GetNameForGroupType(m_groupType));
  }

  if(m_propertyNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyNamesJsonList(m_propertyNames.size());
   for(unsigned propertyNamesIndex = 0; propertyNamesIndex < propertyNamesJsonList.GetLength(); ++propertyNamesIndex)
   {
     propertyNamesJsonList[propertyNamesIndex].AsString(m_propertyNames[propertyNamesIndex]);
   }
   payload.WithArray("propertyNames", std::move(propertyNamesJsonList));

  }

  if(m_isInheritedHasBeenSet)
  {
   payload.WithBool("isInherited", m_isInherited);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
