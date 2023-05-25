/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/App.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

App::App() : 
    m_appNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

App::App(JsonView jsonValue) : 
    m_appNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

App& App::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppName"))
  {
    m_appName = jsonValue.GetString("AppName");

    m_appNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInt64("Port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue App::Jsonize() const
{
  JsonValue payload;

  if(m_appNameHasBeenSet)
  {
   payload.WithString("AppName", m_appName);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInt64("Port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
