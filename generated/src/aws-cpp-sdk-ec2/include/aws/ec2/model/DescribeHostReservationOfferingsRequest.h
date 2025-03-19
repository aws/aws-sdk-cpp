/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeHostReservationOfferingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeHostReservationOfferingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHostReservationOfferings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-family</code> - The instance
     * family of the offering (for example, <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>NoUpfront</code> |
     * <code>PartialUpfront</code> | <code>AllUpfront</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Vector<Filter>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Vector<Filter>>
    DescribeHostReservationOfferingsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterT = Filter>
    DescribeHostReservationOfferingsRequest& AddFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter.emplace_back(std::forward<FilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the maximum duration of the reservation to purchase, specified in
     * seconds. Reservations are available in one-year and three-year terms. The number
     * of seconds specified must be the number of seconds in a year (365x24x60x60)
     * times one of the supported durations (1 or 3). For example, specify 94608000 for
     * three years.</p>
     */
    inline int GetMaxDuration() const { return m_maxDuration; }
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }
    inline void SetMaxDuration(int value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }
    inline DescribeHostReservationOfferingsRequest& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeHostReservationOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the minimum duration of the reservation you'd like to purchase,
     * specified in seconds. Reservations are available in one-year and three-year
     * terms. The number of seconds specified must be the number of seconds in a year
     * (365x24x60x60) times one of the supported durations (1 or 3). For example,
     * specify 31536000 for one year.</p>
     */
    inline int GetMinDuration() const { return m_minDuration; }
    inline bool MinDurationHasBeenSet() const { return m_minDurationHasBeenSet; }
    inline void SetMinDuration(int value) { m_minDurationHasBeenSet = true; m_minDuration = value; }
    inline DescribeHostReservationOfferingsRequest& WithMinDuration(int value) { SetMinDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHostReservationOfferingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation offering.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    DescribeHostReservationOfferingsRequest& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxDuration{0};
    bool m_maxDurationHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    int m_minDuration{0};
    bool m_minDurationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
