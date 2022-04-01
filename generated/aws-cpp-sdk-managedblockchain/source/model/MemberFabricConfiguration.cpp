/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/MemberFabricConfiguration.h>
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

MemberFabricConfiguration::MemberFabricConfiguration() : 
    m_adminUsernameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false)
{
}

MemberFabricConfiguration::MemberFabricConfiguration(JsonView jsonValue) : 
    m_adminUsernameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

MemberFabricConfiguration& MemberFabricConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdminUsername"))
  {
    m_adminUsername = jsonValue.GetString("AdminUsername");

    m_adminUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdminPassword"))
  {
    m_adminPassword = jsonValue.GetString("AdminPassword");

    m_adminPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberFabricConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adminUsernameHasBeenSet)
  {
   payload.WithString("AdminUsername", m_adminUsername);

  }

  if(m_adminPasswordHasBeenSet)
  {
   payload.WithString("AdminPassword", m_adminPassword);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
