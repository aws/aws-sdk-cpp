/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoveryServerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

DiscoveryServerConfiguration::DiscoveryServerConfiguration() : 
    m_serverHostnameHasBeenSet(false),
    m_serverPort(0),
    m_serverPortHasBeenSet(false)
{
}

DiscoveryServerConfiguration::DiscoveryServerConfiguration(JsonView jsonValue) : 
    m_serverHostnameHasBeenSet(false),
    m_serverPort(0),
    m_serverPortHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoveryServerConfiguration& DiscoveryServerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerHostname"))
  {
    m_serverHostname = jsonValue.GetString("ServerHostname");

    m_serverHostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerPort"))
  {
    m_serverPort = jsonValue.GetInteger("ServerPort");

    m_serverPortHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoveryServerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverHostnameHasBeenSet)
  {
   payload.WithString("ServerHostname", m_serverHostname);

  }

  if(m_serverPortHasBeenSet)
  {
   payload.WithInteger("ServerPort", m_serverPort);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
