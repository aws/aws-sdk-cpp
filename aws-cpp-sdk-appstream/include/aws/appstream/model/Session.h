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

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/SessionState.h>
#include <aws/appstream/model/SessionConnectionState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <aws/appstream/model/NetworkAccessConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a streaming session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Session">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API Session
  {
  public:
    Session();
    Session(Aws::Utils::Json::JsonView jsonValue);
    Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline Session& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline Session& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline Session& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline Session& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline Session& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline Session& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline Session& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The current state of the streaming session.</p>
     */
    inline const SessionState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline void SetState(const SessionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline void SetState(SessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline Session& WithState(const SessionState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline Session& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline const SessionConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline void SetConnectionState(const SessionConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline void SetConnectionState(SessionConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline Session& WithConnectionState(const SessionConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline Session& WithConnectionState(SessionConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline Session& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline Session& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline const Aws::Utils::DateTime& GetMaxExpirationTime() const{ return m_maxExpirationTime; }

    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline bool MaxExpirationTimeHasBeenSet() const { return m_maxExpirationTimeHasBeenSet; }

    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline void SetMaxExpirationTime(const Aws::Utils::DateTime& value) { m_maxExpirationTimeHasBeenSet = true; m_maxExpirationTime = value; }

    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline void SetMaxExpirationTime(Aws::Utils::DateTime&& value) { m_maxExpirationTimeHasBeenSet = true; m_maxExpirationTime = std::move(value); }

    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline Session& WithMaxExpirationTime(const Aws::Utils::DateTime& value) { SetMaxExpirationTime(value); return *this;}

    /**
     * <p>The time when the streaming session is set to expire. This time is based on
     * the <code>MaxUserDurationinSeconds</code> value, which determines the maximum
     * length of time that a streaming session can run. A streaming session might end
     * earlier than the time specified in <code>SessionMaxExpirationTime</code>, when
     * the <code>DisconnectTimeOutInSeconds</code> elapses or the user chooses to end
     * his or her session. If the <code>DisconnectTimeOutInSeconds</code> elapses, or
     * the user chooses to end his or her session, the streaming instance is terminated
     * and the streaming session ends.</p>
     */
    inline Session& WithMaxExpirationTime(Aws::Utils::DateTime&& value) { SetMaxExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline Session& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline Session& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The network details for the streaming session.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const{ return m_networkAccessConfiguration; }

    /**
     * <p>The network details for the streaming session.</p>
     */
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }

    /**
     * <p>The network details for the streaming session.</p>
     */
    inline void SetNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = value; }

    /**
     * <p>The network details for the streaming session.</p>
     */
    inline void SetNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::move(value); }

    /**
     * <p>The network details for the streaming session.</p>
     */
    inline Session& WithNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { SetNetworkAccessConfiguration(value); return *this;}

    /**
     * <p>The network details for the streaming session.</p>
     */
    inline Session& WithNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { SetNetworkAccessConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;

    SessionState m_state;
    bool m_stateHasBeenSet;

    SessionConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_maxExpirationTime;
    bool m_maxExpirationTimeHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;

    NetworkAccessConfiguration m_networkAccessConfiguration;
    bool m_networkAccessConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
