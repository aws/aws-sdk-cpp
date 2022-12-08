/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateManagedInstanceRoleRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateManagedInstanceRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateManagedInstanceRole"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed node where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-service-role.html">Create
     * an IAM service role for a hybrid environment</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>  <p>You can't specify an IAM
     * service-linked role for this parameter. You must create a unique role.</p>
     * 
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
