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
  class AWS_ELASTICLOADBALANCING_API PolicyDescription
  {
  public:
    PolicyDescription();
    PolicyDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline PolicyDescription& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline PolicyDescription& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline PolicyDescription& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The name of the policy type.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const{ return m_policyTypeName; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetPolicyTypeName(const Aws::String& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = value; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetPolicyTypeName(Aws::String&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::move(value); }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetPolicyTypeName(const char* value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName.assign(value); }

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyDescription& WithPolicyTypeName(const Aws::String& value) { SetPolicyTypeName(value); return *this;}

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyDescription& WithPolicyTypeName(Aws::String&& value) { SetPolicyTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyDescription& WithPolicyTypeName(const char* value) { SetPolicyTypeName(value); return *this;}


    /**
     * <p>The policy attributes.</p>
     */
    inline const Aws::Vector<PolicyAttributeDescription>& GetPolicyAttributeDescriptions() const{ return m_policyAttributeDescriptions; }

    /**
     * <p>The policy attributes.</p>
     */
    inline bool PolicyAttributeDescriptionsHasBeenSet() const { return m_policyAttributeDescriptionsHasBeenSet; }

    /**
     * <p>The policy attributes.</p>
     */
    inline void SetPolicyAttributeDescriptions(const Aws::Vector<PolicyAttributeDescription>& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions = value; }

    /**
     * <p>The policy attributes.</p>
     */
    inline void SetPolicyAttributeDescriptions(Aws::Vector<PolicyAttributeDescription>&& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions = std::move(value); }

    /**
     * <p>The policy attributes.</p>
     */
    inline PolicyDescription& WithPolicyAttributeDescriptions(const Aws::Vector<PolicyAttributeDescription>& value) { SetPolicyAttributeDescriptions(value); return *this;}

    /**
     * <p>The policy attributes.</p>
     */
    inline PolicyDescription& WithPolicyAttributeDescriptions(Aws::Vector<PolicyAttributeDescription>&& value) { SetPolicyAttributeDescriptions(std::move(value)); return *this;}

    /**
     * <p>The policy attributes.</p>
     */
    inline PolicyDescription& AddPolicyAttributeDescriptions(const PolicyAttributeDescription& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions.push_back(value); return *this; }

    /**
     * <p>The policy attributes.</p>
     */
    inline PolicyDescription& AddPolicyAttributeDescriptions(PolicyAttributeDescription&& value) { m_policyAttributeDescriptionsHasBeenSet = true; m_policyAttributeDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet;

    Aws::Vector<PolicyAttributeDescription> m_policyAttributeDescriptions;
    bool m_policyAttributeDescriptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
