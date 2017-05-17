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

#include <aws/appstream/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Session::Session() : 
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_state(SessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
}

Session::Session(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_state(SessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackName"))
  {
    m_stackName = jsonValue.GetString("StackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetName"))
  {
    m_fleetName = jsonValue.GetString("FleetName");

    m_fleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = SessionStateMapper::GetSessionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", SessionStateMapper::GetNameForSessionState(m_state));
  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws