/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Specifies the configuration of the AWS managed or customer managed policy
   * that you want to set as a permissions boundary. Specify either
   * <code>CustomerManagedPolicyReference</code> to use the name and path of a
   * customer managed policy, or <code>ManagedPolicyArn</code> to use the ARN of an
   * AWS managed policy. A permissions boundary represents the maximum permissions
   * that any policy can grant your role. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
   * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> 
   * <p>Policies used as permissions boundaries don't provide permissions. You must
   * also attach an IAM policy to the role. To learn how the effective permissions
   * for a role are evaluated, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
   * JSON policy evaluation logic</a> in the <i>IAM User Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PermissionsBoundary">AWS
   * API Reference</a></p>
   */
  class PermissionsBoundary
  {
  public:
    AWS_SSOADMIN_API PermissionsBoundary();
    AWS_SSOADMIN_API PermissionsBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API PermissionsBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline const CustomerManagedPolicyReference& GetCustomerManagedPolicyReference() const{ return m_customerManagedPolicyReference; }

    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline bool CustomerManagedPolicyReferenceHasBeenSet() const { return m_customerManagedPolicyReferenceHasBeenSet; }

    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline void SetCustomerManagedPolicyReference(const CustomerManagedPolicyReference& value) { m_customerManagedPolicyReferenceHasBeenSet = true; m_customerManagedPolicyReference = value; }

    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline void SetCustomerManagedPolicyReference(CustomerManagedPolicyReference&& value) { m_customerManagedPolicyReferenceHasBeenSet = true; m_customerManagedPolicyReference = std::move(value); }

    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline PermissionsBoundary& WithCustomerManagedPolicyReference(const CustomerManagedPolicyReference& value) { SetCustomerManagedPolicyReference(value); return *this;}

    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each AWS account where you want to
     * deploy your permission set.</p>
     */
    inline PermissionsBoundary& WithCustomerManagedPolicyReference(CustomerManagedPolicyReference&& value) { SetCustomerManagedPolicyReference(std::move(value)); return *this;}


    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline const Aws::String& GetManagedPolicyArn() const{ return m_managedPolicyArn; }

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline bool ManagedPolicyArnHasBeenSet() const { return m_managedPolicyArnHasBeenSet; }

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline void SetManagedPolicyArn(const Aws::String& value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn = value; }

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline void SetManagedPolicyArn(Aws::String&& value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn = std::move(value); }

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline void SetManagedPolicyArn(const char* value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn.assign(value); }

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline PermissionsBoundary& WithManagedPolicyArn(const Aws::String& value) { SetManagedPolicyArn(value); return *this;}

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline PermissionsBoundary& WithManagedPolicyArn(Aws::String&& value) { SetManagedPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The AWS managed policy ARN that you want to attach to a permission set as a
     * permissions boundary.</p>
     */
    inline PermissionsBoundary& WithManagedPolicyArn(const char* value) { SetManagedPolicyArn(value); return *this;}

  private:

    CustomerManagedPolicyReference m_customerManagedPolicyReference;
    bool m_customerManagedPolicyReferenceHasBeenSet = false;

    Aws::String m_managedPolicyArn;
    bool m_managedPolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
