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
  class DescribeElasticGpusRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeElasticGpusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticGpus"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Elastic Graphics accelerator IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetElasticGpuIds() const { return m_elasticGpuIds; }
    inline bool ElasticGpuIdsHasBeenSet() const { return m_elasticGpuIdsHasBeenSet; }
    template<typename ElasticGpuIdsT = Aws::Vector<Aws::String>>
    void SetElasticGpuIds(ElasticGpuIdsT&& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds = std::forward<ElasticGpuIdsT>(value); }
    template<typename ElasticGpuIdsT = Aws::Vector<Aws::String>>
    DescribeElasticGpusRequest& WithElasticGpuIds(ElasticGpuIdsT&& value) { SetElasticGpuIds(std::forward<ElasticGpuIdsT>(value)); return *this;}
    template<typename ElasticGpuIdsT = Aws::String>
    DescribeElasticGpusRequest& AddElasticGpuIds(ElasticGpuIdsT&& value) { m_elasticGpuIdsHasBeenSet = true; m_elasticGpuIds.emplace_back(std::forward<ElasticGpuIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeElasticGpusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone in which the Elastic Graphics accelerator resides.</p> </li>
     * <li> <p> <code>elastic-gpu-health</code> - The status of the Elastic Graphics
     * accelerator (<code>OK</code> | <code>IMPAIRED</code>).</p> </li> <li> <p>
     * <code>elastic-gpu-state</code> - The state of the Elastic Graphics accelerator
     * (<code>ATTACHED</code>).</p> </li> <li> <p> <code>elastic-gpu-type</code> - The
     * type of Elastic Graphics accelerator; for example, <code>eg1.medium</code>.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance to which the
     * Elastic Graphics accelerator is associated.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeElasticGpusRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeElasticGpusRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeElasticGpusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeElasticGpusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_elasticGpuIds;
    bool m_elasticGpuIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
