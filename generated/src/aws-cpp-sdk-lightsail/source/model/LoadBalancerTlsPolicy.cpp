/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsPolicy.h>
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

LoadBalancerTlsPolicy::LoadBalancerTlsPolicy() : 
    m_nameHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_ciphersHasBeenSet(false)
{
}

LoadBalancerTlsPolicy::LoadBalancerTlsPolicy(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_ciphersHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsPolicy& LoadBalancerTlsPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefault"))
  {
    m_isDefault = jsonValue.GetBool("isDefault");

    m_isDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(protocolsJsonList[protocolsIndex].AsString());
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ciphers"))
  {
    Aws::Utils::Array<JsonView> ciphersJsonList = jsonValue.GetArray("ciphers");
    for(unsigned ciphersIndex = 0; ciphersIndex < ciphersJsonList.GetLength(); ++ciphersIndex)
    {
      m_ciphers.push_back(ciphersJsonList[ciphersIndex].AsString());
    }
    m_ciphersHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("isDefault", m_isDefault);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(m_protocols[protocolsIndex]);
   }
   payload.WithArray("protocols", std::move(protocolsJsonList));

  }

  if(m_ciphersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ciphersJsonList(m_ciphers.size());
   for(unsigned ciphersIndex = 0; ciphersIndex < ciphersJsonList.GetLength(); ++ciphersIndex)
   {
     ciphersJsonList[ciphersIndex].AsString(m_ciphers[ciphersIndex]);
   }
   payload.WithArray("ciphers", std::move(ciphersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
