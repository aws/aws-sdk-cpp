/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/Cluster.h>
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
namespace DAX
{
namespace Model
{
  class DecreaseReplicationFactorResult
  {
  public:
    AWS_DAX_API DecreaseReplicationFactorResult() = default;
    AWS_DAX_API DecreaseReplicationFactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DecreaseReplicationFactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline const Cluster& GetCluster() const { return m_cluster; }
    template<typename ClusterT = Cluster>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Cluster>
    DecreaseReplicationFactorResult& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DecreaseReplicationFactorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Cluster m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
