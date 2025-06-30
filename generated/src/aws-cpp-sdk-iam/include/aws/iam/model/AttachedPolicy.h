/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about an attached policy.</p> <p>An attached policy is a
   * managed policy that has been attached to a user, group, or role. This data type
   * is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListAttachedGroupPolicies.html">ListAttachedGroupPolicies</a>,
   * <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListAttachedRolePolicies.html">ListAttachedRolePolicies</a>,
   * <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListAttachedUserPolicies.html">ListAttachedUserPolicies</a>,
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountAuthorizationDetails.html">GetAccountAuthorizationDetails</a>
   * operations. </p> <p>For more information about managed policies, refer to <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * policies and inline policies</a> in the <i>IAM User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachedPolicy">AWS
   * API Reference</a></p>
   */
  class AttachedPolicy
  {
  public:
    AWS_IAM_API AttachedPolicy() = default;
    AWS_IAM_API AttachedPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API AttachedPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    AttachedPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    AttachedPolicy& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
