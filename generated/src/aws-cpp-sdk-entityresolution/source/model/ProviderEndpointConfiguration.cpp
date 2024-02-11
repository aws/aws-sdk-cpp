/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderEndpointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ProviderEndpointConfiguration::ProviderEndpointConfiguration() : 
    m_marketplaceConfigurationHasBeenSet(false)
{
}

ProviderEndpointConfiguration::ProviderEndpointConfiguration(JsonView jsonValue) : 
    m_marketplaceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderEndpointConfiguration& ProviderEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("marketplaceConfiguration"))
  {
    m_marketplaceConfiguration = jsonValue.GetObject("marketplaceConfiguration");

    m_marketplaceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProviderEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_marketplaceConfigurationHasBeenSet)
  {
   payload.WithObject("marketplaceConfiguration", m_marketplaceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
