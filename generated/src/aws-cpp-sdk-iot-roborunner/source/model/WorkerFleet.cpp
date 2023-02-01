/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/WorkerFleet.h>
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

WorkerFleet::WorkerFleet() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false)
{
}

WorkerFleet::WorkerFleet(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerFleet& WorkerFleet::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("additionalFixedProperties"))
  {
    m_additionalFixedProperties = jsonValue.GetString("additionalFixedProperties");

    m_additionalFixedPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerFleet::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_siteHasBeenSet)
  {
   payload.WithString("site", m_site);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_additionalFixedPropertiesHasBeenSet)
  {
   payload.WithString("additionalFixedProperties", m_additionalFixedProperties);

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
