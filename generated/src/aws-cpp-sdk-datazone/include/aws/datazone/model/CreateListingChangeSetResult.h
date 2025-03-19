/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ListingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class CreateListingChangeSetResult
  {
  public:
    AWS_DATAZONE_API CreateListingChangeSetResult() = default;
    AWS_DATAZONE_API CreateListingChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateListingChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the listing (a record of an asset at a given time).</p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    CreateListingChangeSetResult& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of a listing.</p>
     */
    inline const Aws::String& GetListingRevision() const { return m_listingRevision; }
    template<typename ListingRevisionT = Aws::String>
    void SetListingRevision(ListingRevisionT&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::forward<ListingRevisionT>(value); }
    template<typename ListingRevisionT = Aws::String>
    CreateListingChangeSetResult& WithListingRevision(ListingRevisionT&& value) { SetListingRevision(std::forward<ListingRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the listing.</p>
     */
    inline ListingStatus GetStatus() const { return m_status; }
    inline void SetStatus(ListingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateListingChangeSetResult& WithStatus(ListingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateListingChangeSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    Aws::String m_listingRevision;
    bool m_listingRevisionHasBeenSet = false;

    ListingStatus m_status{ListingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
