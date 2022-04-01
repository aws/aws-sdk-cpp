﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RequestLaunchTemplateData.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateLaunchTemplateVersionRequest : public EC2Request
  {
  public:
    CreateLaunchTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchTemplateVersion"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline CreateLaunchTemplateVersionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the launch template version on which to base the new
     * version. The new version inherits the same launch parameters as the source
     * version, except for parameters that you specify in
     * <code>LaunchTemplateData</code>. Snapshots applied to the block device mapping
     * are ignored when creating a new version unless they are explicitly included.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The information for the launch template.</p>
     */
    inline const RequestLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline void SetLaunchTemplateData(const RequestLaunchTemplateData& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = value; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline void SetLaunchTemplateData(RequestLaunchTemplateData&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::move(value); }

    /**
     * <p>The information for the launch template.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateData(const RequestLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}

    /**
     * <p>The information for the launch template.</p>
     */
    inline CreateLaunchTemplateVersionRequest& WithLaunchTemplateData(RequestLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;

    RequestLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
