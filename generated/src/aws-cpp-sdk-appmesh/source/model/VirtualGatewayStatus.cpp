/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayStatus.h>
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

VirtualGatewayStatus::VirtualGatewayStatus() : 
    m_status(VirtualGatewayStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VirtualGatewayStatus::VirtualGatewayStatus(JsonView jsonValue) : 
    m_status(VirtualGatewayStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayStatus& VirtualGatewayStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VirtualGatewayStatusCodeMapper::GetVirtualGatewayStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VirtualGatewayStatusCodeMapper::GetNameForVirtualGatewayStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
