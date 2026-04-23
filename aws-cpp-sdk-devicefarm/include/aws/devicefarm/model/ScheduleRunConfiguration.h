/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/CustomerArtifactPaths.h>
#include <aws/devicefarm/model/Radios.h>
#include <aws/devicefarm/model/BillingMethod.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the settings for a run. Includes things like location, radio
   * states, auxiliary apps, and network profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRunConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ScheduleRunConfiguration
  {
  public:
    ScheduleRunConfiguration();
    ScheduleRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ScheduleRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline const Aws::String& GetExtraDataPackageArn() const{ return m_extraDataPackageArn; }

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline bool ExtraDataPackageArnHasBeenSet() const { return m_extraDataPackageArnHasBeenSet; }

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline void SetExtraDataPackageArn(const Aws::String& value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn = value; }

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline void SetExtraDataPackageArn(Aws::String&& value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn = std::move(value); }

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline void SetExtraDataPackageArn(const char* value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn.assign(value); }

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(const Aws::String& value) { SetExtraDataPackageArn(value); return *this;}

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(Aws::String&& value) { SetExtraDataPackageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm will extract to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(const char* value) { SetExtraDataPackageArn(value); return *this;}


    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline ScheduleRunConfiguration& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline ScheduleRunConfiguration& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline ScheduleRunConfiguration& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline ScheduleRunConfiguration& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline ScheduleRunConfiguration& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline ScheduleRunConfiguration& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline ScheduleRunConfiguration& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline ScheduleRunConfiguration& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpceConfigurationArns() const{ return m_vpceConfigurationArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline bool VpceConfigurationArnsHasBeenSet() const { return m_vpceConfigurationArnsHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline void SetVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline void SetVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline ScheduleRunConfiguration& WithVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { SetVpceConfigurationArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline ScheduleRunConfiguration& WithVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { SetVpceConfigurationArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(const Aws::String& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(Aws::String&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for your VPC endpoint
     * configurations.</p>
     */
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(const char* value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }


    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const{ return m_customerArtifactPaths; }

    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }

    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline void SetCustomerArtifactPaths(const CustomerArtifactPaths& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = value; }

    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline void SetCustomerArtifactPaths(CustomerArtifactPaths&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::move(value); }

    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline ScheduleRunConfiguration& WithCustomerArtifactPaths(const CustomerArtifactPaths& value) { SetCustomerArtifactPaths(value); return *this;}

    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline ScheduleRunConfiguration& WithCustomerArtifactPaths(CustomerArtifactPaths&& value) { SetCustomerArtifactPaths(std::move(value)); return *this;}


    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const{ return m_radios; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline void SetRadios(const Radios& value) { m_radiosHasBeenSet = true; m_radios = value; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline void SetRadios(Radios&& value) { m_radiosHasBeenSet = true; m_radios = std::move(value); }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline ScheduleRunConfiguration& WithRadios(const Radios& value) { SetRadios(value); return *this;}

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline ScheduleRunConfiguration& WithRadios(Radios&& value) { SetRadios(std::move(value)); return *this;}


    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuxiliaryApps() const{ return m_auxiliaryApps; }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline bool AuxiliaryAppsHasBeenSet() const { return m_auxiliaryAppsHasBeenSet; }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline void SetAuxiliaryApps(const Aws::Vector<Aws::String>& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps = value; }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline void SetAuxiliaryApps(Aws::Vector<Aws::String>&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps = std::move(value); }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline ScheduleRunConfiguration& WithAuxiliaryApps(const Aws::Vector<Aws::String>& value) { SetAuxiliaryApps(value); return *this;}

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline ScheduleRunConfiguration& WithAuxiliaryApps(Aws::Vector<Aws::String>&& value) { SetAuxiliaryApps(std::move(value)); return *this;}

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline ScheduleRunConfiguration& AddAuxiliaryApps(const Aws::String& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(value); return *this; }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline ScheduleRunConfiguration& AddAuxiliaryApps(Aws::String&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of auxiliary apps for the run.</p>
     */
    inline ScheduleRunConfiguration& AddAuxiliaryApps(const char* value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(value); return *this; }


    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline ScheduleRunConfiguration& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>
     */
    inline ScheduleRunConfiguration& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}

  private:

    Aws::String m_extraDataPackageArn;
    bool m_extraDataPackageArnHasBeenSet;

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet;

    Aws::String m_locale;
    bool m_localeHasBeenSet;

    Location m_location;
    bool m_locationHasBeenSet;

    Aws::Vector<Aws::String> m_vpceConfigurationArns;
    bool m_vpceConfigurationArnsHasBeenSet;

    CustomerArtifactPaths m_customerArtifactPaths;
    bool m_customerArtifactPathsHasBeenSet;

    Radios m_radios;
    bool m_radiosHasBeenSet;

    Aws::Vector<Aws::String> m_auxiliaryApps;
    bool m_auxiliaryAppsHasBeenSet;

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
