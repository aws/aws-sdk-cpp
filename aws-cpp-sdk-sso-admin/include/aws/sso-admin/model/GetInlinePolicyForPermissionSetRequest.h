﻿/**
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
  class AWS_SSOADMIN_API GetInlinePolicyForPermissionSetRequest : public SSOAdminRequest
  {
  public:
    GetInlinePolicyForPermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInlinePolicyForPermissionSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The ARN of the permission set.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
