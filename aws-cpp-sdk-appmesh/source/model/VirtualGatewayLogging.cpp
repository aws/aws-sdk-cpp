/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayLogging.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualGatewayLogging::VirtualGatewayLogging() : 
    m_accessLogHasBeenSet(false)
{
}

VirtualGatewayLogging::VirtualGatewayLogging(JsonView jsonValue) : 
    m_accessLogHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayLogging& VirtualGatewayLogging::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessLog"))
  {
    m_accessLog = jsonValue.GetObject("accessLog");

    m_accessLogHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayLogging::Jsonize() const
{
  JsonValue payload;

  if(m_accessLogHasBeenSet)
  {
   payload.WithObject("accessLog", m_accessLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
