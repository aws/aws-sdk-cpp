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

SecurityGroupMembership::SecurityGroupMembership(const JsonValue& jsonValue) : 
    m_securityGroupIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroupMembership& SecurityGroupMembership::operator =(const JsonValue& jsonValue)
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
