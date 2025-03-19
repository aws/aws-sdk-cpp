/**
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
    AWS_DRS_API UpdateLaunchConfigurationTemplateRequest() = default;

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
    inline bool GetCopyPrivateIp() const { return m_copyPrivateIp; }
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline const Aws::String& GetExportBucketArn() const { return m_exportBucketArn; }
    inline bool ExportBucketArnHasBeenSet() const { return m_exportBucketArnHasBeenSet; }
    template<typename ExportBucketArnT = Aws::String>
    void SetExportBucketArn(ExportBucketArnT&& value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn = std::forward<ExportBucketArnT>(value); }
    template<typename ExportBucketArnT = Aws::String>
    UpdateLaunchConfigurationTemplateRequest& WithExportBucketArn(ExportBucketArnT&& value) { SetExportBucketArn(std::forward<ExportBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch Configuration Template ID.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const { return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    void SetLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::forward<LaunchConfigurationTemplateIDT>(value); }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    UpdateLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { SetLaunchConfigurationTemplateID(std::forward<LaunchConfigurationTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition.</p>
     */
    inline LaunchDisposition GetLaunchDisposition() const { return m_launchDisposition; }
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }
    inline void SetLaunchDisposition(LaunchDisposition value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchDisposition(LaunchDisposition value) { SetLaunchDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline bool GetLaunchIntoSourceInstance() const { return m_launchIntoSourceInstance; }
    inline bool LaunchIntoSourceInstanceHasBeenSet() const { return m_launchIntoSourceInstanceHasBeenSet; }
    inline void SetLaunchIntoSourceInstance(bool value) { m_launchIntoSourceInstanceHasBeenSet = true; m_launchIntoSourceInstance = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchIntoSourceInstance(bool value) { SetLaunchIntoSourceInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Licensing.</p>
     */
    inline const Licensing& GetLicensing() const { return m_licensing; }
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }
    template<typename LicensingT = Licensing>
    void SetLicensing(LicensingT&& value) { m_licensingHasBeenSet = true; m_licensing = std::forward<LicensingT>(value); }
    template<typename LicensingT = Licensing>
    UpdateLaunchConfigurationTemplateRequest& WithLicensing(LicensingT&& value) { SetLicensing(std::forward<LicensingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to activate post-launch actions.</p>
     */
    inline bool GetPostLaunchEnabled() const { return m_postLaunchEnabled; }
    inline bool PostLaunchEnabledHasBeenSet() const { return m_postLaunchEnabledHasBeenSet; }
    inline void SetPostLaunchEnabled(bool value) { m_postLaunchEnabledHasBeenSet = true; m_postLaunchEnabled = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithPostLaunchEnabled(bool value) { SetPostLaunchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethod() const { return m_targetInstanceTypeRightSizingMethod; }
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    ///@}
  private:

    bool m_copyPrivateIp{false};
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_exportBucketArn;
    bool m_exportBucketArnHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    LaunchDisposition m_launchDisposition{LaunchDisposition::NOT_SET};
    bool m_launchDispositionHasBeenSet = false;

    bool m_launchIntoSourceInstance{false};
    bool m_launchIntoSourceInstanceHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    bool m_postLaunchEnabled{false};
    bool m_postLaunchEnabledHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod{TargetInstanceTypeRightSizingMethod::NOT_SET};
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
