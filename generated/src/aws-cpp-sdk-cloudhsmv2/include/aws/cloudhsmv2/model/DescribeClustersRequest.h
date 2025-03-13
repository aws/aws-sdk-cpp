/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class DescribeClustersRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API DescribeClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusters"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>clusterIds</code> filter to return only the specified clusters.
     * Specify clusters by their cluster identifier (ID).</p> <p>Use the
     * <code>vpcIds</code> filter to return only the clusters in the specified virtual
     * private clouds (VPCs). Specify VPCs by their VPC identifier (ID).</p> <p>Use the
     * <code>states</code> filter to return only clusters that match the specified
     * state.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DescribeClustersRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersKeyT = Aws::String, typename FiltersValueT = Aws::Vector<Aws::String>>
    DescribeClustersRequest& AddFilters(FiltersKeyT&& key, FiltersValueT&& value) {
      m_filtersHasBeenSet = true; m_filters.emplace(std::forward<FiltersKeyT>(key), std::forward<FiltersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more clusters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of clusters to return in the response. When there are more
     * clusters than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
