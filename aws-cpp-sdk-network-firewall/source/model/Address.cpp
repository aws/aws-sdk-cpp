/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

Address::Address() : 
    m_addressDefinitionHasBeenSet(false)
{
}

Address::Address(JsonView jsonValue) : 
    m_addressDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressDefinition"))
  {
    m_addressDefinition = jsonValue.GetString("AddressDefinition");

    m_addressDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_addressDefinitionHasBeenSet)
  {
   payload.WithString("AddressDefinition", m_addressDefinition);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
