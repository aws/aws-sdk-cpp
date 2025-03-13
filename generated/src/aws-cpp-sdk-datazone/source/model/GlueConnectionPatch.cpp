/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueConnectionPatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GlueConnectionPatch::GlueConnectionPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueConnectionPatch& GlueConnectionPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("connectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[connectionPropertiesItem.first] = connectionPropertiesItem.second.AsString();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueConnectionPatch::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_connectionPropertiesHasBeenSet)
  {
   JsonValue connectionPropertiesJsonMap;
   for(auto& connectionPropertiesItem : m_connectionProperties)
   {
     connectionPropertiesJsonMap.WithString(connectionPropertiesItem.first, connectionPropertiesItem.second);
   }
   payload.WithObject("connectionProperties", std::move(connectionPropertiesJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
