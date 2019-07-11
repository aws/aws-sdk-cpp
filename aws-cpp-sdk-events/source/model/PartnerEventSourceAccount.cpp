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

#include <aws/events/model/PartnerEventSourceAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

PartnerEventSourceAccount::PartnerEventSourceAccount() : 
    m_accountHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_state(EventSourceState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

PartnerEventSourceAccount::PartnerEventSourceAccount(JsonView jsonValue) : 
    m_accountHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_state(EventSourceState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

PartnerEventSourceAccount& PartnerEventSourceAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetString("Account");

    m_accountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EventSourceStateMapper::GetEventSourceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue PartnerEventSourceAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EventSourceStateMapper::GetNameForEventSourceState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
