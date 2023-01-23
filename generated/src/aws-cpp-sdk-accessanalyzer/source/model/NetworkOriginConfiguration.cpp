/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/NetworkOriginConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

NetworkOriginConfiguration::NetworkOriginConfiguration() : 
    m_vpcConfigurationHasBeenSet(false),
    m_internetConfigurationHasBeenSet(false)
{
}

NetworkOriginConfiguration::NetworkOriginConfiguration(JsonView jsonValue) : 
    m_vpcConfigurationHasBeenSet(false),
    m_internetConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkOriginConfiguration& NetworkOriginConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("internetConfiguration"))
  {
    m_internetConfiguration = jsonValue.GetObject("internetConfiguration");

    m_internetConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkOriginConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_internetConfigurationHasBeenSet)
  {
   payload.WithObject("internetConfiguration", m_internetConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
