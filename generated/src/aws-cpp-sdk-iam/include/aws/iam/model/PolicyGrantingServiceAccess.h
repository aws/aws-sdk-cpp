/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicyType.h>
#include <aws/iam/model/PolicyOwnerEntityType.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains details about the permissions policies that are attached to the
   * specified identity (user, group, or role).</p> <p>This data type is an element
   * of the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListPoliciesGrantingServiceAccessEntry.html">ListPoliciesGrantingServiceAccessEntry</a>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PolicyGrantingServiceAccess">AWS
   * API Reference</a></p>
   */
  class PolicyGrantingServiceAccess
  {
  public:
    AWS_IAM_API PolicyGrantingServiceAccess() = default;
    AWS_IAM_API PolicyGrantingServiceAccess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API PolicyGrantingServiceAccess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PolicyGrantingServiceAccess& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy type. For more information about these policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
     * policies and inline policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline PolicyGrantingServiceAccess& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    PolicyGrantingServiceAccess& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity (user or role) that used the policy to access the service
     * to which the inline policy is attached.</p> <p>This field is null for managed
     * policies. For more information about these policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
     * policies and inline policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline PolicyOwnerEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(PolicyOwnerEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline PolicyGrantingServiceAccess& WithEntityType(PolicyOwnerEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity (user or role) to which the inline policy is
     * attached.</p> <p>This field is null for managed policies. For more information
     * about these policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
     * policies and inline policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    PolicyGrantingServiceAccess& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    PolicyOwnerEntityType m_entityType{PolicyOwnerEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
