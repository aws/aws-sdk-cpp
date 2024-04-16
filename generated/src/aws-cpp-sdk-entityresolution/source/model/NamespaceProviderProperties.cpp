/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/NamespaceProviderProperties.h>
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

NamespaceProviderProperties::NamespaceProviderProperties() : 
    m_providerConfigurationHasBeenSet(false),
    m_providerServiceArnHasBeenSet(false)
{
}

NamespaceProviderProperties::NamespaceProviderProperties(JsonView jsonValue) : 
    m_providerConfigurationHasBeenSet(false),
    m_providerServiceArnHasBeenSet(false)
{
  *this = jsonValue;
}

NamespaceProviderProperties& NamespaceProviderProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerConfiguration"))
  {
    m_providerConfiguration = jsonValue.GetObject("providerConfiguration");

    m_providerConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerServiceArn"))
  {
    m_providerServiceArn = jsonValue.GetString("providerServiceArn");

    m_providerServiceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NamespaceProviderProperties::Jsonize() const
{
  JsonValue payload;

  if(m_providerConfigurationHasBeenSet)
  {
    if(!m_providerConfiguration.View().IsNull())
    {
       payload.WithObject("providerConfiguration", JsonValue(m_providerConfiguration.View()));
    }
  }

  if(m_providerServiceArnHasBeenSet)
  {
   payload.WithString("providerServiceArn", m_providerServiceArn);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
