/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/VirtualCluster.h>
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
namespace EMRContainers
{
namespace Model
{
  class ListVirtualClustersResult
  {
  public:
    AWS_EMRCONTAINERS_API ListVirtualClustersResult() = default;
    AWS_EMRCONTAINERS_API ListVirtualClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListVirtualClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline const Aws::Vector<VirtualCluster>& GetVirtualClusters() const { return m_virtualClusters; }
    template<typename VirtualClustersT = Aws::Vector<VirtualCluster>>
    void SetVirtualClusters(VirtualClustersT&& value) { m_virtualClustersHasBeenSet = true; m_virtualClusters = std::forward<VirtualClustersT>(value); }
    template<typename VirtualClustersT = Aws::Vector<VirtualCluster>>
    ListVirtualClustersResult& WithVirtualClusters(VirtualClustersT&& value) { SetVirtualClusters(std::forward<VirtualClustersT>(value)); return *this;}
    template<typename VirtualClustersT = VirtualCluster>
    ListVirtualClustersResult& AddVirtualClusters(VirtualClustersT&& value) { m_virtualClustersHasBeenSet = true; m_virtualClusters.emplace_back(std::forward<VirtualClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualCluster> m_virtualClusters;
    bool m_virtualClustersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
