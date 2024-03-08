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
  class ListParticipantEventsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListParticipantEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListParticipantEvents"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline ListParticipantEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first participant event to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline ListParticipantEventsRequest& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline ListParticipantEventsRequest& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for this participant. This is assigned by IVS and returned
     * by <a>CreateParticipantToken</a>.</p>
     */
    inline ListParticipantEventsRequest& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>ID of a session within the stage.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline ListParticipantEventsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline ListParticipantEventsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>ID of a session within the stage.</p>
     */
    inline ListParticipantEventsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>Stage ARN.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline ListParticipantEventsRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListParticipantEventsRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListParticipantEventsRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
