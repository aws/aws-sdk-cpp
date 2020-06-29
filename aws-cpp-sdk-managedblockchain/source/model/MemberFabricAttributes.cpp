/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/MemberFabricAttributes.h>
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

MemberFabricAttributes::MemberFabricAttributes() : 
    m_adminUsernameHasBeenSet(false),
    m_caEndpointHasBeenSet(false)
{
}

MemberFabricAttributes::MemberFabricAttributes(JsonView jsonValue) : 
    m_adminUsernameHasBeenSet(false),
    m_caEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

MemberFabricAttributes& MemberFabricAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdminUsername"))
  {
    m_adminUsername = jsonValue.GetString("AdminUsername");

    m_adminUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaEndpoint"))
  {
    m_caEndpoint = jsonValue.GetString("CaEndpoint");

    m_caEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberFabricAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_adminUsernameHasBeenSet)
  {
   payload.WithString("AdminUsername", m_adminUsername);

  }

  if(m_caEndpointHasBeenSet)
  {
   payload.WithString("CaEndpoint", m_caEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
