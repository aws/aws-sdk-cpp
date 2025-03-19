/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TestConnectionInput.h>
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

TestConnectionInput::TestConnectionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TestConnectionInput& TestConnectionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("ConnectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[ConnectionPropertyKeyMapper::GetConnectionPropertyKeyForName(connectionPropertiesItem.first)] = connectionPropertiesItem.second.AsString();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TestConnectionInput::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_connectionPropertiesHasBeenSet)
  {
   JsonValue connectionPropertiesJsonMap;
   for(auto& connectionPropertiesItem : m_connectionProperties)
   {
     connectionPropertiesJsonMap.WithString(ConnectionPropertyKeyMapper::GetNameForConnectionPropertyKey(connectionPropertiesItem.first), connectionPropertiesItem.second);
   }
   payload.WithObject("ConnectionProperties", std::move(connectionPropertiesJsonMap));

  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
