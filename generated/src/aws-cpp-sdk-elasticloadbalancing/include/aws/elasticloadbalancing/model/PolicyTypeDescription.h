/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/PolicyAttributeTypeDescription.h>
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
   * <p>Information about a policy type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/PolicyTypeDescription">AWS
   * API Reference</a></p>
   */
  class PolicyTypeDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription() = default;
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the policy type.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const { return m_policyTypeName; }
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }
    template<typename PolicyTypeNameT = Aws::String>
    void SetPolicyTypeName(PolicyTypeNameT&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::forward<PolicyTypeNameT>(value); }
    template<typename PolicyTypeNameT = Aws::String>
    PolicyTypeDescription& WithPolicyTypeName(PolicyTypeNameT&& value) { SetPolicyTypeName(std::forward<PolicyTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the policy type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PolicyTypeDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the policy attributes associated with the policies defined
     * by Elastic Load Balancing.</p>
     */
    inline const Aws::Vector<PolicyAttributeTypeDescription>& GetPolicyAttributeTypeDescriptions() const { return m_policyAttributeTypeDescriptions; }
    inline bool PolicyAttributeTypeDescriptionsHasBeenSet() const { return m_policyAttributeTypeDescriptionsHasBeenSet; }
    template<typename PolicyAttributeTypeDescriptionsT = Aws::Vector<PolicyAttributeTypeDescription>>
    void SetPolicyAttributeTypeDescriptions(PolicyAttributeTypeDescriptionsT&& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions = std::forward<PolicyAttributeTypeDescriptionsT>(value); }
    template<typename PolicyAttributeTypeDescriptionsT = Aws::Vector<PolicyAttributeTypeDescription>>
    PolicyTypeDescription& WithPolicyAttributeTypeDescriptions(PolicyAttributeTypeDescriptionsT&& value) { SetPolicyAttributeTypeDescriptions(std::forward<PolicyAttributeTypeDescriptionsT>(value)); return *this;}
    template<typename PolicyAttributeTypeDescriptionsT = PolicyAttributeTypeDescription>
    PolicyTypeDescription& AddPolicyAttributeTypeDescriptions(PolicyAttributeTypeDescriptionsT&& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions.emplace_back(std::forward<PolicyAttributeTypeDescriptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PolicyAttributeTypeDescription> m_policyAttributeTypeDescriptions;
    bool m_policyAttributeTypeDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
