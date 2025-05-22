/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionTypeBrief.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConnectionTypeBrief::ConnectionTypeBrief(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionTypeBrief& ConnectionTypeBrief::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Vendor"))
  {
    m_vendor = jsonValue.GetString("Vendor");
    m_vendorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsString());
    }
    m_categoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoUrl"))
  {
    m_logoUrl = jsonValue.GetString("LogoUrl");
    m_logoUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionTypeVariants"))
  {
    Aws::Utils::Array<JsonView> connectionTypeVariantsJsonList = jsonValue.GetArray("ConnectionTypeVariants");
    for(unsigned connectionTypeVariantsIndex = 0; connectionTypeVariantsIndex < connectionTypeVariantsJsonList.GetLength(); ++connectionTypeVariantsIndex)
    {
      m_connectionTypeVariants.push_back(connectionTypeVariantsJsonList[connectionTypeVariantsIndex].AsObject());
    }
    m_connectionTypeVariantsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionTypeBrief::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", m_vendor);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  if(m_logoUrlHasBeenSet)
  {
   payload.WithString("LogoUrl", m_logoUrl);

  }

  if(m_connectionTypeVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionTypeVariantsJsonList(m_connectionTypeVariants.size());
   for(unsigned connectionTypeVariantsIndex = 0; connectionTypeVariantsIndex < connectionTypeVariantsJsonList.GetLength(); ++connectionTypeVariantsIndex)
   {
     connectionTypeVariantsJsonList[connectionTypeVariantsIndex].AsObject(m_connectionTypeVariants[connectionTypeVariantsIndex].Jsonize());
   }
   payload.WithArray("ConnectionTypeVariants", std::move(connectionTypeVariantsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
