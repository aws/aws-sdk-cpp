/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>Output from an AddInstanceGroups call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AddInstanceGroupsResult
  {
  public:
    AWS_EMR_API AddInstanceGroupsResult() = default;
    AWS_EMR_API AddInstanceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API AddInstanceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline const Aws::String& GetJobFlowId() const { return m_jobFlowId; }
    template<typename JobFlowIdT = Aws::String>
    void SetJobFlowId(JobFlowIdT&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::forward<JobFlowIdT>(value); }
    template<typename JobFlowIdT = Aws::String>
    AddInstanceGroupsResult& WithJobFlowId(JobFlowIdT&& value) { SetJobFlowId(std::forward<JobFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupIds() const { return m_instanceGroupIds; }
    template<typename InstanceGroupIdsT = Aws::Vector<Aws::String>>
    void SetInstanceGroupIds(InstanceGroupIdsT&& value) { m_instanceGroupIdsHasBeenSet = true; m_instanceGroupIds = std::forward<InstanceGroupIdsT>(value); }
    template<typename InstanceGroupIdsT = Aws::Vector<Aws::String>>
    AddInstanceGroupsResult& WithInstanceGroupIds(InstanceGroupIdsT&& value) { SetInstanceGroupIds(std::forward<InstanceGroupIdsT>(value)); return *this;}
    template<typename InstanceGroupIdsT = Aws::String>
    AddInstanceGroupsResult& AddInstanceGroupIds(InstanceGroupIdsT&& value) { m_instanceGroupIdsHasBeenSet = true; m_instanceGroupIds.emplace_back(std::forward<InstanceGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    AddInstanceGroupsResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddInstanceGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceGroupIds;
    bool m_instanceGroupIdsHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
