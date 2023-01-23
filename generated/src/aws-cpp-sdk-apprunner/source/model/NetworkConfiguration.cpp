/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/NetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

NetworkConfiguration::NetworkConfiguration() : 
    m_egressConfigurationHasBeenSet(false),
    m_ingressConfigurationHasBeenSet(false)
{
}

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue) : 
    m_egressConfigurationHasBeenSet(false),
    m_ingressConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkConfiguration& NetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EgressConfiguration"))
  {
    m_egressConfiguration = jsonValue.GetObject("EgressConfiguration");

    m_egressConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngressConfiguration"))
  {
    m_ingressConfiguration = jsonValue.GetObject("IngressConfiguration");

    m_ingressConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_egressConfigurationHasBeenSet)
  {
   payload.WithObject("EgressConfiguration", m_egressConfiguration.Jsonize());

  }

  if(m_ingressConfigurationHasBeenSet)
  {
   payload.WithObject("IngressConfiguration", m_ingressConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
