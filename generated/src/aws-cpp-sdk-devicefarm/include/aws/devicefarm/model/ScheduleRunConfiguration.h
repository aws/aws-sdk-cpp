/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScheduleRunConfiguration
  {
  public:
    AWS_DEVICEFARM_API ScheduleRunConfiguration();
    AWS_DEVICEFARM_API ScheduleRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API ScheduleRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm extracts to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline const Aws::String& GetExtraDataPackageArn() const{ return m_extraDataPackageArn; }
    inline bool ExtraDataPackageArnHasBeenSet() const { return m_extraDataPackageArnHasBeenSet; }
    inline void SetExtraDataPackageArn(const Aws::String& value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn = value; }
    inline void SetExtraDataPackageArn(Aws::String&& value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn = std::move(value); }
    inline void SetExtraDataPackageArn(const char* value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn.assign(value); }
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(const Aws::String& value) { SetExtraDataPackageArn(value); return *this;}
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(Aws::String&& value) { SetExtraDataPackageArn(std::move(value)); return *this;}
    inline ScheduleRunConfiguration& WithExtraDataPackageArn(const char* value) { SetExtraDataPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }
    inline ScheduleRunConfiguration& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}
    inline ScheduleRunConfiguration& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}
    inline ScheduleRunConfiguration& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline ScheduleRunConfiguration& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline ScheduleRunConfiguration& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline ScheduleRunConfiguration& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline ScheduleRunConfiguration& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline ScheduleRunConfiguration& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of ARNs for your VPC endpoint configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpceConfigurationArns() const{ return m_vpceConfigurationArns; }
    inline bool VpceConfigurationArnsHasBeenSet() const { return m_vpceConfigurationArnsHasBeenSet; }
    inline void SetVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = value; }
    inline void SetVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = std::move(value); }
    inline ScheduleRunConfiguration& WithVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { SetVpceConfigurationArns(value); return *this;}
    inline ScheduleRunConfiguration& WithVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { SetVpceConfigurationArns(std::move(value)); return *this;}
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(const Aws::String& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(Aws::String&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(std::move(value)); return *this; }
    inline ScheduleRunConfiguration& AddVpceConfigurationArns(const char* value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const{ return m_customerArtifactPaths; }
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }
    inline void SetCustomerArtifactPaths(const CustomerArtifactPaths& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = value; }
    inline void SetCustomerArtifactPaths(CustomerArtifactPaths&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::move(value); }
    inline ScheduleRunConfiguration& WithCustomerArtifactPaths(const CustomerArtifactPaths& value) { SetCustomerArtifactPaths(value); return *this;}
    inline ScheduleRunConfiguration& WithCustomerArtifactPaths(CustomerArtifactPaths&& value) { SetCustomerArtifactPaths(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const{ return m_radios; }
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }
    inline void SetRadios(const Radios& value) { m_radiosHasBeenSet = true; m_radios = value; }
    inline void SetRadios(Radios&& value) { m_radiosHasBeenSet = true; m_radios = std::move(value); }
    inline ScheduleRunConfiguration& WithRadios(const Radios& value) { SetRadios(value); return *this;}
    inline ScheduleRunConfiguration& WithRadios(Radios&& value) { SetRadios(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of upload ARNs for app packages to be installed with your app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuxiliaryApps() const{ return m_auxiliaryApps; }
    inline bool AuxiliaryAppsHasBeenSet() const { return m_auxiliaryAppsHasBeenSet; }
    inline void SetAuxiliaryApps(const Aws::Vector<Aws::String>& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps = value; }
    inline void SetAuxiliaryApps(Aws::Vector<Aws::String>&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps = std::move(value); }
    inline ScheduleRunConfiguration& WithAuxiliaryApps(const Aws::Vector<Aws::String>& value) { SetAuxiliaryApps(value); return *this;}
    inline ScheduleRunConfiguration& WithAuxiliaryApps(Aws::Vector<Aws::String>&& value) { SetAuxiliaryApps(std::move(value)); return *this;}
    inline ScheduleRunConfiguration& AddAuxiliaryApps(const Aws::String& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(value); return *this; }
    inline ScheduleRunConfiguration& AddAuxiliaryApps(Aws::String&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(std::move(value)); return *this; }
    inline ScheduleRunConfiguration& AddAuxiliaryApps(const char* value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have purchased unmetered device
     * slots, you must set this parameter to <code>unmetered</code> to make use of
     * them. Otherwise, your run counts against your metered time.</p> 
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }
    inline ScheduleRunConfiguration& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}
    inline ScheduleRunConfiguration& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_extraDataPackageArn;
    bool m_extraDataPackageArnHasBeenSet = false;

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpceConfigurationArns;
    bool m_vpceConfigurationArnsHasBeenSet = false;

    CustomerArtifactPaths m_customerArtifactPaths;
    bool m_customerArtifactPathsHasBeenSet = false;

    Radios m_radios;
    bool m_radiosHasBeenSet = false;

    Aws::Vector<Aws::String> m_auxiliaryApps;
    bool m_auxiliaryAppsHasBeenSet = false;

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
