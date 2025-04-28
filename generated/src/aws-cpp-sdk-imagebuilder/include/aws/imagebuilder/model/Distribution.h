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
#include <aws/imagebuilder/model/SsmParameterConfiguration.h>
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
   * <p>Defines the settings for a specific Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Distribution">AWS
   * API Reference</a></p>
   */
  class Distribution
  {
  public:
    AWS_IMAGEBUILDER_API Distribution() = default;
    AWS_IMAGEBUILDER_API Distribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Distribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Distribution& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific AMI settings; for example, launch permissions or AMI tags.</p>
     */
    inline const AmiDistributionConfiguration& GetAmiDistributionConfiguration() const { return m_amiDistributionConfiguration; }
    inline bool AmiDistributionConfigurationHasBeenSet() const { return m_amiDistributionConfigurationHasBeenSet; }
    template<typename AmiDistributionConfigurationT = AmiDistributionConfiguration>
    void SetAmiDistributionConfiguration(AmiDistributionConfigurationT&& value) { m_amiDistributionConfigurationHasBeenSet = true; m_amiDistributionConfiguration = std::forward<AmiDistributionConfigurationT>(value); }
    template<typename AmiDistributionConfigurationT = AmiDistributionConfiguration>
    Distribution& WithAmiDistributionConfiguration(AmiDistributionConfigurationT&& value) { SetAmiDistributionConfiguration(std::forward<AmiDistributionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container distribution settings for encryption, licensing, and sharing in a
     * specific Region.</p>
     */
    inline const ContainerDistributionConfiguration& GetContainerDistributionConfiguration() const { return m_containerDistributionConfiguration; }
    inline bool ContainerDistributionConfigurationHasBeenSet() const { return m_containerDistributionConfigurationHasBeenSet; }
    template<typename ContainerDistributionConfigurationT = ContainerDistributionConfiguration>
    void SetContainerDistributionConfiguration(ContainerDistributionConfigurationT&& value) { m_containerDistributionConfigurationHasBeenSet = true; m_containerDistributionConfiguration = std::forward<ContainerDistributionConfigurationT>(value); }
    template<typename ContainerDistributionConfigurationT = ContainerDistributionConfiguration>
    Distribution& WithContainerDistributionConfiguration(ContainerDistributionConfigurationT&& value) { SetContainerDistributionConfiguration(std::forward<ContainerDistributionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The License Manager Configuration to associate with the AMI in the specified
     * Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const { return m_licenseConfigurationArns; }
    inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::forward<LicenseConfigurationArnsT>(value); }
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    Distribution& WithLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { SetLicenseConfigurationArns(std::forward<LicenseConfigurationArnsT>(value)); return *this;}
    template<typename LicenseConfigurationArnsT = Aws::String>
    Distribution& AddLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.emplace_back(std::forward<LicenseConfigurationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A group of launchTemplateConfiguration settings that apply to image
     * distribution for specified accounts.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfiguration>& GetLaunchTemplateConfigurations() const { return m_launchTemplateConfigurations; }
    inline bool LaunchTemplateConfigurationsHasBeenSet() const { return m_launchTemplateConfigurationsHasBeenSet; }
    template<typename LaunchTemplateConfigurationsT = Aws::Vector<LaunchTemplateConfiguration>>
    void SetLaunchTemplateConfigurations(LaunchTemplateConfigurationsT&& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations = std::forward<LaunchTemplateConfigurationsT>(value); }
    template<typename LaunchTemplateConfigurationsT = Aws::Vector<LaunchTemplateConfiguration>>
    Distribution& WithLaunchTemplateConfigurations(LaunchTemplateConfigurationsT&& value) { SetLaunchTemplateConfigurations(std::forward<LaunchTemplateConfigurationsT>(value)); return *this;}
    template<typename LaunchTemplateConfigurationsT = LaunchTemplateConfiguration>
    Distribution& AddLaunchTemplateConfigurations(LaunchTemplateConfigurationsT&& value) { m_launchTemplateConfigurationsHasBeenSet = true; m_launchTemplateConfigurations.emplace_back(std::forward<LaunchTemplateConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configure export settings to deliver disk images created from your image
     * build, using a file format that is compatible with your VMs in that Region.</p>
     */
    inline const S3ExportConfiguration& GetS3ExportConfiguration() const { return m_s3ExportConfiguration; }
    inline bool S3ExportConfigurationHasBeenSet() const { return m_s3ExportConfigurationHasBeenSet; }
    template<typename S3ExportConfigurationT = S3ExportConfiguration>
    void SetS3ExportConfiguration(S3ExportConfigurationT&& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = std::forward<S3ExportConfigurationT>(value); }
    template<typename S3ExportConfigurationT = S3ExportConfiguration>
    Distribution& WithS3ExportConfiguration(S3ExportConfigurationT&& value) { SetS3ExportConfiguration(std::forward<S3ExportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Windows faster-launching configurations to use for AMI distribution.</p>
     */
    inline const Aws::Vector<FastLaunchConfiguration>& GetFastLaunchConfigurations() const { return m_fastLaunchConfigurations; }
    inline bool FastLaunchConfigurationsHasBeenSet() const { return m_fastLaunchConfigurationsHasBeenSet; }
    template<typename FastLaunchConfigurationsT = Aws::Vector<FastLaunchConfiguration>>
    void SetFastLaunchConfigurations(FastLaunchConfigurationsT&& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations = std::forward<FastLaunchConfigurationsT>(value); }
    template<typename FastLaunchConfigurationsT = Aws::Vector<FastLaunchConfiguration>>
    Distribution& WithFastLaunchConfigurations(FastLaunchConfigurationsT&& value) { SetFastLaunchConfigurations(std::forward<FastLaunchConfigurationsT>(value)); return *this;}
    template<typename FastLaunchConfigurationsT = FastLaunchConfiguration>
    Distribution& AddFastLaunchConfigurations(FastLaunchConfigurationsT&& value) { m_fastLaunchConfigurationsHasBeenSet = true; m_fastLaunchConfigurations.emplace_back(std::forward<FastLaunchConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains settings to update Amazon Web Services Systems Manager (SSM)
     * Parameter Store Parameters with output AMI IDs from the build by target
     * Region.</p>
     */
    inline const Aws::Vector<SsmParameterConfiguration>& GetSsmParameterConfigurations() const { return m_ssmParameterConfigurations; }
    inline bool SsmParameterConfigurationsHasBeenSet() const { return m_ssmParameterConfigurationsHasBeenSet; }
    template<typename SsmParameterConfigurationsT = Aws::Vector<SsmParameterConfiguration>>
    void SetSsmParameterConfigurations(SsmParameterConfigurationsT&& value) { m_ssmParameterConfigurationsHasBeenSet = true; m_ssmParameterConfigurations = std::forward<SsmParameterConfigurationsT>(value); }
    template<typename SsmParameterConfigurationsT = Aws::Vector<SsmParameterConfiguration>>
    Distribution& WithSsmParameterConfigurations(SsmParameterConfigurationsT&& value) { SetSsmParameterConfigurations(std::forward<SsmParameterConfigurationsT>(value)); return *this;}
    template<typename SsmParameterConfigurationsT = SsmParameterConfiguration>
    Distribution& AddSsmParameterConfigurations(SsmParameterConfigurationsT&& value) { m_ssmParameterConfigurationsHasBeenSet = true; m_ssmParameterConfigurations.emplace_back(std::forward<SsmParameterConfigurationsT>(value)); return *this; }
    ///@}
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

    Aws::Vector<SsmParameterConfiguration> m_ssmParameterConfigurations;
    bool m_ssmParameterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
