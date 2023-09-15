/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_connectionState(SessionConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_maxExpirationTimeHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_state(SessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_connectionState(SessionConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_maxExpirationTimeHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = SessionConnectionStateMapper::GetSessionConnectionStateForName(jsonValue.GetString("ConnectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxExpirationTime"))
  {
    m_maxExpirationTime = jsonValue.GetDouble("MaxExpirationTime");

    m_maxExpirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAccessConfiguration"))
  {
    m_networkAccessConfiguration = jsonValue.GetObject("NetworkAccessConfiguration");

    m_networkAccessConfigurationHasBeenSet = true;
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

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("ConnectionState", SessionConnectionStateMapper::GetNameForSessionConnectionState(m_connectionState));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_maxExpirationTimeHasBeenSet)
  {
   payload.WithDouble("MaxExpirationTime", m_maxExpirationTime.SecondsWithMSPrecision());
  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_networkAccessConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkAccessConfiguration", m_networkAccessConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
