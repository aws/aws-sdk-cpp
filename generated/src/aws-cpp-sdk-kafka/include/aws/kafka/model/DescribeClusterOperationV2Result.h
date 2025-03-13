/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterOperationV2.h>
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
  class DescribeClusterOperationV2Result
  {
  public:
    AWS_KAFKA_API DescribeClusterOperationV2Result() = default;
    AWS_KAFKA_API DescribeClusterOperationV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeClusterOperationV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Cluster operation information</p>
     */
    inline const ClusterOperationV2& GetClusterOperationInfo() const { return m_clusterOperationInfo; }
    template<typename ClusterOperationInfoT = ClusterOperationV2>
    void SetClusterOperationInfo(ClusterOperationInfoT&& value) { m_clusterOperationInfoHasBeenSet = true; m_clusterOperationInfo = std::forward<ClusterOperationInfoT>(value); }
    template<typename ClusterOperationInfoT = ClusterOperationV2>
    DescribeClusterOperationV2Result& WithClusterOperationInfo(ClusterOperationInfoT&& value) { SetClusterOperationInfo(std::forward<ClusterOperationInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterOperationV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClusterOperationV2 m_clusterOperationInfo;
    bool m_clusterOperationInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
