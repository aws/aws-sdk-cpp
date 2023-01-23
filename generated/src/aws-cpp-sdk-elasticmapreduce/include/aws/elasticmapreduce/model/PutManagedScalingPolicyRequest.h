/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class PutManagedScalingPolicyRequest : public EMRRequest
  {
  public:
    AWS_EMR_API PutManagedScalingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedScalingPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline PutManagedScalingPolicyRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline PutManagedScalingPolicyRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of an EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline PutManagedScalingPolicyRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const{ return m_managedScalingPolicy; }

    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline bool ManagedScalingPolicyHasBeenSet() const { return m_managedScalingPolicyHasBeenSet; }

    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline void SetManagedScalingPolicy(const ManagedScalingPolicy& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = value; }

    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline void SetManagedScalingPolicy(ManagedScalingPolicy&& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = std::move(value); }

    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline PutManagedScalingPolicyRequest& WithManagedScalingPolicy(const ManagedScalingPolicy& value) { SetManagedScalingPolicy(value); return *this;}

    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline PutManagedScalingPolicyRequest& WithManagedScalingPolicy(ManagedScalingPolicy&& value) { SetManagedScalingPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    ManagedScalingPolicy m_managedScalingPolicy;
    bool m_managedScalingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
