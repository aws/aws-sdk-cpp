/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualServiceStatus.h>
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

VirtualServiceStatus::VirtualServiceStatus() : 
    m_status(VirtualServiceStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VirtualServiceStatus::VirtualServiceStatus(JsonView jsonValue) : 
    m_status(VirtualServiceStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualServiceStatus& VirtualServiceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VirtualServiceStatusCodeMapper::GetVirtualServiceStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualServiceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VirtualServiceStatusCodeMapper::GetNameForVirtualServiceStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
