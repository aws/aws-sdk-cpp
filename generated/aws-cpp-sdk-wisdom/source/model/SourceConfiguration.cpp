/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/SourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

SourceConfiguration::SourceConfiguration() : 
    m_appIntegrationsHasBeenSet(false)
{
}

SourceConfiguration::SourceConfiguration(JsonView jsonValue) : 
    m_appIntegrationsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfiguration& SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appIntegrations"))
  {
    m_appIntegrations = jsonValue.GetObject("appIntegrations");

    m_appIntegrationsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_appIntegrationsHasBeenSet)
  {
   payload.WithObject("appIntegrations", m_appIntegrations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
