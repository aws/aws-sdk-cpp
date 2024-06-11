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
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription();
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyTypeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the policy type.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const{ return m_policyTypeName; }
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }
    inline void SetPolicyTypeName(const Aws::String& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = value; }
    inline void SetPolicyTypeName(Aws::String&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::move(value); }
    inline void SetPolicyTypeName(const char* value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName.assign(value); }
    inline PolicyTypeDescription& WithPolicyTypeName(const Aws::String& value) { SetPolicyTypeName(value); return *this;}
    inline PolicyTypeDescription& WithPolicyTypeName(Aws::String&& value) { SetPolicyTypeName(std::move(value)); return *this;}
    inline PolicyTypeDescription& WithPolicyTypeName(const char* value) { SetPolicyTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the policy type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PolicyTypeDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PolicyTypeDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PolicyTypeDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the policy attributes associated with the policies defined
     * by Elastic Load Balancing.</p>
     */
    inline const Aws::Vector<PolicyAttributeTypeDescription>& GetPolicyAttributeTypeDescriptions() const{ return m_policyAttributeTypeDescriptions; }
    inline bool PolicyAttributeTypeDescriptionsHasBeenSet() const { return m_policyAttributeTypeDescriptionsHasBeenSet; }
    inline void SetPolicyAttributeTypeDescriptions(const Aws::Vector<PolicyAttributeTypeDescription>& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions = value; }
    inline void SetPolicyAttributeTypeDescriptions(Aws::Vector<PolicyAttributeTypeDescription>&& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions = std::move(value); }
    inline PolicyTypeDescription& WithPolicyAttributeTypeDescriptions(const Aws::Vector<PolicyAttributeTypeDescription>& value) { SetPolicyAttributeTypeDescriptions(value); return *this;}
    inline PolicyTypeDescription& WithPolicyAttributeTypeDescriptions(Aws::Vector<PolicyAttributeTypeDescription>&& value) { SetPolicyAttributeTypeDescriptions(std::move(value)); return *this;}
    inline PolicyTypeDescription& AddPolicyAttributeTypeDescriptions(const PolicyAttributeTypeDescription& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions.push_back(value); return *this; }
    inline PolicyTypeDescription& AddPolicyAttributeTypeDescriptions(PolicyAttributeTypeDescription&& value) { m_policyAttributeTypeDescriptionsHasBeenSet = true; m_policyAttributeTypeDescriptions.push_back(std::move(value)); return *this; }
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
