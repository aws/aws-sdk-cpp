/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class DisconnectParticipantRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API DisconnectParticipantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisconnectParticipant"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline const Aws::String& GetStageArn() const { return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    template<typename StageArnT = Aws::String>
    void SetStageArn(StageArnT&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::forward<StageArnT>(value); }
    template<typename StageArnT = Aws::String>
    DisconnectParticipantRequest& WithStageArn(StageArnT&& value) { SetStageArn(std::forward<StageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the participant to be disconnected. IVS assigns this; it is
     * returned by <a>CreateParticipantToken</a> (for streams using WebRTC ingest) or
     * <a>CreateIngestConfiguration</a> (for streams using RTMP ingest).</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    DisconnectParticipantRequest& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DisconnectParticipantRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
