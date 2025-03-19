/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * SetLoadBalancerPoliciesForBackendServer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesForBackendServerInput">AWS
   * API Reference</a></p>
   */
  class SetLoadBalancerPoliciesForBackendServerRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API SetLoadBalancerPoliciesForBackendServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBalancerPoliciesForBackendServer"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    SetLoadBalancerPoliciesForBackendServerRequest& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number associated with the EC2 instance.</p>
     */
    inline int GetInstancePort() const { return m_instancePort; }
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithInstancePort(int value) { SetInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const { return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    void SetPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::forward<PolicyNamesT>(value); }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    SetLoadBalancerPoliciesForBackendServerRequest& WithPolicyNames(PolicyNamesT&& value) { SetPolicyNames(std::forward<PolicyNamesT>(value)); return *this;}
    template<typename PolicyNamesT = Aws::String>
    SetLoadBalancerPoliciesForBackendServerRequest& AddPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames.emplace_back(std::forward<PolicyNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    int m_instancePort{0};
    bool m_instancePortHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
