/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyDescription.h>
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
  class PutAutoScalingPolicyResult
  {
  public:
    AWS_EMR_API PutAutoScalingPolicyResult() = default;
    AWS_EMR_API PutAutoScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API PutAutoScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    PutAutoScalingPolicyResult& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the instance group to which the scaling policy is
     * applied.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const { return m_instanceGroupId; }
    template<typename InstanceGroupIdT = Aws::String>
    void SetInstanceGroupId(InstanceGroupIdT&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::forward<InstanceGroupIdT>(value); }
    template<typename InstanceGroupIdT = Aws::String>
    PutAutoScalingPolicyResult& WithInstanceGroupId(InstanceGroupIdT&& value) { SetInstanceGroupId(std::forward<InstanceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automatic scaling policy definition.</p>
     */
    inline const AutoScalingPolicyDescription& GetAutoScalingPolicy() const { return m_autoScalingPolicy; }
    template<typename AutoScalingPolicyT = AutoScalingPolicyDescription>
    void SetAutoScalingPolicy(AutoScalingPolicyT&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::forward<AutoScalingPolicyT>(value); }
    template<typename AutoScalingPolicyT = AutoScalingPolicyDescription>
    PutAutoScalingPolicyResult& WithAutoScalingPolicy(AutoScalingPolicyT&& value) { SetAutoScalingPolicy(std::forward<AutoScalingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    PutAutoScalingPolicyResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAutoScalingPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    AutoScalingPolicyDescription m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
