/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class AttachManagedPolicyToPermissionSetRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API AttachManagedPolicyToPermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachManagedPolicyToPermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <a>PermissionSet</a> that the managed policy should be
     * attached to.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}


    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline const Aws::String& GetManagedPolicyArn() const{ return m_managedPolicyArn; }

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline bool ManagedPolicyArnHasBeenSet() const { return m_managedPolicyArnHasBeenSet; }

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline void SetManagedPolicyArn(const Aws::String& value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn = value; }

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline void SetManagedPolicyArn(Aws::String&& value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn = std::move(value); }

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline void SetManagedPolicyArn(const char* value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn.assign(value); }

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithManagedPolicyArn(const Aws::String& value) { SetManagedPolicyArn(value); return *this;}

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithManagedPolicyArn(Aws::String&& value) { SetManagedPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The AWS managed policy ARN to be attached to a permission set.</p>
     */
    inline AttachManagedPolicyToPermissionSetRequest& WithManagedPolicyArn(const char* value) { SetManagedPolicyArn(value); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_managedPolicyArn;
    bool m_managedPolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
