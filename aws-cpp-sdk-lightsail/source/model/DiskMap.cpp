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

#include <aws/lightsail/model/DiskMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DiskMap::DiskMap() : 
    m_originalDiskPathHasBeenSet(false),
    m_newDiskNameHasBeenSet(false)
{
}

DiskMap::DiskMap(const JsonValue& jsonValue) : 
    m_originalDiskPathHasBeenSet(false),
    m_newDiskNameHasBeenSet(false)
{
  *this = jsonValue;
}

DiskMap& DiskMap::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("originalDiskPath"))
  {
    m_originalDiskPath = jsonValue.GetString("originalDiskPath");

    m_originalDiskPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("newDiskName"))
  {
    m_newDiskName = jsonValue.GetString("newDiskName");

    m_newDiskNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskMap::Jsonize() const
{
  JsonValue payload;

  if(m_originalDiskPathHasBeenSet)
  {
   payload.WithString("originalDiskPath", m_originalDiskPath);

  }

  if(m_newDiskNameHasBeenSet)
  {
   payload.WithString("newDiskName", m_newDiskName);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
