/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/ivs-realtime/model/ParticipantState.h>
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


    /**
     * <p>Filters the response list to only show participants who published during the
     * stage session. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, or <code>filterByState</code> can be provided
     * per request.</p>
     */
    inline bool GetFilterByPublished() const{ return m_filterByPublished; }

    /**
     * <p>Filters the response list to only show participants who published during the
     * stage session. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, or <code>filterByState</code> can be provided
     * per request.</p>
     */
    inline bool FilterByPublishedHasBeenSet() const { return m_filterByPublishedHasBeenSet; }

    /**
     * <p>Filters the response list to only show participants who published during the
     * stage session. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, or <code>filterByState</code> can be provided
     * per request.</p>
     */
    inline void SetFilterByPublished(bool value) { m_filterByPublishedHasBeenSet = true; m_filterByPublished = value; }

    /**
     * <p>Filters the response list to only show participants who published during the
     * stage session. Only one of <code>filterByUserId</code>,
     * <code>filterByPublished</code>, or <code>filterByState</code> can be provided
     * per request.</p>
     */
    inline ListParticipantsRequest& WithFilterByPublished(bool value) { SetFilterByPublished(value); return *this;}


    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline const ParticipantState& GetFilterByState() const{ return m_filterByState; }

    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline bool FilterByStateHasBeenSet() const { return m_filterByStateHasBeenSet; }

    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline void SetFilterByState(const ParticipantState& value) { m_filterByStateHasBeenSet = true; m_filterByState = value; }

    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline void SetFilterByState(ParticipantState&& value) { m_filterByStateHasBeenSet = true; m_filterByState = std::move(value); }

    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline ListParticipantsRequest& WithFilterByState(const ParticipantState& value) { SetFilterByState(value); return *this;}

    /**
     * <p>Filters the response list to only show participants in the specified state.
     * Only one of <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request.</p>
     */
    inline ListParticipantsRequest& WithFilterByState(ParticipantState&& value) { SetFilterByState(std::move(value)); return *this;}


    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline const Aws::String& GetFilterByUserId() const{ return m_filterByUserId; }

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline bool FilterByUserIdHasBeenSet() const { return m_filterByUserIdHasBeenSet; }

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline void SetFilterByUserId(const Aws::String& value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId = value; }

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline void SetFilterByUserId(Aws::String&& value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId = std::move(value); }

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline void SetFilterByUserId(const char* value) { m_filterByUserIdHasBeenSet = true; m_filterByUserId.assign(value); }

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline ListParticipantsRequest& WithFilterByUserId(const Aws::String& value) { SetFilterByUserId(value); return *this;}

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline ListParticipantsRequest& WithFilterByUserId(Aws::String&& value) { SetFilterByUserId(std::move(value)); return *this;}

    /**
     * <p>Filters the response list to match the specified user ID. Only one of
     * <code>filterByUserId</code>, <code>filterByPublished</code>, or
     * <code>filterByState</code> can be provided per request. A <code>userId</code> is
     * a customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems.</p>
     */
    inline ListParticipantsRequest& WithFilterByUserId(const char* value) { SetFilterByUserId(value); return *this;}


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
    inline ListParticipantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first participant to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListParticipantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>ID of the session within the stage.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline ListParticipantsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline ListParticipantsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline ListParticipantsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


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
    inline ListParticipantsRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListParticipantsRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListParticipantsRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}

  private:

    bool m_filterByPublished;
    bool m_filterByPublishedHasBeenSet = false;

    ParticipantState m_filterByState;
    bool m_filterByStateHasBeenSet = false;

    Aws::String m_filterByUserId;
    bool m_filterByUserIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
