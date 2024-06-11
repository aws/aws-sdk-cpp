/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Session
  {
  public:
    AWS_APPSTREAM_API Session();
    AWS_APPSTREAM_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Session& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline Session& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline Session& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline Session& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline Session& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline Session& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline Session& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }
    inline Session& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}
    inline Session& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}
    inline Session& WithFleetName(const char* value) { SetFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the streaming session.</p>
     */
    inline const SessionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SessionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Session& WithState(const SessionState& value) { SetState(value); return *this;}
    inline Session& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline const SessionConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const SessionConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(SessionConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline Session& WithConnectionState(const SessionConnectionState& value) { SetConnectionState(value); return *this;}
    inline Session& WithConnectionState(SessionConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Session& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Session& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool MaxExpirationTimeHasBeenSet() const { return m_maxExpirationTimeHasBeenSet; }
    inline void SetMaxExpirationTime(const Aws::Utils::DateTime& value) { m_maxExpirationTimeHasBeenSet = true; m_maxExpirationTime = value; }
    inline void SetMaxExpirationTime(Aws::Utils::DateTime&& value) { m_maxExpirationTimeHasBeenSet = true; m_maxExpirationTime = std::move(value); }
    inline Session& WithMaxExpirationTime(const Aws::Utils::DateTime& value) { SetMaxExpirationTime(value); return *this;}
    inline Session& WithMaxExpirationTime(Aws::Utils::DateTime&& value) { SetMaxExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline Session& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline Session& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network details for the streaming session.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const{ return m_networkAccessConfiguration; }
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }
    inline void SetNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = value; }
    inline void SetNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::move(value); }
    inline Session& WithNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { SetNetworkAccessConfiguration(value); return *this;}
    inline Session& WithNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { SetNetworkAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the instance hosting the session.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Session& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Session& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Session& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    SessionState m_state;
    bool m_stateHasBeenSet = false;

    SessionConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_maxExpirationTime;
    bool m_maxExpirationTimeHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessConfiguration;
    bool m_networkAccessConfigurationHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
