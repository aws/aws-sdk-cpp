﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeHostReservationsRequest : public EC2Request
  {
  public:
    DescribeHostReservationsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostReservationIdSet() const{ return m_hostReservationIdSet; }

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline void SetHostReservationIdSet(const Aws::Vector<Aws::String>& value) { m_hostReservationIdSetHasBeenSet = true; m_hostReservationIdSet = value; }

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline void SetHostReservationIdSet(Aws::Vector<Aws::String>&& value) { m_hostReservationIdSetHasBeenSet = true; m_hostReservationIdSet = value; }

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline DescribeHostReservationsRequest& WithHostReservationIdSet(const Aws::Vector<Aws::String>& value) { SetHostReservationIdSet(value); return *this;}

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline DescribeHostReservationsRequest& WithHostReservationIdSet(Aws::Vector<Aws::String>&& value) { SetHostReservationIdSet(value); return *this;}

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline DescribeHostReservationsRequest& AddHostReservationIdSet(const Aws::String& value) { m_hostReservationIdSetHasBeenSet = true; m_hostReservationIdSet.push_back(value); return *this; }

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline DescribeHostReservationsRequest& AddHostReservationIdSet(Aws::String&& value) { m_hostReservationIdSetHasBeenSet = true; m_hostReservationIdSet.push_back(value); return *this; }

    /**
     * <p>One or more host reservation IDs.</p>
     */
    inline DescribeHostReservationsRequest& AddHostReservationIdSet(const char* value) { m_hostReservationIdSetHasBeenSet = true; m_hostReservationIdSet.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const{ return m_filter; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline void SetFilter(const Aws::Vector<Filter>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline void SetFilter(Aws::Vector<Filter>&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline DescribeHostReservationsRequest& WithFilter(const Aws::Vector<Filter>& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline DescribeHostReservationsRequest& WithFilter(Aws::Vector<Filter>&& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline DescribeHostReservationsRequest& AddFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-family</code> - The
     * instance family (e.g., <code>m4</code>).</p> </li> <li> <p>
     * <code>payment-option</code> - The payment option (<code>No Upfront</code> |
     * <code>Partial Upfront</code> | <code>All Upfront</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the reservation (<code>payment-pending</code>
     * | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p>
     * </li> </ul>
     */
    inline DescribeHostReservationsRequest& AddFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500; if
     * <code>maxResults</code> is given a larger value than 500, you will receive an
     * error.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500; if
     * <code>maxResults</code> is given a larger value than 500, you will receive an
     * error.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500; if
     * <code>maxResults</code> is given a larger value than 500, you will receive an
     * error.</p>
     */
    inline DescribeHostReservationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostReservationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostReservationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostReservationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_hostReservationIdSet;
    bool m_hostReservationIdSetHasBeenSet;
    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
