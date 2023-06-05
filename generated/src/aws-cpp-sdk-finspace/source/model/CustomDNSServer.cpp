/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CustomDNSServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

CustomDNSServer::CustomDNSServer() : 
    m_customDNSServerNameHasBeenSet(false),
    m_customDNSServerIPHasBeenSet(false)
{
}

CustomDNSServer::CustomDNSServer(JsonView jsonValue) : 
    m_customDNSServerNameHasBeenSet(false),
    m_customDNSServerIPHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDNSServer& CustomDNSServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customDNSServerName"))
  {
    m_customDNSServerName = jsonValue.GetString("customDNSServerName");

    m_customDNSServerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDNSServerIP"))
  {
    m_customDNSServerIP = jsonValue.GetString("customDNSServerIP");

    m_customDNSServerIPHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDNSServer::Jsonize() const
{
  JsonValue payload;

  if(m_customDNSServerNameHasBeenSet)
  {
   payload.WithString("customDNSServerName", m_customDNSServerName);

  }

  if(m_customDNSServerIPHasBeenSet)
  {
   payload.WithString("customDNSServerIP", m_customDNSServerIP);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
