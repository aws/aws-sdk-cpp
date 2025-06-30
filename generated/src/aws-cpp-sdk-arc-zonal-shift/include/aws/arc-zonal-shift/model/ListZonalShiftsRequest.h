/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class ListZonalShiftsRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API ListZonalShiftsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListZonalShifts"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;

    AWS_ARCZONALSHIFT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>nextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>nextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListZonalShiftsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and is active.</p> </li> <li> <p> <b>EXPIRED</b>: The
     * zonal shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline ZonalShiftStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ZonalShiftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListZonalShiftsRequest& WithStatus(ZonalShiftStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListZonalShiftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ListZonalShiftsRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ZonalShiftStatus m_status{ZonalShiftStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
