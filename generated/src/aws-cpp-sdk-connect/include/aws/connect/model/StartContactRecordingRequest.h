﻿/**
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
    AWS_CONNECT_API StartContactRecordingRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StartContactRecordingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StartContactRecordingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StartContactRecordingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline StartContactRecordingRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline StartContactRecordingRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline StartContactRecordingRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }
    inline StartContactRecordingRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}
    inline StartContactRecordingRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}
    inline StartContactRecordingRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The person being recorded.</p>
     */
    inline const VoiceRecordingConfiguration& GetVoiceRecordingConfiguration() const{ return m_voiceRecordingConfiguration; }
    inline bool VoiceRecordingConfigurationHasBeenSet() const { return m_voiceRecordingConfigurationHasBeenSet; }
    inline void SetVoiceRecordingConfiguration(const VoiceRecordingConfiguration& value) { m_voiceRecordingConfigurationHasBeenSet = true; m_voiceRecordingConfiguration = value; }
    inline void SetVoiceRecordingConfiguration(VoiceRecordingConfiguration&& value) { m_voiceRecordingConfigurationHasBeenSet = true; m_voiceRecordingConfiguration = std::move(value); }
    inline StartContactRecordingRequest& WithVoiceRecordingConfiguration(const VoiceRecordingConfiguration& value) { SetVoiceRecordingConfiguration(value); return *this;}
    inline StartContactRecordingRequest& WithVoiceRecordingConfiguration(VoiceRecordingConfiguration&& value) { SetVoiceRecordingConfiguration(std::move(value)); return *this;}
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
