/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantState.h>
#include <aws/ivs-realtime/model/ParticipantRecordingFilterByRecordingState.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class ListParticipantsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListParticipantsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListParticipants"; }

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
    inline ListParticipantsRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline ListParticipantsRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline ListParticipantsRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the session within the stage.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline ListParticipantsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ListParticipantsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ListParticipantsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>,
     * <code>filterByState</code>, or <code>filterByRecordingState</code> can be
     * provided per request. A <code>userId</code> is a customer-assigned name to help
     * identify the token; this can be used to link a participant to a user in the
     * customer’s own systems.</p>
     */
    inline const Aws::String& GetFilterByUserId() const{ return m_filterByUserId; }
    inline bool FilterByUserIdHasBeenSet() const { return m_filterByUserIdHasBeenSet; }
    inline void SetFilterByUserId(const Aws::String& value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId = value; }
    inline void SetFilterByUserId(Aws::String&& value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId = std::move(value); }
    inline void SetFilterByUserId(const char* value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId.assign(value); }
    inline ListParticipantsRequest& WithFilterByUserId(const Aws::String& value) { SetFilterByUserId(value); return *this;}
    inline ListParticipantsRequest& WithFilterByUserId(Aws::String&& value) { SetFilterByUserId(std::move(value)); return *this;}
    inline ListParticipantsRequest& WithFilterByUserId(const char* value) { SetFilterByUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response list to only show participants who published during the
     * stage session. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, <code>filterByState</code>, or
     * <code>filterByRecordingState</code> can be provided per request.</p>
     */
    inline bool GetFilterByPublished() const{ return m_filterByPublished; }
    inline bool FilterByPublishedHasBeenSet() const { return m_filterByPublishedHasBeenSet; }
    inline void SetFilterByPublished(bool value) { m_filterByPublishedHasBeenSet = true; m_filterByPublished = value; }
    inline ListParticipantsRequest& WithFilterByPublished(bool value) { SetFilterByPublished(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>,
     * <code>filterByState</code>, or <code>filterByRecordingState</code> can be
     * provided per request.</p>
     */
    inline const ParticipantState& GetFilterByState() const{ return m_filterByState; }
    inline bool FilterByStateHasBeenSet() const { return m_filterByStateHasBeenSet; }
    inline void SetFilterByState(const ParticipantState& value) { m_filterByStateHasBeenSet = true; m_filterByState = value; }
    inline void SetFilterByState(ParticipantState&& value) { m_filterByStateHasBeenSet = true; m_filterByState = std::move(value); }
    inline ListParticipantsRequest& WithFilterByState(const ParticipantState& value) { SetFilterByState(value); return *this;}
    inline ListParticipantsRequest& WithFilterByState(ParticipantState&& value) { SetFilterByState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListParticipantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListParticipantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListParticipantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListParticipantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response list to only show participants with the specified
     * recording state. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, <code>filterByState</code>, or
     * <code>filterByRecordingState</code> can be provided per request.</p>
     */
    inline const ParticipantRecordingFilterByRecordingState& GetFilterByRecordingState() const{ return m_filterByRecordingState; }
    inline bool FilterByRecordingStateHasBeenSet() const { return m_filterByRecordingStateHasBeenSet; }
    inline void SetFilterByRecordingState(const ParticipantRecordingFilterByRecordingState& value) { m_filterByRecordingStateHasBeenSet = true; m_filterByRecordingState = value; }
    inline void SetFilterByRecordingState(ParticipantRecordingFilterByRecordingState&& value) { m_filterByRecordingStateHasBeenSet = true; m_filterByRecordingState = std::move(value); }
    inline ListParticipantsRequest& WithFilterByRecordingState(const ParticipantRecordingFilterByRecordingState& value) { SetFilterByRecordingState(value); return *this;}
    inline ListParticipantsRequest& WithFilterByRecordingState(ParticipantRecordingFilterByRecordingState&& value) { SetFilterByRecordingState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_filterByUserId;
    bool m_filterByUserIdHasBeenSet = false;

    bool m_filterByPublished;
    bool m_filterByPublishedHasBeenSet = false;

    ParticipantState m_filterByState;
    bool m_filterByStateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ParticipantRecordingFilterByRecordingState m_filterByRecordingState;
    bool m_filterByRecordingStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
