/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterOperationInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeClusterOperationResult
  {
  public:
    AWS_KAFKA_API DescribeClusterOperationResult() = default;
    AWS_KAFKA_API DescribeClusterOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeClusterOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline const ClusterOperationInfo& GetClusterOperationInfo() const { return m_clusterOperationInfo; }
    template<typename ClusterOperationInfoT = ClusterOperationInfo>
    void SetClusterOperationInfo(ClusterOperationInfoT&& value) { m_clusterOperationInfoHasBeenSet = true; m_clusterOperationInfo = std::forward<ClusterOperationInfoT>(value); }
    template<typename ClusterOperationInfoT = ClusterOperationInfo>
    DescribeClusterOperationResult& WithClusterOperationInfo(ClusterOperationInfoT&& value) { SetClusterOperationInfo(std::forward<ClusterOperationInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClusterOperationInfo m_clusterOperationInfo;
    bool m_clusterOperationInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
