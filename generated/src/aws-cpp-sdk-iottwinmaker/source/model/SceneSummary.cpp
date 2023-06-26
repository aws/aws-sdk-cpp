/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SceneSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

SceneSummary::SceneSummary() : 
    m_sceneIdHasBeenSet(false),
    m_contentLocationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SceneSummary::SceneSummary(JsonView jsonValue) : 
    m_sceneIdHasBeenSet(false),
    m_contentLocationHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SceneSummary& SceneSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sceneId"))
  {
    m_sceneId = jsonValue.GetString("sceneId");

    m_sceneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentLocation"))
  {
    m_contentLocation = jsonValue.GetString("contentLocation");

    m_contentLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SceneSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sceneIdHasBeenSet)
  {
   payload.WithString("sceneId", m_sceneId);

  }

  if(m_contentLocationHasBeenSet)
  {
   payload.WithString("contentLocation", m_contentLocation);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
