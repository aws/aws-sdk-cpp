﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ProvisionTargetType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class AWS_SSOADMIN_API ProvisionPermissionSetRequest : public SSOAdminRequest
  {
  public:
    ProvisionPermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionPermissionSet"; }

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
    inline ProvisionPermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline ProvisionPermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SSO instance under which the operation will be executed. For
     * more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline ProvisionPermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


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
    inline ProvisionPermissionSetRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline ProvisionPermissionSetRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the permission set.</p>
     */
    inline ProvisionPermissionSetRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}


    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline ProvisionPermissionSetRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline ProvisionPermissionSetRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>TargetID is an Amazon Web Services account identifier, typically a 10-12
     * digit string (For example, 123456789012).</p>
     */
    inline ProvisionPermissionSetRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const ProvisionTargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline void SetTargetType(const ProvisionTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline void SetTargetType(ProvisionTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline ProvisionPermissionSetRequest& WithTargetType(const ProvisionTargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline ProvisionPermissionSetRequest& WithTargetType(ProvisionTargetType&& value) { SetTargetType(std::move(value)); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    ProvisionTargetType m_targetType;
    bool m_targetTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
