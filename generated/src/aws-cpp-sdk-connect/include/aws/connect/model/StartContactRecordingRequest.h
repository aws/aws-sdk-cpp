/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VoiceRecordingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartContactRecordingRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartContactRecordingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartContactRecording"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    StartContactRecordingRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    StartContactRecordingRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    StartContactRecordingRequest& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The person being recorded.</p>
     */
    inline const VoiceRecordingConfiguration& GetVoiceRecordingConfiguration() const { return m_voiceRecordingConfiguration; }
    inline bool VoiceRecordingConfigurationHasBeenSet() const { return m_voiceRecordingConfigurationHasBeenSet; }
    template<typename VoiceRecordingConfigurationT = VoiceRecordingConfiguration>
    void SetVoiceRecordingConfiguration(VoiceRecordingConfigurationT&& value) { m_voiceRecordingConfigurationHasBeenSet = true; m_voiceRecordingConfiguration = std::forward<VoiceRecordingConfigurationT>(value); }
    template<typename VoiceRecordingConfigurationT = VoiceRecordingConfiguration>
    StartContactRecordingRequest& WithVoiceRecordingConfiguration(VoiceRecordingConfigurationT&& value) { SetVoiceRecordingConfiguration(std::forward<VoiceRecordingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    VoiceRecordingConfiguration m_voiceRecordingConfiguration;
    bool m_voiceRecordingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
