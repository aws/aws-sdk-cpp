/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/AmiDistributionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Defines the settings for a specific Region. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Distribution">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API Distribution
  {
  public:
    Distribution();
    Distribution(Aws::Utils::Json::JsonView jsonValue);
    Distribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target Region. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The target Region. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The target Region. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The target Region. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The target Region. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The target Region. </p>
     */
    inline Distribution& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The target Region. </p>
     */
    inline Distribution& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The target Region. </p>
     */
    inline Distribution& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline const AmiDistributionConfiguration& GetAmiDistributionConfiguration() const{ return m_amiDistributionConfiguration; }

    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline bool AmiDistributionConfigurationHasBeenSet() const { return m_amiDistributionConfigurationHasBeenSet; }

    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline void SetAmiDistributionConfiguration(const AmiDistributionConfiguration& value) { m_amiDistributionConfigurationHasBeenSet = true; m_amiDistributionConfiguration = value; }

    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline void SetAmiDistributionConfiguration(AmiDistributionConfiguration&& value) { m_amiDistributionConfigurationHasBeenSet = true; m_amiDistributionConfiguration = std::move(value); }

    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline Distribution& WithAmiDistributionConfiguration(const AmiDistributionConfiguration& value) { SetAmiDistributionConfiguration(value); return *this;}

    /**
     * <p>The specific AMI settings (for example, launch permissions, AMI tags). </p>
     */
    inline Distribution& WithAmiDistributionConfiguration(AmiDistributionConfiguration&& value) { SetAmiDistributionConfiguration(std::move(value)); return *this;}


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

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet;

    AmiDistributionConfiguration m_amiDistributionConfiguration;
    bool m_amiDistributionConfigurationHasBeenSet;

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
