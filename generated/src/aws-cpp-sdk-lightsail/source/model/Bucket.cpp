/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Bucket.h>
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

Bucket::Bucket() : 
    m_resourceTypeHasBeenSet(false),
    m_accessRulesHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_objectVersioningHasBeenSet(false),
    m_ableToUpdateBundle(false),
    m_ableToUpdateBundleHasBeenSet(false),
    m_readonlyAccessAccountsHasBeenSet(false),
    m_resourcesReceivingAccessHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_accessLogConfigHasBeenSet(false)
{
}

Bucket::Bucket(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_accessRulesHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_objectVersioningHasBeenSet(false),
    m_ableToUpdateBundle(false),
    m_ableToUpdateBundleHasBeenSet(false),
    m_readonlyAccessAccountsHasBeenSet(false),
    m_resourcesReceivingAccessHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_accessLogConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Bucket& Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessRules"))
  {
    m_accessRules = jsonValue.GetObject("accessRules");

    m_accessRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
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

  if(jsonValue.ValueExists("objectVersioning"))
  {
    m_objectVersioning = jsonValue.GetString("objectVersioning");

    m_objectVersioningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ableToUpdateBundle"))
  {
    m_ableToUpdateBundle = jsonValue.GetBool("ableToUpdateBundle");

    m_ableToUpdateBundleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readonlyAccessAccounts"))
  {
    Aws::Utils::Array<JsonView> readonlyAccessAccountsJsonList = jsonValue.GetArray("readonlyAccessAccounts");
    for(unsigned readonlyAccessAccountsIndex = 0; readonlyAccessAccountsIndex < readonlyAccessAccountsJsonList.GetLength(); ++readonlyAccessAccountsIndex)
    {
      m_readonlyAccessAccounts.push_back(readonlyAccessAccountsJsonList[readonlyAccessAccountsIndex].AsString());
    }
    m_readonlyAccessAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesReceivingAccess"))
  {
    Aws::Utils::Array<JsonView> resourcesReceivingAccessJsonList = jsonValue.GetArray("resourcesReceivingAccess");
    for(unsigned resourcesReceivingAccessIndex = 0; resourcesReceivingAccessIndex < resourcesReceivingAccessJsonList.GetLength(); ++resourcesReceivingAccessIndex)
    {
      m_resourcesReceivingAccess.push_back(resourcesReceivingAccessJsonList[resourcesReceivingAccessIndex].AsObject());
    }
    m_resourcesReceivingAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessLogConfig"))
  {
    m_accessLogConfig = jsonValue.GetObject("accessLogConfig");

    m_accessLogConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_accessRulesHasBeenSet)
  {
   payload.WithObject("accessRules", m_accessRules.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

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

  if(m_objectVersioningHasBeenSet)
  {
   payload.WithString("objectVersioning", m_objectVersioning);

  }

  if(m_ableToUpdateBundleHasBeenSet)
  {
   payload.WithBool("ableToUpdateBundle", m_ableToUpdateBundle);

  }

  if(m_readonlyAccessAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readonlyAccessAccountsJsonList(m_readonlyAccessAccounts.size());
   for(unsigned readonlyAccessAccountsIndex = 0; readonlyAccessAccountsIndex < readonlyAccessAccountsJsonList.GetLength(); ++readonlyAccessAccountsIndex)
   {
     readonlyAccessAccountsJsonList[readonlyAccessAccountsIndex].AsString(m_readonlyAccessAccounts[readonlyAccessAccountsIndex]);
   }
   payload.WithArray("readonlyAccessAccounts", std::move(readonlyAccessAccountsJsonList));

  }

  if(m_resourcesReceivingAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesReceivingAccessJsonList(m_resourcesReceivingAccess.size());
   for(unsigned resourcesReceivingAccessIndex = 0; resourcesReceivingAccessIndex < resourcesReceivingAccessJsonList.GetLength(); ++resourcesReceivingAccessIndex)
   {
     resourcesReceivingAccessJsonList[resourcesReceivingAccessIndex].AsObject(m_resourcesReceivingAccess[resourcesReceivingAccessIndex].Jsonize());
   }
   payload.WithArray("resourcesReceivingAccess", std::move(resourcesReceivingAccessJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_accessLogConfigHasBeenSet)
  {
   payload.WithObject("accessLogConfig", m_accessLogConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
