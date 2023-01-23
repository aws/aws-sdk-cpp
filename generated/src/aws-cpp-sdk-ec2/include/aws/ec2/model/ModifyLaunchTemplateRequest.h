/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyLaunchTemplateRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyLaunchTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyLaunchTemplate"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyLaunchTemplateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline ModifyLaunchTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline ModifyLaunchTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline ModifyLaunchTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p> <p>You must specify either the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline ModifyLaunchTemplateRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline const Aws::String& GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline void SetDefaultVersion(const Aws::String& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline void SetDefaultVersion(Aws::String&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::move(value); }

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline void SetDefaultVersion(const char* value) { m_defaultVersionHasBeenSet = true; m_defaultVersion.assign(value); }

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline ModifyLaunchTemplateRequest& WithDefaultVersion(const Aws::String& value) { SetDefaultVersion(value); return *this;}

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline ModifyLaunchTemplateRequest& WithDefaultVersion(Aws::String&& value) { SetDefaultVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the launch template to set as the default version.</p>
     */
    inline ModifyLaunchTemplateRequest& WithDefaultVersion(const char* value) { SetDefaultVersion(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
