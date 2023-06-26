/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentPropertyGroupRequest.h>
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

ComponentPropertyGroupRequest::ComponentPropertyGroupRequest() : 
    m_groupType(GroupType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_propertyNamesHasBeenSet(false),
    m_updateType(PropertyGroupUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

ComponentPropertyGroupRequest::ComponentPropertyGroupRequest(JsonView jsonValue) : 
    m_groupType(GroupType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_propertyNamesHasBeenSet(false),
    m_updateType(PropertyGroupUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentPropertyGroupRequest& ComponentPropertyGroupRequest::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = PropertyGroupUpdateTypeMapper::GetPropertyGroupUpdateTypeForName(jsonValue.GetString("updateType"));

    m_updateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentPropertyGroupRequest::Jsonize() const
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

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", PropertyGroupUpdateTypeMapper::GetNameForPropertyGroupUpdateType(m_updateType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
