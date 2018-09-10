﻿/*
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

#include <aws/connect/model/HierarchyGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HierarchyGroup::HierarchyGroup() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_hierarchyPathHasBeenSet(false)
{
}

HierarchyGroup::HierarchyGroup(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_hierarchyPathHasBeenSet(false)
{
  *this = jsonValue;
}

HierarchyGroup& HierarchyGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LevelId"))
  {
    m_levelId = jsonValue.GetString("LevelId");

    m_levelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyPath"))
  {
    m_hierarchyPath = jsonValue.GetObject("HierarchyPath");

    m_hierarchyPathHasBeenSet = true;
  }

  return *this;
}

JsonValue HierarchyGroup::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_levelIdHasBeenSet)
  {
   payload.WithString("LevelId", m_levelId);

  }

  if(m_hierarchyPathHasBeenSet)
  {
   payload.WithObject("HierarchyPath", m_hierarchyPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
