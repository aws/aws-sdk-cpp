/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/Site.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

Site::Site() : 
    m_siteIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_siteArnHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_operatingAddressCountryCodeHasBeenSet(false),
    m_operatingAddressStateOrRegionHasBeenSet(false),
    m_operatingAddressCityHasBeenSet(false),
    m_rackPhysicalPropertiesHasBeenSet(false)
{
}

Site::Site(JsonView jsonValue) : 
    m_siteIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_siteArnHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_operatingAddressCountryCodeHasBeenSet(false),
    m_operatingAddressStateOrRegionHasBeenSet(false),
    m_operatingAddressCityHasBeenSet(false),
    m_rackPhysicalPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

Site& Site::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SiteId"))
  {
    m_siteId = jsonValue.GetString("SiteId");

    m_siteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SiteArn"))
  {
    m_siteArn = jsonValue.GetString("SiteArn");

    m_siteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingAddressCountryCode"))
  {
    m_operatingAddressCountryCode = jsonValue.GetString("OperatingAddressCountryCode");

    m_operatingAddressCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingAddressStateOrRegion"))
  {
    m_operatingAddressStateOrRegion = jsonValue.GetString("OperatingAddressStateOrRegion");

    m_operatingAddressStateOrRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingAddressCity"))
  {
    m_operatingAddressCity = jsonValue.GetString("OperatingAddressCity");

    m_operatingAddressCityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RackPhysicalProperties"))
  {
    m_rackPhysicalProperties = jsonValue.GetObject("RackPhysicalProperties");

    m_rackPhysicalPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Site::Jsonize() const
{
  JsonValue payload;

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_siteArnHasBeenSet)
  {
   payload.WithString("SiteArn", m_siteArn);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_operatingAddressCountryCodeHasBeenSet)
  {
   payload.WithString("OperatingAddressCountryCode", m_operatingAddressCountryCode);

  }

  if(m_operatingAddressStateOrRegionHasBeenSet)
  {
   payload.WithString("OperatingAddressStateOrRegion", m_operatingAddressStateOrRegion);

  }

  if(m_operatingAddressCityHasBeenSet)
  {
   payload.WithString("OperatingAddressCity", m_operatingAddressCity);

  }

  if(m_rackPhysicalPropertiesHasBeenSet)
  {
   payload.WithObject("RackPhysicalProperties", m_rackPhysicalProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
