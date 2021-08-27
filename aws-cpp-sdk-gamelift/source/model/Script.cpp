/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_scriptArnHasBeenSet(false),
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
    m_scriptArnHasBeenSet(false),
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

  if(jsonValue.ValueExists("ScriptArn"))
  {
    m_scriptArn = jsonValue.GetString("ScriptArn");

    m_scriptArnHasBeenSet = true;
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

  if(m_scriptArnHasBeenSet)
  {
   payload.WithString("ScriptArn", m_scriptArn);

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
