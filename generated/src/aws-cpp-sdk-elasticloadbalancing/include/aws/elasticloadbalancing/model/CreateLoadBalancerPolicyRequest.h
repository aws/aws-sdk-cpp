/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/PolicyAttribute.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancerPolicy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerPolicyInput">AWS
   * API Reference</a></p>
   */
  class CreateLoadBalancerPolicyRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancerPolicy"; }

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
    CreateLoadBalancerPolicyRequest& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    CreateLoadBalancerPolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const { return m_policyTypeName; }
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }
    template<typename PolicyTypeNameT = Aws::String>
    void SetPolicyTypeName(PolicyTypeNameT&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::forward<PolicyTypeNameT>(value); }
    template<typename PolicyTypeNameT = Aws::String>
    CreateLoadBalancerPolicyRequest& WithPolicyTypeName(PolicyTypeNameT&& value) { SetPolicyTypeName(std::forward<PolicyTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy attributes.</p>
     */
    inline const Aws::Vector<PolicyAttribute>& GetPolicyAttributes() const { return m_policyAttributes; }
    inline bool PolicyAttributesHasBeenSet() const { return m_policyAttributesHasBeenSet; }
    template<typename PolicyAttributesT = Aws::Vector<PolicyAttribute>>
    void SetPolicyAttributes(PolicyAttributesT&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes = std::forward<PolicyAttributesT>(value); }
    template<typename PolicyAttributesT = Aws::Vector<PolicyAttribute>>
    CreateLoadBalancerPolicyRequest& WithPolicyAttributes(PolicyAttributesT&& value) { SetPolicyAttributes(std::forward<PolicyAttributesT>(value)); return *this;}
    template<typename PolicyAttributesT = PolicyAttribute>
    CreateLoadBalancerPolicyRequest& AddPolicyAttributes(PolicyAttributesT&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes.emplace_back(std::forward<PolicyAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet = false;

    Aws::Vector<PolicyAttribute> m_policyAttributes;
    bool m_policyAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
