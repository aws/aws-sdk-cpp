/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

LandingZoneDetail::LandingZoneDetail() : 
    m_arnHasBeenSet(false),
    m_driftStatusHasBeenSet(false),
    m_latestAvailableVersionHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_status(LandingZoneStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

LandingZoneDetail::LandingZoneDetail(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_driftStatusHasBeenSet(false),
    m_latestAvailableVersionHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_status(LandingZoneStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

LandingZoneDetail& LandingZoneDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driftStatus"))
  {
    m_driftStatus = jsonValue.GetObject("driftStatus");

    m_driftStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestAvailableVersion"))
  {
    m_latestAvailableVersion = jsonValue.GetString("latestAvailableVersion");

    m_latestAvailableVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifest"))
  {
    m_manifest = jsonValue.GetObject("manifest");

    m_manifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LandingZoneStatusMapper::GetLandingZoneStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue LandingZoneDetail::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_driftStatusHasBeenSet)
  {
   payload.WithObject("driftStatus", m_driftStatus.Jsonize());

  }

  if(m_latestAvailableVersionHasBeenSet)
  {
   payload.WithString("latestAvailableVersion", m_latestAvailableVersion);

  }

  if(m_manifestHasBeenSet)
  {
    if(!m_manifest.View().IsNull())
    {
       payload.WithObject("manifest", JsonValue(m_manifest.View()));
    }
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LandingZoneStatusMapper::GetNameForLandingZoneStatus(m_status));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
