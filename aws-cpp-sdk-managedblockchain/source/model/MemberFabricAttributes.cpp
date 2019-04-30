/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
