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
    AWS_APPSTREAM_API Session() = default;
    AWS_APPSTREAM_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the streaming session.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Session& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    Session& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack for the streaming session.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    Session& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet for the streaming session.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    Session& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the streaming session.</p>
     */
    inline SessionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SessionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Session& WithState(SessionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user is connected to the streaming session.</p>
     */
    inline SessionConnectionState GetConnectionState() const { return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(SessionConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline Session& WithConnectionState(SessionConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a streaming instance is dedicated for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Session& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetMaxExpirationTime() const { return m_maxExpirationTime; }
    inline bool MaxExpirationTimeHasBeenSet() const { return m_maxExpirationTimeHasBeenSet; }
    template<typename MaxExpirationTimeT = Aws::Utils::DateTime>
    void SetMaxExpirationTime(MaxExpirationTimeT&& value) { m_maxExpirationTimeHasBeenSet = true; m_maxExpirationTime = std::forward<MaxExpirationTimeT>(value); }
    template<typename MaxExpirationTimeT = Aws::Utils::DateTime>
    Session& WithMaxExpirationTime(MaxExpirationTimeT&& value) { SetMaxExpirationTime(std::forward<MaxExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method. The user is authenticated using a streaming URL
     * (<code>API</code>) or SAML 2.0 federation (<code>SAML</code>).</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline Session& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network details for the streaming session.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const { return m_networkAccessConfiguration; }
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }
    template<typename NetworkAccessConfigurationT = NetworkAccessConfiguration>
    void SetNetworkAccessConfiguration(NetworkAccessConfigurationT&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::forward<NetworkAccessConfigurationT>(value); }
    template<typename NetworkAccessConfigurationT = NetworkAccessConfiguration>
    Session& WithNetworkAccessConfiguration(NetworkAccessConfigurationT&& value) { SetNetworkAccessConfiguration(std::forward<NetworkAccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the instance hosting the session.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Session& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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

    SessionState m_state{SessionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    SessionConnectionState m_connectionState{SessionConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_maxExpirationTime{};
    bool m_maxExpirationTimeHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessConfiguration;
    bool m_networkAccessConfigurationHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
