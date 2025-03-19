/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/PolicyAttributeDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/PolicyDescription">AWS
   * API Reference</a></p>
   */
  class PolicyDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API PolicyDescription() = default;
    AWS_ELASTICLOADBALANCING_API PolicyDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PolicyDescription& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy type.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const { return m_policyTypeName; }
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }
    template<typename PolicyTypeNameT = Aws::String>
    void SetPolicyTypeName(PolicyTypeNameT&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::forward<PolicyTypeNameT>(value); }
    template<typename PolicyTypeNameT = Aws::String>
    PolicyDescription& WithPolicyTypeName(PolicyTypeNameT&& value) { SetPolicyTypeName(std::forward<PolicyTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy attributes.</p>
     */
    inline const Aws::Vector<PolicyAttributeDescription>& GetPolicyAttributeDescriptions() const { return m_policyAttributeDescriptions; }
    inline bool PolicyAttributeDescriptionsHasBeenSet() const { return m_policyAttributeDescriptionsHasBeenSet; }
    template<typename PolicyAttributeDescriptionsT = Aws::Vector<PolicyAttributeDescription>>
    void SetPolicyAttributeDescriptions(PolicyAttributeDescriptionsT&& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions = std::forward<PolicyAttributeDescriptionsT>(value); }
    template<typename PolicyAttributeDescriptionsT = Aws::Vector<PolicyAttributeDescription>>
    PolicyDescription& WithPolicyAttributeDescriptions(PolicyAttributeDescriptionsT&& value) { SetPolicyAttributeDescriptions(std::forward<PolicyAttributeDescriptionsT>(value)); return *this;}
    template<typename PolicyAttributeDescriptionsT = PolicyAttributeDescription>
    PolicyDescription& AddPolicyAttributeDescriptions(PolicyAttributeDescriptionsT&& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions.emplace_back(std::forward<PolicyAttributeDescriptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet = false;

    Aws::Vector<PolicyAttributeDescription> m_policyAttributeDescriptions;
    bool m_policyAttributeDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
