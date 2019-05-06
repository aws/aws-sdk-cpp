/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EMR_API PutAutoScalingPolicyRequest : public EMRRequest
  {
  public:
    PutAutoScalingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAutoScalingPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline PutAutoScalingPolicyRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline PutAutoScalingPolicyRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of a cluster. The instance group to which the automatic
     * scaling policy is applied is within this cluster.</p>
     */
    inline PutAutoScalingPolicyRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the instance group to which the automatic scaling policy
     * is applied.</p>
     */
    inline PutAutoScalingPolicyRequest& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}


    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline const AutoScalingPolicy& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }

    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }

    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline void SetAutoScalingPolicy(const AutoScalingPolicy& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }

    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline void SetAutoScalingPolicy(AutoScalingPolicy&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }

    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline PutAutoScalingPolicyRequest& WithAutoScalingPolicy(const AutoScalingPolicy& value) { SetAutoScalingPolicy(value); return *this;}

    /**
     * <p>Specifies the definition of the automatic scaling policy.</p>
     */
    inline PutAutoScalingPolicyRequest& WithAutoScalingPolicy(AutoScalingPolicy&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet;

    AutoScalingPolicy m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
