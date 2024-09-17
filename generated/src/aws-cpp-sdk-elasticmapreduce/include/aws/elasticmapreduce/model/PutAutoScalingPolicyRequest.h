/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicy.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class PutAutoScalingPolicyRequest : public EMRRequest
  {
  public:
    AWS_EMR_API PutAutoScalingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAutoScalingPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline PutAutoScalingPolicyRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline PutAutoScalingPolicyRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline PutAutoScalingPolicyRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline const AutoScalingPolicy& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }
    inline void SetAutoScalingPolicy(const AutoScalingPolicy& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }
    inline void SetAutoScalingPolicy(AutoScalingPolicy&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }
    inline PutAutoScalingPolicyRequest& WithAutoScalingPolicy(const AutoScalingPolicy& value) { SetAutoScalingPolicy(value); return *this;}
    inline PutAutoScalingPolicyRequest& WithAutoScalingPolicy(AutoScalingPolicy&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    AutoScalingPolicy m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
