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
  class GetParticipantRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API GetParticipantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParticipant"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }
    inline GetParticipantRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline GetParticipantRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline GetParticipantRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of a session within the stage.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline GetParticipantRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetParticipantRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetParticipantRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline GetParticipantRequest& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline GetParticipantRequest& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline GetParticipantRequest& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}
  private:

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
