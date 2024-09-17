/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/AutoParticipantRecordingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class UpdateStageRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API UpdateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStage"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN of the stage to be updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateStageRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateStageRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateStageRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the stage to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateStageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateStageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateStageRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration object for individual participant recording, to attach to the
     * stage. Note that this cannot be updated while recording is active.</p>
     */
    inline const AutoParticipantRecordingConfiguration& GetAutoParticipantRecordingConfiguration() const{ return m_autoParticipantRecordingConfiguration; }
    inline bool AutoParticipantRecordingConfigurationHasBeenSet() const { return m_autoParticipantRecordingConfigurationHasBeenSet; }
    inline void SetAutoParticipantRecordingConfiguration(const AutoParticipantRecordingConfiguration& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = value; }
    inline void SetAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfiguration&& value) { m_autoParticipantRecordingConfigurationHasBeenSet = true; m_autoParticipantRecordingConfiguration = std::move(value); }
    inline UpdateStageRequest& WithAutoParticipantRecordingConfiguration(const AutoParticipantRecordingConfiguration& value) { SetAutoParticipantRecordingConfiguration(value); return *this;}
    inline UpdateStageRequest& WithAutoParticipantRecordingConfiguration(AutoParticipantRecordingConfiguration&& value) { SetAutoParticipantRecordingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AutoParticipantRecordingConfiguration m_autoParticipantRecordingConfiguration;
    bool m_autoParticipantRecordingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
