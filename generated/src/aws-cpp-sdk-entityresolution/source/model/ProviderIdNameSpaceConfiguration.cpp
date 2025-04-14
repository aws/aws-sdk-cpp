/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderIdNameSpaceConfiguration.h>
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

ProviderIdNameSpaceConfiguration::ProviderIdNameSpaceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProviderIdNameSpaceConfiguration& ProviderIdNameSpaceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerTargetConfigurationDefinition"))
  {
    m_providerTargetConfigurationDefinition = jsonValue.GetObject("providerTargetConfigurationDefinition");
    m_providerTargetConfigurationDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerSourceConfigurationDefinition"))
  {
    m_providerSourceConfigurationDefinition = jsonValue.GetObject("providerSourceConfigurationDefinition");
    m_providerSourceConfigurationDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderIdNameSpaceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_providerTargetConfigurationDefinitionHasBeenSet)
  {
    if(!m_providerTargetConfigurationDefinition.View().IsNull())
    {
       payload.WithObject("providerTargetConfigurationDefinition", JsonValue(m_providerTargetConfigurationDefinition.View()));
    }
  }

  if(m_providerSourceConfigurationDefinitionHasBeenSet)
  {
    if(!m_providerSourceConfigurationDefinition.View().IsNull())
    {
       payload.WithObject("providerSourceConfigurationDefinition", JsonValue(m_providerSourceConfigurationDefinition.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
