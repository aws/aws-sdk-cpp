/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/IngestProtocol.h>
#include <aws/ivs-realtime/model/IngestConfigurationState.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Summary information about an IngestConfiguration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/IngestConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class IngestConfigurationSummary
  {
  public:
    AWS_IVSREALTIME_API IngestConfigurationSummary();
    AWS_IVSREALTIME_API IngestConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API IngestConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Ingest name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IngestConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IngestConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IngestConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingest configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IngestConfigurationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IngestConfigurationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IngestConfigurationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the user employs for broadcasting.</p>
     */
    inline const IngestProtocol& GetIngestProtocol() const{ return m_ingestProtocol; }
    inline bool IngestProtocolHasBeenSet() const { return m_ingestProtocolHasBeenSet; }
    inline void SetIngestProtocol(const IngestProtocol& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = value; }
    inline void SetIngestProtocol(IngestProtocol&& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = std::move(value); }
    inline IngestConfigurationSummary& WithIngestProtocol(const IngestProtocol& value) { SetIngestProtocol(value); return *this;}
    inline IngestConfigurationSummary& WithIngestProtocol(IngestProtocol&& value) { SetIngestProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage with which the IngestConfiguration is associated.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }
    inline IngestConfigurationSummary& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline IngestConfigurationSummary& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline IngestConfigurationSummary& WithStageArn(const char* value) { SetStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the participant within the stage.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline IngestConfigurationSummary& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline IngestConfigurationSummary& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline IngestConfigurationSummary& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the ingest configuration. It is <code>ACTIVE</code> if a publisher
     * currently is publishing to the stage associated with the ingest
     * configuration.</p>
     */
    inline const IngestConfigurationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IngestConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IngestConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IngestConfigurationSummary& WithState(const IngestConfigurationState& value) { SetState(value); return *this;}
    inline IngestConfigurationSummary& WithState(IngestConfigurationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-assigned name to help identify the participant using the
     * IngestConfiguration; this can be used to link a participant to a user in the
     * customer’s own systems. This can be any UTF-8 encoded text. <i>This field is
     * exposed to all stage participants and should not be used for personally
     * identifying, confidential, or sensitive information.</i> </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline IngestConfigurationSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline IngestConfigurationSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline IngestConfigurationSummary& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    IngestProtocol m_ingestProtocol;
    bool m_ingestProtocolHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    IngestConfigurationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
