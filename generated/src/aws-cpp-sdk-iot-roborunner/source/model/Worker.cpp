/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/Worker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

Worker::Worker() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fleetHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_additionalTransientPropertiesHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false),
    m_vendorPropertiesHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_orientationHasBeenSet(false)
{
}

Worker::Worker(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fleetHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_additionalTransientPropertiesHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false),
    m_vendorPropertiesHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_orientationHasBeenSet(false)
{
  *this = jsonValue;
}

Worker& Worker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleet"))
  {
    m_fleet = jsonValue.GetString("fleet");

    m_fleetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("site"))
  {
    m_site = jsonValue.GetString("site");

    m_siteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalTransientProperties"))
  {
    m_additionalTransientProperties = jsonValue.GetString("additionalTransientProperties");

    m_additionalTransientPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalFixedProperties"))
  {
    m_additionalFixedProperties = jsonValue.GetString("additionalFixedProperties");

    m_additionalFixedPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorProperties"))
  {
    m_vendorProperties = jsonValue.GetObject("vendorProperties");

    m_vendorPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orientation"))
  {
    m_orientation = jsonValue.GetObject("orientation");

    m_orientationHasBeenSet = true;
  }

  return *this;
}

JsonValue Worker::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_fleetHasBeenSet)
  {
   payload.WithString("fleet", m_fleet);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_siteHasBeenSet)
  {
   payload.WithString("site", m_site);

  }

  if(m_additionalTransientPropertiesHasBeenSet)
  {
   payload.WithString("additionalTransientProperties", m_additionalTransientProperties);

  }

  if(m_additionalFixedPropertiesHasBeenSet)
  {
   payload.WithString("additionalFixedProperties", m_additionalFixedProperties);

  }

  if(m_vendorPropertiesHasBeenSet)
  {
   payload.WithObject("vendorProperties", m_vendorProperties.Jsonize());

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_orientationHasBeenSet)
  {
   payload.WithObject("orientation", m_orientation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
