/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/ScanDirection.h>
#include <aws/connectparticipant/model/SortKey.h>
#include <aws/connectparticipant/model/StartPosition.h>
#include <utility>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class GetTranscriptRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API GetTranscriptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTranscript"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline GetTranscriptRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline GetTranscriptRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline GetTranscriptRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline GetTranscriptRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline const ScanDirection& GetScanDirection() const{ return m_scanDirection; }

    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline bool ScanDirectionHasBeenSet() const { return m_scanDirectionHasBeenSet; }

    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline void SetScanDirection(const ScanDirection& value) { m_scanDirectionHasBeenSet = true; m_scanDirection = value; }

    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline void SetScanDirection(ScanDirection&& value) { m_scanDirectionHasBeenSet = true; m_scanDirection = std::move(value); }

    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline GetTranscriptRequest& WithScanDirection(const ScanDirection& value) { SetScanDirection(value); return *this;}

    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline GetTranscriptRequest& WithScanDirection(ScanDirection&& value) { SetScanDirection(std::move(value)); return *this;}


    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline const SortKey& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline void SetSortOrder(const SortKey& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline void SetSortOrder(SortKey&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline GetTranscriptRequest& WithSortOrder(const SortKey& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline GetTranscriptRequest& WithSortOrder(SortKey&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A filtering option for where to start.</p>
     */
    inline const StartPosition& GetStartPosition() const{ return m_startPosition; }

    /**
     * <p>A filtering option for where to start.</p>
     */
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }

    /**
     * <p>A filtering option for where to start.</p>
     */
    inline void SetStartPosition(const StartPosition& value) { m_startPositionHasBeenSet = true; m_startPosition = value; }

    /**
     * <p>A filtering option for where to start.</p>
     */
    inline void SetStartPosition(StartPosition&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::move(value); }

    /**
     * <p>A filtering option for where to start.</p>
     */
    inline GetTranscriptRequest& WithStartPosition(const StartPosition& value) { SetStartPosition(value); return *this;}

    /**
     * <p>A filtering option for where to start.</p>
     */
    inline GetTranscriptRequest& WithStartPosition(StartPosition&& value) { SetStartPosition(std::move(value)); return *this;}


    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline GetTranscriptRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline GetTranscriptRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline GetTranscriptRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScanDirection m_scanDirection;
    bool m_scanDirectionHasBeenSet = false;

    SortKey m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    StartPosition m_startPosition;
    bool m_startPositionHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
