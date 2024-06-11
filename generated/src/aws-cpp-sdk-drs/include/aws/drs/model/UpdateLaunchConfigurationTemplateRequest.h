﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchDisposition.h>
#include <aws/drs/model/Licensing.h>
#include <aws/drs/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class UpdateLaunchConfigurationTemplateRequest : public DrsRequest
  {
  public:
    AWS_DRS_API UpdateLaunchConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchConfigurationTemplate"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Copy private IP.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline const Aws::String& GetExportBucketArn() const{ return m_exportBucketArn; }
    inline bool ExportBucketArnHasBeenSet() const { return m_exportBucketArnHasBeenSet; }
    inline void SetExportBucketArn(const Aws::String& value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn = value; }
    inline void SetExportBucketArn(Aws::String&& value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn = std::move(value); }
    inline void SetExportBucketArn(const char* value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn.assign(value); }
    inline UpdateLaunchConfigurationTemplateRequest& WithExportBucketArn(const Aws::String& value) { SetExportBucketArn(value); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithExportBucketArn(Aws::String&& value) { SetExportBucketArn(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithExportBucketArn(const char* value) { SetExportBucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch Configuration Template ID.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = std::move(value); }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline bool GetLaunchIntoSourceInstance() const{ return m_launchIntoSourceInstance; }
    inline bool LaunchIntoSourceInstanceHasBeenSet() const { return m_launchIntoSourceInstanceHasBeenSet; }
    inline void SetLaunchIntoSourceInstance(bool value) { m_launchIntoSourceInstanceHasBeenSet = true; m_launchIntoSourceInstance = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchIntoSourceInstance(bool value) { SetLaunchIntoSourceInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Licensing.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }
    inline void SetLicensing(const Licensing& value) { m_licensingHasBeenSet = true; m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensingHasBeenSet = true; m_licensing = std::move(value); }
    inline UpdateLaunchConfigurationTemplateRequest& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to activate post-launch actions.</p>
     */
    inline bool GetPostLaunchEnabled() const{ return m_postLaunchEnabled; }
    inline bool PostLaunchEnabledHasBeenSet() const { return m_postLaunchEnabledHasBeenSet; }
    inline void SetPostLaunchEnabled(bool value) { m_postLaunchEnabledHasBeenSet = true; m_postLaunchEnabled = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithPostLaunchEnabled(bool value) { SetPostLaunchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline UpdateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline UpdateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}
  private:

    bool m_copyPrivateIp;
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_exportBucketArn;
    bool m_exportBucketArnHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    LaunchDisposition m_launchDisposition;
    bool m_launchDispositionHasBeenSet = false;

    bool m_launchIntoSourceInstance;
    bool m_launchIntoSourceInstanceHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    bool m_postLaunchEnabled;
    bool m_postLaunchEnabledHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
