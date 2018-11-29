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

#include <aws/lightsail/model/DiskInfo.h>
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

DiskInfo::DiskInfo() : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false)
{
}

DiskInfo::DiskInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false)
{
  *this = jsonValue;
}

DiskInfo& DiskInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSystemDisk"))
  {
    m_isSystemDisk = jsonValue.GetBool("isSystemDisk");

    m_isSystemDiskHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  if(m_isSystemDiskHasBeenSet)
  {
   payload.WithBool("isSystemDisk", m_isSystemDisk);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
