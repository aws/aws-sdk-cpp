/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/VirtualCluster.h>
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
namespace EMRContainers
{
namespace Model
{
  class DescribeVirtualClusterResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult() = default;
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline const VirtualCluster& GetVirtualCluster() const { return m_virtualCluster; }
    template<typename VirtualClusterT = VirtualCluster>
    void SetVirtualCluster(VirtualClusterT&& value) { m_virtualClusterHasBeenSet = true; m_virtualCluster = std::forward<VirtualClusterT>(value); }
    template<typename VirtualClusterT = VirtualCluster>
    DescribeVirtualClusterResult& WithVirtualCluster(VirtualClusterT&& value) { SetVirtualCluster(std::forward<VirtualClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVirtualClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualCluster m_virtualCluster;
    bool m_virtualClusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
