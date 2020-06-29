/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeFrameworkAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeFrameworkAttributes::NodeFrameworkAttributes() : 
    m_fabricHasBeenSet(false)
{
}

NodeFrameworkAttributes::NodeFrameworkAttributes(JsonView jsonValue) : 
    m_fabricHasBeenSet(false)
{
  *this = jsonValue;
}

NodeFrameworkAttributes& NodeFrameworkAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fabric"))
  {
    m_fabric = jsonValue.GetObject("Fabric");

    m_fabricHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeFrameworkAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_fabricHasBeenSet)
  {
   payload.WithObject("Fabric", m_fabric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
