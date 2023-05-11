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
    AWS_IVSREALTIME_API DisconnectParticipantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisconnectParticipant"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline DisconnectParticipantRequest& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline DisconnectParticipantRequest& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the participant to be disconnected. This is assigned by IVS and
     * returned by <a>CreateParticipantToken</a>.</p>
     */
    inline DisconnectParticipantRequest& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline DisconnectParticipantRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline DisconnectParticipantRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Description of why this participant is being disconnected.</p>
     */
    inline DisconnectParticipantRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline DisconnectParticipantRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline DisconnectParticipantRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the stage to which the participant is attached.</p>
     */
    inline DisconnectParticipantRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}

  private:

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
