/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TlsContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TlsContext::TlsContext() : 
    m_serverNameHasBeenSet(false)
{
}

TlsContext::TlsContext(JsonView jsonValue) : 
    m_serverNameHasBeenSet(false)
{
  *this = jsonValue;
}

TlsContext& TlsContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverName"))
  {
    m_serverName = jsonValue.GetString("serverName");

    m_serverNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsContext::Jsonize() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("serverName", m_serverName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
