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

#include <aws/ecs/model/Tmpfs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Tmpfs::Tmpfs() : 
    m_containerPathHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

Tmpfs::Tmpfs(const JsonValue& jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Tmpfs& Tmpfs::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("containerPath"))
  {
    m_containerPath = jsonValue.GetString("containerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountOptions"))
  {
    Array<JsonValue> mountOptionsJsonList = jsonValue.GetArray("mountOptions");
    for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
    {
      m_mountOptions.push_back(mountOptionsJsonList[mountOptionsIndex].AsString());
    }
    m_mountOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Tmpfs::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("containerPath", m_containerPath);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_mountOptionsHasBeenSet)
  {
   Array<JsonValue> mountOptionsJsonList(m_mountOptions.size());
   for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
   {
     mountOptionsJsonList[mountOptionsIndex].AsString(m_mountOptions[mountOptionsIndex]);
   }
   payload.WithArray("mountOptions", std::move(mountOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
