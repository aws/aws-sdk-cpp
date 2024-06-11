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


    ///@{
    /**
     * <p>The contactId from the current contact chain for which transcript is
     * needed.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline GetTranscriptRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline GetTranscriptRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline GetTranscriptRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTranscriptRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetTranscriptRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTranscriptRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTranscriptRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline const ScanDirection& GetScanDirection() const{ return m_scanDirection; }
    inline bool ScanDirectionHasBeenSet() const { return m_scanDirectionHasBeenSet; }
    inline void SetScanDirection(const ScanDirection& value) { m_scanDirectionHasBeenSet = true; m_scanDirection = value; }
    inline void SetScanDirection(ScanDirection&& value) { m_scanDirectionHasBeenSet = true; m_scanDirection = std::move(value); }
    inline GetTranscriptRequest& WithScanDirection(const ScanDirection& value) { SetScanDirection(value); return *this;}
    inline GetTranscriptRequest& WithScanDirection(ScanDirection&& value) { SetScanDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline const SortKey& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortKey& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortKey&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline GetTranscriptRequest& WithSortOrder(const SortKey& value) { SetSortOrder(value); return *this;}
    inline GetTranscriptRequest& WithSortOrder(SortKey&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filtering option for where to start.</p>
     */
    inline const StartPosition& GetStartPosition() const{ return m_startPosition; }
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }
    inline void SetStartPosition(const StartPosition& value) { m_startPositionHasBeenSet = true; m_startPosition = value; }
    inline void SetStartPosition(StartPosition&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::move(value); }
    inline GetTranscriptRequest& WithStartPosition(const StartPosition& value) { SetStartPosition(value); return *this;}
    inline GetTranscriptRequest& WithStartPosition(StartPosition&& value) { SetStartPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }
    inline GetTranscriptRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}
    inline GetTranscriptRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}
    inline GetTranscriptRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}
    ///@}
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
