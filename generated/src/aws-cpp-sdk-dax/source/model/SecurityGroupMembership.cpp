/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/SecurityGroupMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

SecurityGroupMembership::SecurityGroupMembership() : 
    m_securityGroupIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

SecurityGroupMembership::SecurityGroupMembership(JsonView jsonValue) : 
    m_securityGroupIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroupMembership& SecurityGroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityGroupIdentifier"))
  {
    m_securityGroupIdentifier = jsonValue.GetString("SecurityGroupIdentifier");

    m_securityGroupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityGroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdentifierHasBeenSet)
  {
   payload.WithString("SecurityGroupIdentifier", m_securityGroupIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
