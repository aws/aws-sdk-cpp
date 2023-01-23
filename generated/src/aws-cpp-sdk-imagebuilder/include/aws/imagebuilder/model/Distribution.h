/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/AmiDistributionConfiguration.h>
#include <aws/imagebuilder/model/ContainerDistributionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/S3ExportConfiguration.h>
#include <aws/imagebuilder/model/LaunchTemplateConfiguration.h>
#include <aws/imagebuilder/model/FastLaunchConfiguration.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p> Defines the settings for a specific Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Distribution">AWS
   * API Reference</a></p>
   */
  class Distribution
  {
  public:
    AWS_IMAGEBUILDER_API Distribution();
    AWS_IMAGEBUILDER_API Distribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Distribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The target Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The target Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The target Region.</p>
     */
    inline Distribution& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline Distribution& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline Distribution& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline const AmiDistributionConfiguration& GetAmiDistributionConfiguration() const{ return m_amiDistributionConfiguration; }

    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline bool AmiDistributionConfigurationHasBeenSet() const { return m_amiDistributionConfigurationHasBeenSet; }

    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline void SetAmiDistributionConfiguration(const AmiDistributionConfiguration& value) { m_amiDistributionConfigurationHasBeenSet = true; m_amiDistributionConfiguration = value; }

    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline void SetAmiDistributionConfiguration(AmiDistributionConfiguration&& value) { m_amiDistributionConfigurationHasBeenSet = true; m_amiDistributionConfiguration = std::move(value); }

    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline Distribution& WithAmiDistributionConfiguration(const AmiDistributionConfiguration& value) { SetAmiDistributionConfiguration(value); return *this;}

    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline Distribution& WithAmiDistributionConfiguration(AmiDistributionConfiguration&& value) { SetAmiDistributionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline const ContainerDistributionConfiguration& GetContainerDistributionConfiguration() const{ return m_containerDistributionConfiguration; }

    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline bool ContainerDistributionConfigurationHasBeenSet() const { return m_containerDistributionConfigurationHasBeenSet; }

    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline void SetContainerDistributionConfiguration(const ContainerDistributionConfiguration& value) { m_containerDistributionConfigurationHasBeenSet = true; m_containerDistributionConfiguration = value; }

    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline void SetContainerDistributionConfiguration(ContainerDistributionConfiguration&& value) { m_containerDistributionConfigurationHasBeenSet = true; m_containerDistributionConfiguration = std::move(value); }

    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline Distribution& WithContainerDistributionConfiguration(const ContainerDistributionConfiguration& value) { SetContainerDistributionConfiguration(value); return *this;}

    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline Distribution& WithContainerDistributionConfiguration(ContainerDistributionConfiguration&& value) { SetContainerDistributionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const{ return m_licenseConfigurationArns; }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline void SetLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = value; }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline void SetLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::move(value); }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline Distribution& WithLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { SetLicenseConfigurationArns(value); return *this;}

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline Distribution& WithLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { SetLicenseConfigurationArns(std::move(value)); return *this;}

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline Distribution& AddLicenseConfigurationArns(const Aws::String& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline Distribution& AddLicenseConfigurationArns(Aws::String&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline Distribution& AddLicenseConfigurationArns(const char* value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }


    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfiguration>& GetLaunchTemplateConfigurations() const{ return m_launchTemplateConfigurations; }

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline bool LaunchTemplateConfigurationsHasBeenSet() const { return m_launchTemplateConfigurationsHasBeenSet; }

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline void SetLaunchTemplateConfigurations(const Aws::Vector<LaunchTemplateConfiguration>& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations = value; }

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline void SetLaunchTemplateConfigurations(Aws::Vector<LaunchTemplateConfiguration>&& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations = std::move(value); }

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline Distribution& WithLaunchTemplateConfigurations(const Aws::Vector<LaunchTemplateConfiguration>& value) { SetLaunchTemplateConfigurations(value); return *this;}

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline Distribution& WithLaunchTemplateConfigurations(Aws::Vector<LaunchTemplateConfiguration>&& value) { SetLaunchTemplateConfigurations(std::move(value)); return *this;}

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline Distribution& AddLaunchTemplateConfigurations(const LaunchTemplateConfiguration& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations.push_back(value); return *this; }

    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline Distribution& AddLaunchTemplateConfigurations(LaunchTemplateConfiguration&& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline const S3ExportConfiguration& GetS3ExportConfiguration() const{ return m_s3ExportConfiguration; }

    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline bool S3ExportConfigurationHasBeenSet() const { return m_s3ExportConfigurationHasBeenSet; }

    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline void SetS3ExportConfiguration(const S3ExportConfiguration& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = value; }

    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline void SetS3ExportConfiguration(S3ExportConfiguration&& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = std::move(value); }

    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline Distribution& WithS3ExportConfiguration(const S3ExportConfiguration& value) { SetS3ExportConfiguration(value); return *this;}

    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline Distribution& WithS3ExportConfiguration(S3ExportConfiguration&& value) { SetS3ExportConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline const Aws::Vector<FastLaunchConfiguration>& GetFastLaunchConfigurations() const{ return m_fastLaunchConfigurations; }

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline bool FastLaunchConfigurationsHasBeenSet() const { return m_fastLaunchConfigurationsHasBeenSet; }

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline void SetFastLaunchConfigurations(const Aws::Vector<FastLaunchConfiguration>& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations = value; }

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline void SetFastLaunchConfigurations(Aws::Vector<FastLaunchConfiguration>&& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations = std::move(value); }

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline Distribution& WithFastLaunchConfigurations(const Aws::Vector<FastLaunchConfiguration>& value) { SetFastLaunchConfigurations(value); return *this;}

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline Distribution& WithFastLaunchConfigurations(Aws::Vector<FastLaunchConfiguration>&& value) { SetFastLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline Distribution& AddFastLaunchConfigurations(const FastLaunchConfiguration& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline Distribution& AddFastLaunchConfigurations(FastLaunchConfiguration&& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    AmiDistributionConfiguration m_amiDistributionConfiguration;
    bool m_amiDistributionConfigurationHasBeenSet = false;

    ContainerDistributionConfiguration m_containerDistributionConfiguration;
    bool m_containerDistributionConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet = false;

    Aws::Vector<LaunchTemplateConfiguration> m_launchTemplateConfigurations;
    bool m_launchTemplateConfigurationsHasBeenSet = false;

    S3ExportConfiguration m_s3ExportConfiguration;
    bool m_s3ExportConfigurationHasBeenSet = false;

    Aws::Vector<FastLaunchConfiguration> m_fastLaunchConfigurations;
    bool m_fastLaunchConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
