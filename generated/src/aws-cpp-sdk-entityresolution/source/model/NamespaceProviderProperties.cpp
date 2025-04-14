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

NamespaceProviderProperties::NamespaceProviderProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

NamespaceProviderProperties& NamespaceProviderProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerServiceArn"))
  {
    m_providerServiceArn = jsonValue.GetString("providerServiceArn");
    m_providerServiceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerConfiguration"))
  {
    m_providerConfiguration = jsonValue.GetObject("providerConfiguration");
    m_providerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NamespaceProviderProperties::Jsonize() const
{
  JsonValue payload;

  if(m_providerServiceArnHasBeenSet)
  {
   payload.WithString("providerServiceArn", m_providerServiceArn);

  }

  if(m_providerConfigurationHasBeenSet)
  {
    if(!m_providerConfiguration.View().IsNull())
    {
       payload.WithObject("providerConfiguration", JsonValue(m_providerConfiguration.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
