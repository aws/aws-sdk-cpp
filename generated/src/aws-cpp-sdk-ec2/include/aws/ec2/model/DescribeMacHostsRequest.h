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
  class DescribeMacHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeMacHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMacHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline DescribeMacHostsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline DescribeMacHostsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline DescribeMacHostsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the EC2 Mac Dedicated Host.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type size that the EC2 Mac Dedicated
     * Host is configured to support.</p> </li> </ul>
     */
    inline DescribeMacHostsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIdsHasBeenSet = true; m_hostIds = value; }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::move(value); }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsRequest& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsRequest& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsRequest& AddHostIds(const Aws::String& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsRequest& AddHostIds(Aws::String&& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The IDs of the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsRequest& AddHostIds(const char* value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline DescribeMacHostsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
