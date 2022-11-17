/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/AppRegistryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

AppRegistryConfiguration::AppRegistryConfiguration() : 
    m_tagQueryConfigurationHasBeenSet(false)
{
}

AppRegistryConfiguration::AppRegistryConfiguration(JsonView jsonValue) : 
    m_tagQueryConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AppRegistryConfiguration& AppRegistryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagQueryConfiguration"))
  {
    m_tagQueryConfiguration = jsonValue.GetObject("tagQueryConfiguration");

    m_tagQueryConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AppRegistryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tagQueryConfigurationHasBeenSet)
  {
   payload.WithObject("tagQueryConfiguration", m_tagQueryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
