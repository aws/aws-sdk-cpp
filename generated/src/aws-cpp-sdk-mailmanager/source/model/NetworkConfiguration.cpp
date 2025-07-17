/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/NetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkConfiguration& NetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublicNetworkConfiguration"))
  {
    m_publicNetworkConfiguration = jsonValue.GetObject("PublicNetworkConfiguration");
    m_publicNetworkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrivateNetworkConfiguration"))
  {
    m_privateNetworkConfiguration = jsonValue.GetObject("PrivateNetworkConfiguration");
    m_privateNetworkConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_publicNetworkConfigurationHasBeenSet)
  {
   payload.WithObject("PublicNetworkConfiguration", m_publicNetworkConfiguration.Jsonize());

  }

  if(m_privateNetworkConfigurationHasBeenSet)
  {
   payload.WithObject("PrivateNetworkConfiguration", m_privateNetworkConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
