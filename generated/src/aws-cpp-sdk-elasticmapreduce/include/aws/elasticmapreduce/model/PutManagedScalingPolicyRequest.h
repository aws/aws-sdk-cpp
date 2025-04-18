﻿/**
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
    AWS_EMR_API PutManagedScalingPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedScalingPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of an Amazon EMR cluster where the managed scaling policy is
     * attached. </p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    PutManagedScalingPolicyRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the constraints for the managed scaling policy. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const { return m_managedScalingPolicy; }
    inline bool ManagedScalingPolicyHasBeenSet() const { return m_managedScalingPolicyHasBeenSet; }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    void SetManagedScalingPolicy(ManagedScalingPolicyT&& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = std::forward<ManagedScalingPolicyT>(value); }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    PutManagedScalingPolicyRequest& WithManagedScalingPolicy(ManagedScalingPolicyT&& value) { SetManagedScalingPolicy(std::forward<ManagedScalingPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    ManagedScalingPolicy m_managedScalingPolicy;
    bool m_managedScalingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
