/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterStatus.h>
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

VirtualRouterStatus::VirtualRouterStatus() : 
    m_status(VirtualRouterStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VirtualRouterStatus::VirtualRouterStatus(JsonView jsonValue) : 
    m_status(VirtualRouterStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterStatus& VirtualRouterStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VirtualRouterStatusCodeMapper::GetVirtualRouterStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VirtualRouterStatusCodeMapper::GetNameForVirtualRouterStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
