/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeStatus.h>
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

VirtualNodeStatus::VirtualNodeStatus() : 
    m_status(VirtualNodeStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VirtualNodeStatus::VirtualNodeStatus(JsonView jsonValue) : 
    m_status(VirtualNodeStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeStatus& VirtualNodeStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VirtualNodeStatusCodeMapper::GetVirtualNodeStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VirtualNodeStatusCodeMapper::GetNameForVirtualNodeStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
