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
    AWS_EMR_API PutAutoTerminationPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAutoTerminationPolicy"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the Amazon EMR cluster to which the auto-termination
     * policy will be attached.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    PutAutoTerminationPolicyRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the auto-termination policy to attach to the cluster.</p>
     */
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const { return m_autoTerminationPolicy; }
    inline bool AutoTerminationPolicyHasBeenSet() const { return m_autoTerminationPolicyHasBeenSet; }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    void SetAutoTerminationPolicy(AutoTerminationPolicyT&& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = std::forward<AutoTerminationPolicyT>(value); }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    PutAutoTerminationPolicyRequest& WithAutoTerminationPolicy(AutoTerminationPolicyT&& value) { SetAutoTerminationPolicy(std::forward<AutoTerminationPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    AutoTerminationPolicy m_autoTerminationPolicy;
    bool m_autoTerminationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
