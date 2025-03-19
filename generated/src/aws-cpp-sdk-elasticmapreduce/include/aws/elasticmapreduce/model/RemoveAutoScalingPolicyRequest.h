/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class RemoveAutoScalingPolicyRequest : public EMRRequest
  {
  public:
    AWS_EMR_API RemoveAutoScalingPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAutoScalingPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    RemoveAutoScalingPolicyRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the instance group to which the scaling policy is
     * applied.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const { return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    template<typename InstanceGroupIdT = Aws::String>
    void SetInstanceGroupId(InstanceGroupIdT&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::forward<InstanceGroupIdT>(value); }
    template<typename InstanceGroupIdT = Aws::String>
    RemoveAutoScalingPolicyRequest& WithInstanceGroupId(InstanceGroupIdT&& value) { SetInstanceGroupId(std::forward<InstanceGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
