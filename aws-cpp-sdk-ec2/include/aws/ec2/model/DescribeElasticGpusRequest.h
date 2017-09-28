/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeElasticGpusRequest : public EC2Request
  {
  public:
    DescribeElasticGpusRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticGpus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetElasticGpuIds() const{ return m_elasticGpuIds; }

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline void SetElasticGpuIds(const Aws::Vector<Aws::String>& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds = value; }

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline void SetElasticGpuIds(Aws::Vector<Aws::String>&& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds = std::move(value); }

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline DescribeElasticGpusRequest& WithElasticGpuIds(const Aws::Vector<Aws::String>& value) { SetElasticGpuIds(value); return *this;}

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline DescribeElasticGpusRequest& WithElasticGpuIds(Aws::Vector<Aws::String>&& value) { SetElasticGpuIds(std::move(value)); return *this;}

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline DescribeElasticGpusRequest& AddElasticGpuIds(const Aws::String& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds.push_back(value); return *this; }

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline DescribeElasticGpusRequest& AddElasticGpuIds(Aws::String&& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Elastic GPU IDs.</p>
     */
    inline DescribeElasticGpusRequest& AddElasticGpuIds(const char* value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds.push_back(value); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeElasticGpusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline DescribeElasticGpusRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline DescribeElasticGpusRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline DescribeElasticGpusRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic GPU resides.</p> </li> <li> <p>
     * <code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code>
     * | <code>IMPAIRED</code>).</p> </li> <li> <p> <code>elastic-gpu-state</code> -
     * The state of the Elastic GPU (<code>ATTACHED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-type</code> - The type of Elastic GPU; for example,
     * <code>eg1.medium</code>.</p> </li> <li> <p> <code>instance-id</code> - The ID of
     * the instance to which the Elastic GPU is associated.</p> </li> </ul>
     */
    inline DescribeElasticGpusRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000.</p>
     */
    inline DescribeElasticGpusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeElasticGpusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeElasticGpusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeElasticGpusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_elasticGpuIds;
    bool m_elasticGpuIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
