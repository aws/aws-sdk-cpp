/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/KeyPair.h>
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

KeyPair::KeyPair() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fingerprintHasBeenSet(false)
{
}

KeyPair::KeyPair(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fingerprintHasBeenSet(false)
{
  *this = jsonValue;
}

KeyPair& KeyPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fingerprint"))
  {
    m_fingerprint = jsonValue.GetString("fingerprint");

    m_fingerprintHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyPair::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_fingerprintHasBeenSet)
  {
   payload.WithString("fingerprint", m_fingerprint);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
