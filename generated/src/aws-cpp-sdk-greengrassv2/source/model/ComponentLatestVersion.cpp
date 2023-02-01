/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentLatestVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

ComponentLatestVersion::ComponentLatestVersion() : 
    m_arnHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_platformsHasBeenSet(false)
{
}

ComponentLatestVersion::ComponentLatestVersion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_platformsHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentLatestVersion& ComponentLatestVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publisher"))
  {
    m_publisher = jsonValue.GetString("publisher");

    m_publisherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platforms"))
  {
    Aws::Utils::Array<JsonView> platformsJsonList = jsonValue.GetArray("platforms");
    for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
    {
      m_platforms.push_back(platformsJsonList[platformsIndex].AsObject());
    }
    m_platformsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentLatestVersion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_publisherHasBeenSet)
  {
   payload.WithString("publisher", m_publisher);

  }

  if(m_platformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformsJsonList(m_platforms.size());
   for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
   {
     platformsJsonList[platformsIndex].AsObject(m_platforms[platformsIndex].Jsonize());
   }
   payload.WithArray("platforms", std::move(platformsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
