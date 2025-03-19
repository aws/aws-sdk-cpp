/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/Cluster.h>
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
namespace Kafka
{
namespace Model
{
  class ListClustersV2Result
  {
  public:
    AWS_KAFKA_API ListClustersV2Result() = default;
    AWS_KAFKA_API ListClustersV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClustersV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline const Aws::Vector<Cluster>& GetClusterInfoList() const { return m_clusterInfoList; }
    template<typename ClusterInfoListT = Aws::Vector<Cluster>>
    void SetClusterInfoList(ClusterInfoListT&& value) { m_clusterInfoListHasBeenSet = true; m_clusterInfoList = std::forward<ClusterInfoListT>(value); }
    template<typename ClusterInfoListT = Aws::Vector<Cluster>>
    ListClustersV2Result& WithClusterInfoList(ClusterInfoListT&& value) { SetClusterInfoList(std::forward<ClusterInfoListT>(value)); return *this;}
    template<typename ClusterInfoListT = Cluster>
    ListClustersV2Result& AddClusterInfoList(ClusterInfoListT&& value) { m_clusterInfoListHasBeenSet = true; m_clusterInfoList.emplace_back(std::forward<ClusterInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClustersV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Cluster> m_clusterInfoList;
    bool m_clusterInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
