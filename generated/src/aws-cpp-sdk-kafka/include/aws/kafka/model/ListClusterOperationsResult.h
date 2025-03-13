/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterOperationInfo.h>
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
  class ListClusterOperationsResult
  {
  public:
    AWS_KAFKA_API ListClusterOperationsResult() = default;
    AWS_KAFKA_API ListClusterOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClusterOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline const Aws::Vector<ClusterOperationInfo>& GetClusterOperationInfoList() const { return m_clusterOperationInfoList; }
    template<typename ClusterOperationInfoListT = Aws::Vector<ClusterOperationInfo>>
    void SetClusterOperationInfoList(ClusterOperationInfoListT&& value) { m_clusterOperationInfoListHasBeenSet = true; m_clusterOperationInfoList = std::forward<ClusterOperationInfoListT>(value); }
    template<typename ClusterOperationInfoListT = Aws::Vector<ClusterOperationInfo>>
    ListClusterOperationsResult& WithClusterOperationInfoList(ClusterOperationInfoListT&& value) { SetClusterOperationInfoList(std::forward<ClusterOperationInfoListT>(value)); return *this;}
    template<typename ClusterOperationInfoListT = ClusterOperationInfo>
    ListClusterOperationsResult& AddClusterOperationInfoList(ClusterOperationInfoListT&& value) { m_clusterOperationInfoListHasBeenSet = true; m_clusterOperationInfoList.emplace_back(std::forward<ClusterOperationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClusterOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterOperationInfo> m_clusterOperationInfoList;
    bool m_clusterOperationInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
