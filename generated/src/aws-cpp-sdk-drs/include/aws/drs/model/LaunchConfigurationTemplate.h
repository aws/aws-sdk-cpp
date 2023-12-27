/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchDisposition.h>
#include <aws/drs/model/Licensing.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/TargetInstanceTypeRightSizingMethod.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Account level Launch Configuration Template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  class LaunchConfigurationTemplate
  {
  public:
    AWS_DRS_API LaunchConfigurationTemplate();
    AWS_DRS_API LaunchConfigurationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchConfigurationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Copy private IP.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }

    /**
     * <p>Copy private IP.</p>
     */
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }

    /**
     * <p>Copy private IP.</p>
     */
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }

    /**
     * <p>Copy private IP.</p>
     */
    inline LaunchConfigurationTemplate& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}


    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy tags.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Copy tags.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Copy tags.</p>
     */
    inline LaunchConfigurationTemplate& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline const Aws::String& GetExportBucketArn() const{ return m_exportBucketArn; }

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline bool ExportBucketArnHasBeenSet() const { return m_exportBucketArnHasBeenSet; }

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline void SetExportBucketArn(const Aws::String& value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn = value; }

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline void SetExportBucketArn(Aws::String&& value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn = std::move(value); }

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline void SetExportBucketArn(const char* value) { m_exportBucketArnHasBeenSet = true; m_exportBucketArn.assign(value); }

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline LaunchConfigurationTemplate& WithExportBucketArn(const Aws::String& value) { SetExportBucketArn(value); return *this;}

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline LaunchConfigurationTemplate& WithExportBucketArn(Aws::String&& value) { SetExportBucketArn(std::move(value)); return *this;}

    /**
     * <p>S3 bucket ARN to export Source Network templates.</p>
     */
    inline LaunchConfigurationTemplate& WithExportBucketArn(const char* value) { SetExportBucketArn(value); return *this;}


    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}


    /**
     * <p>Launch disposition.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }

    /**
     * <p>Launch disposition.</p>
     */
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }

    /**
     * <p>Launch disposition.</p>
     */
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }

    /**
     * <p>Launch disposition.</p>
     */
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = std::move(value); }

    /**
     * <p>Launch disposition.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}

    /**
     * <p>Launch disposition.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}


    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline bool GetLaunchIntoSourceInstance() const{ return m_launchIntoSourceInstance; }

    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline bool LaunchIntoSourceInstanceHasBeenSet() const { return m_launchIntoSourceInstanceHasBeenSet; }

    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline void SetLaunchIntoSourceInstance(bool value) { m_launchIntoSourceInstanceHasBeenSet = true; m_launchIntoSourceInstance = value; }

    /**
     * <p>DRS will set the 'launch into instance ID' of any source server when
     * performing a drill, recovery or failback to the previous region or availability
     * zone, using the instance ID of the source instance.</p>
     */
    inline LaunchConfigurationTemplate& WithLaunchIntoSourceInstance(bool value) { SetLaunchIntoSourceInstance(value); return *this;}


    /**
     * <p>Licensing.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }

    /**
     * <p>Licensing.</p>
     */
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }

    /**
     * <p>Licensing.</p>
     */
    inline void SetLicensing(const Licensing& value) { m_licensingHasBeenSet = true; m_licensing = value; }

    /**
     * <p>Licensing.</p>
     */
    inline void SetLicensing(Licensing&& value) { m_licensingHasBeenSet = true; m_licensing = std::move(value); }

    /**
     * <p>Licensing.</p>
     */
    inline LaunchConfigurationTemplate& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}

    /**
     * <p>Licensing.</p>
     */
    inline LaunchConfigurationTemplate& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}


    /**
     * <p>Post-launch actions activated.</p>
     */
    inline bool GetPostLaunchEnabled() const{ return m_postLaunchEnabled; }

    /**
     * <p>Post-launch actions activated.</p>
     */
    inline bool PostLaunchEnabledHasBeenSet() const { return m_postLaunchEnabledHasBeenSet; }

    /**
     * <p>Post-launch actions activated.</p>
     */
    inline void SetPostLaunchEnabled(bool value) { m_postLaunchEnabledHasBeenSet = true; m_postLaunchEnabled = value; }

    /**
     * <p>Post-launch actions activated.</p>
     */
    inline LaunchConfigurationTemplate& WithPostLaunchEnabled(bool value) { SetPostLaunchEnabled(value); return *this;}


    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline LaunchConfigurationTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = std::move(value); }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline LaunchConfigurationTemplate& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline LaunchConfigurationTemplate& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
