/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class ListClustersV2Request : public KafkaRequest
  {
  public:
    AWS_KAFKA_API ListClustersV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClustersV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline const Aws::String& GetClusterNameFilter() const { return m_clusterNameFilter; }
    inline bool ClusterNameFilterHasBeenSet() const { return m_clusterNameFilterHasBeenSet; }
    template<typename ClusterNameFilterT = Aws::String>
    void SetClusterNameFilter(ClusterNameFilterT&& value) { m_clusterNameFilterHasBeenSet = true; m_clusterNameFilter = std::forward<ClusterNameFilterT>(value); }
    template<typename ClusterNameFilterT = Aws::String>
    ListClustersV2Request& WithClusterNameFilter(ClusterNameFilterT&& value) { SetClusterNameFilter(std::forward<ClusterNameFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline const Aws::String& GetClusterTypeFilter() const { return m_clusterTypeFilter; }
    inline bool ClusterTypeFilterHasBeenSet() const { return m_clusterTypeFilterHasBeenSet; }
    template<typename ClusterTypeFilterT = Aws::String>
    void SetClusterTypeFilter(ClusterTypeFilterT&& value) { m_clusterTypeFilterHasBeenSet = true; m_clusterTypeFilter = std::forward<ClusterTypeFilterT>(value); }
    template<typename ClusterTypeFilterT = Aws::String>
    ListClustersV2Request& WithClusterTypeFilter(ClusterTypeFilterT&& value) { SetClusterTypeFilter(std::forward<ClusterTypeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The maximum number of results to return in the response. If
     * there are more results, the response includes a NextToken parameter.</p>
       
     *  
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListClustersV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterNameFilter;
    bool m_clusterNameFilterHasBeenSet = false;

    Aws::String m_clusterTypeFilter;
    bool m_clusterTypeFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
