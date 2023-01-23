/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AutoTerminationPolicy.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class PutAutoTerminationPolicyRequest : public EMRRequest
  {
  public:
    AWS_EMR_API PutAutoTerminationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAutoTerminationPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline PutAutoTerminationPolicyRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline PutAutoTerminationPolicyRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline PutAutoTerminationPolicyRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const{ return m_autoTerminationPolicy; }

    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline bool AutoTerminationPolicyHasBeenSet() const { return m_autoTerminationPolicyHasBeenSet; }

    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline void SetAutoTerminationPolicy(const AutoTerminationPolicy& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = value; }

    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline void SetAutoTerminationPolicy(AutoTerminationPolicy&& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = std::move(value); }

    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline PutAutoTerminationPolicyRequest& WithAutoTerminationPolicy(const AutoTerminationPolicy& value) { SetAutoTerminationPolicy(value); return *this;}

    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline PutAutoTerminationPolicyRequest& WithAutoTerminationPolicy(AutoTerminationPolicy&& value) { SetAutoTerminationPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    AutoTerminationPolicy m_autoTerminationPolicy;
    bool m_autoTerminationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
