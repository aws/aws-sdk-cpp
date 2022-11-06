/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LightsailDistribution.h>
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

LightsailDistribution::LightsailDistribution() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_alternativeDomainNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_originHasBeenSet(false),
    m_originPublicDNSHasBeenSet(false),
    m_defaultCacheBehaviorHasBeenSet(false),
    m_cacheBehaviorSettingsHasBeenSet(false),
    m_cacheBehaviorsHasBeenSet(false),
    m_ableToUpdateBundle(false),
    m_ableToUpdateBundleHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LightsailDistribution::LightsailDistribution(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_alternativeDomainNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_originHasBeenSet(false),
    m_originPublicDNSHasBeenSet(false),
    m_defaultCacheBehaviorHasBeenSet(false),
    m_cacheBehaviorSettingsHasBeenSet(false),
    m_cacheBehaviorsHasBeenSet(false),
    m_ableToUpdateBundle(false),
    m_ableToUpdateBundleHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

LightsailDistribution& LightsailDistribution::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("alternativeDomainNames"))
  {
    Aws::Utils::Array<JsonView> alternativeDomainNamesJsonList = jsonValue.GetArray("alternativeDomainNames");
    for(unsigned alternativeDomainNamesIndex = 0; alternativeDomainNamesIndex < alternativeDomainNamesJsonList.GetLength(); ++alternativeDomainNamesIndex)
    {
      m_alternativeDomainNames.push_back(alternativeDomainNamesJsonList[alternativeDomainNamesIndex].AsString());
    }
    m_alternativeDomainNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isEnabled"))
  {
    m_isEnabled = jsonValue.GetBool("isEnabled");

    m_isEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");

    m_certificateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("origin"))
  {
    m_origin = jsonValue.GetObject("origin");

    m_originHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originPublicDNS"))
  {
    m_originPublicDNS = jsonValue.GetString("originPublicDNS");

    m_originPublicDNSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultCacheBehavior"))
  {
    m_defaultCacheBehavior = jsonValue.GetObject("defaultCacheBehavior");

    m_defaultCacheBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheBehaviorSettings"))
  {
    m_cacheBehaviorSettings = jsonValue.GetObject("cacheBehaviorSettings");

    m_cacheBehaviorSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheBehaviors"))
  {
    Aws::Utils::Array<JsonView> cacheBehaviorsJsonList = jsonValue.GetArray("cacheBehaviors");
    for(unsigned cacheBehaviorsIndex = 0; cacheBehaviorsIndex < cacheBehaviorsJsonList.GetLength(); ++cacheBehaviorsIndex)
    {
      m_cacheBehaviors.push_back(cacheBehaviorsJsonList[cacheBehaviorsIndex].AsObject());
    }
    m_cacheBehaviorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ableToUpdateBundle"))
  {
    m_ableToUpdateBundle = jsonValue.GetBool("ableToUpdateBundle");

    m_ableToUpdateBundleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));

    m_ipAddressTypeHasBeenSet = true;
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

  return *this;
}

JsonValue LightsailDistribution::Jsonize() const
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

  if(m_alternativeDomainNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alternativeDomainNamesJsonList(m_alternativeDomainNames.size());
   for(unsigned alternativeDomainNamesIndex = 0; alternativeDomainNamesIndex < alternativeDomainNamesJsonList.GetLength(); ++alternativeDomainNamesIndex)
   {
     alternativeDomainNamesJsonList[alternativeDomainNamesIndex].AsString(m_alternativeDomainNames[alternativeDomainNamesIndex]);
   }
   payload.WithArray("alternativeDomainNames", std::move(alternativeDomainNamesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("isEnabled", m_isEnabled);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_originHasBeenSet)
  {
   payload.WithObject("origin", m_origin.Jsonize());

  }

  if(m_originPublicDNSHasBeenSet)
  {
   payload.WithString("originPublicDNS", m_originPublicDNS);

  }

  if(m_defaultCacheBehaviorHasBeenSet)
  {
   payload.WithObject("defaultCacheBehavior", m_defaultCacheBehavior.Jsonize());

  }

  if(m_cacheBehaviorSettingsHasBeenSet)
  {
   payload.WithObject("cacheBehaviorSettings", m_cacheBehaviorSettings.Jsonize());

  }

  if(m_cacheBehaviorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cacheBehaviorsJsonList(m_cacheBehaviors.size());
   for(unsigned cacheBehaviorsIndex = 0; cacheBehaviorsIndex < cacheBehaviorsJsonList.GetLength(); ++cacheBehaviorsIndex)
   {
     cacheBehaviorsJsonList[cacheBehaviorsIndex].AsObject(m_cacheBehaviors[cacheBehaviorsIndex].Jsonize());
   }
   payload.WithArray("cacheBehaviors", std::move(cacheBehaviorsJsonList));

  }

  if(m_ableToUpdateBundleHasBeenSet)
  {
   payload.WithBool("ableToUpdateBundle", m_ableToUpdateBundle);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
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

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
