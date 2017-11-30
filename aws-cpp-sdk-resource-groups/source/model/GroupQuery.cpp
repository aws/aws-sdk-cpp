/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/resource-groups/model/GroupQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

GroupQuery::GroupQuery() : 
    m_groupNameHasBeenSet(false),
    m_resourceQueryHasBeenSet(false)
{
}

GroupQuery::GroupQuery(const JsonValue& jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_resourceQueryHasBeenSet(false)
{
  *this = jsonValue;
}

GroupQuery& GroupQuery::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceQuery"))
  {
    m_resourceQuery = jsonValue.GetObject("ResourceQuery");

    m_resourceQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupQuery::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_resourceQueryHasBeenSet)
  {
   payload.WithObject("ResourceQuery", m_resourceQuery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
