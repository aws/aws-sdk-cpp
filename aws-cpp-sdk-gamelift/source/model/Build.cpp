/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/Build.h>
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

Build::Build() : 
    m_buildIdHasBeenSet(false),
    m_buildArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(BuildStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sizeOnDisk(0),
    m_sizeOnDiskHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_serverSdkVersionHasBeenSet(false)
{
}

Build::Build(JsonView jsonValue) : 
    m_buildIdHasBeenSet(false),
    m_buildArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(BuildStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sizeOnDisk(0),
    m_sizeOnDiskHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_serverSdkVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Build& Build::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BuildId"))
  {
    m_buildId = jsonValue.GetString("BuildId");

    m_buildIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BuildArn"))
  {
    m_buildArn = jsonValue.GetString("BuildArn");

    m_buildArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BuildStatusMapper::GetBuildStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeOnDisk"))
  {
    m_sizeOnDisk = jsonValue.GetInt64("SizeOnDisk");

    m_sizeOnDiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSdkVersion"))
  {
    m_serverSdkVersion = jsonValue.GetString("ServerSdkVersion");

    m_serverSdkVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Build::Jsonize() const
{
  JsonValue payload;

  if(m_buildIdHasBeenSet)
  {
   payload.WithString("BuildId", m_buildId);

  }

  if(m_buildArnHasBeenSet)
  {
   payload.WithString("BuildArn", m_buildArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BuildStatusMapper::GetNameForBuildStatus(m_status));
  }

  if(m_sizeOnDiskHasBeenSet)
  {
   payload.WithInt64("SizeOnDisk", m_sizeOnDisk);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_serverSdkVersionHasBeenSet)
  {
   payload.WithString("ServerSdkVersion", m_serverSdkVersion);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
