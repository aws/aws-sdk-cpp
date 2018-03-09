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

#include <aws/mq/model/UserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

UserSummary::UserSummary() : 
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

UserSummary::UserSummary(const JsonValue& jsonValue) : 
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

UserSummary& UserSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("pendingChange"))
  {
    m_pendingChange = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("pendingChange"));

    m_pendingChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue UserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pendingChangeHasBeenSet)
  {
   payload.WithString("pendingChange", ChangeTypeMapper::GetNameForChangeType(m_pendingChange));
  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
