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

#include <aws/gamelift/model/Script.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

Script::Script() : 
    m_scriptIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_sizeOnDisk(0),
    m_sizeOnDiskHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_storageLocationHasBeenSet(false)
{
}

Script::Script(JsonView jsonValue) : 
    m_scriptIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_sizeOnDisk(0),
    m_sizeOnDiskHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_storageLocationHasBeenSet(false)
{
  *this = jsonValue;
}

Script& Script::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScriptId"))
  {
    m_scriptId = jsonValue.GetString("ScriptId");

    m_scriptIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeOnDisk"))
  {
    m_sizeOnDisk = jsonValue.GetInt64("SizeOnDisk");

    m_sizeOnDiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("StorageLocation");

    m_storageLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue Script::Jsonize() const
{
  JsonValue payload;

  if(m_scriptIdHasBeenSet)
  {
   payload.WithString("ScriptId", m_scriptId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_sizeOnDiskHasBeenSet)
  {
   payload.WithInt64("SizeOnDisk", m_sizeOnDisk);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithObject("StorageLocation", m_storageLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
