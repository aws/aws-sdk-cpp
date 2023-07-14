/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeServiceProvider.h>
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

VirtualNodeServiceProvider::VirtualNodeServiceProvider() : 
    m_virtualNodeNameHasBeenSet(false)
{
}

VirtualNodeServiceProvider::VirtualNodeServiceProvider(JsonView jsonValue) : 
    m_virtualNodeNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeServiceProvider& VirtualNodeServiceProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualNodeName"))
  {
    m_virtualNodeName = jsonValue.GetString("virtualNodeName");

    m_virtualNodeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeServiceProvider::Jsonize() const
{
  JsonValue payload;

  if(m_virtualNodeNameHasBeenSet)
  {
   payload.WithString("virtualNodeName", m_virtualNodeName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
