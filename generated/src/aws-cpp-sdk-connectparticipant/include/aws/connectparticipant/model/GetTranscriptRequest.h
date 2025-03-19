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
    AWS_CONNECTPARTICIPANT_API GetTranscriptRequest() = default;

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
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    GetTranscriptRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the page. Default: 10. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTranscriptRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTranscriptRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction from StartPosition from which to retrieve message. Default:
     * BACKWARD when no StartPosition is provided, FORWARD with StartPosition. </p>
     */
    inline ScanDirection GetScanDirection() const { return m_scanDirection; }
    inline bool ScanDirectionHasBeenSet() const { return m_scanDirectionHasBeenSet; }
    inline void SetScanDirection(ScanDirection value) { m_scanDirectionHasBeenSet = true; m_scanDirection = value; }
    inline GetTranscriptRequest& WithScanDirection(ScanDirection value) { SetScanDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the records. Default: DESCENDING.</p>
     */
    inline SortKey GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortKey value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline GetTranscriptRequest& WithSortOrder(SortKey value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filtering option for where to start.</p>
     */
    inline const StartPosition& GetStartPosition() const { return m_startPosition; }
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }
    template<typename StartPositionT = StartPosition>
    void SetStartPosition(StartPositionT&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::forward<StartPositionT>(value); }
    template<typename StartPositionT = StartPosition>
    GetTranscriptRequest& WithStartPosition(StartPositionT&& value) { SetStartPosition(std::forward<StartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    template<typename ConnectionTokenT = Aws::String>
    void SetConnectionToken(ConnectionTokenT&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::forward<ConnectionTokenT>(value); }
    template<typename ConnectionTokenT = Aws::String>
    GetTranscriptRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScanDirection m_scanDirection{ScanDirection::NOT_SET};
    bool m_scanDirectionHasBeenSet = false;

    SortKey m_sortOrder{SortKey::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    StartPosition m_startPosition;
    bool m_startPositionHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
