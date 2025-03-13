/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceProxy.h>
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
    AWS_DEVICEFARM_API ScheduleRunConfiguration() = default;
    AWS_DEVICEFARM_API ScheduleRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API ScheduleRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the extra data for the run. The extra data is a .zip file that AWS
     * Device Farm extracts to external data for Android or the app's sandbox for
     * iOS.</p>
     */
    inline const Aws::String& GetExtraDataPackageArn() const { return m_extraDataPackageArn; }
    inline bool ExtraDataPackageArnHasBeenSet() const { return m_extraDataPackageArnHasBeenSet; }
    template<typename ExtraDataPackageArnT = Aws::String>
    void SetExtraDataPackageArn(ExtraDataPackageArnT&& value) { m_extraDataPackageArnHasBeenSet = true; m_extraDataPackageArn = std::forward<ExtraDataPackageArnT>(value); }
    template<typename ExtraDataPackageArnT = Aws::String>
    ScheduleRunConfiguration& WithExtraDataPackageArn(ExtraDataPackageArnT&& value) { SetExtraDataPackageArn(std::forward<ExtraDataPackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const { return m_networkProfileArn; }
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }
    template<typename NetworkProfileArnT = Aws::String>
    void SetNetworkProfileArn(NetworkProfileArnT&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::forward<NetworkProfileArnT>(value); }
    template<typename NetworkProfileArnT = Aws::String>
    ScheduleRunConfiguration& WithNetworkProfileArn(NetworkProfileArnT&& value) { SetNetworkProfileArn(std::forward<NetworkProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    ScheduleRunConfiguration& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    ScheduleRunConfiguration& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of ARNs for your VPC endpoint configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpceConfigurationArns() const { return m_vpceConfigurationArns; }
    inline bool VpceConfigurationArnsHasBeenSet() const { return m_vpceConfigurationArnsHasBeenSet; }
    template<typename VpceConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetVpceConfigurationArns(VpceConfigurationArnsT&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = std::forward<VpceConfigurationArnsT>(value); }
    template<typename VpceConfigurationArnsT = Aws::Vector<Aws::String>>
    ScheduleRunConfiguration& WithVpceConfigurationArns(VpceConfigurationArnsT&& value) { SetVpceConfigurationArns(std::forward<VpceConfigurationArnsT>(value)); return *this;}
    template<typename VpceConfigurationArnsT = Aws::String>
    ScheduleRunConfiguration& AddVpceConfigurationArns(VpceConfigurationArnsT&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.emplace_back(std::forward<VpceConfigurationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device proxy to be configured on the device for the run.</p>
     */
    inline const DeviceProxy& GetDeviceProxy() const { return m_deviceProxy; }
    inline bool DeviceProxyHasBeenSet() const { return m_deviceProxyHasBeenSet; }
    template<typename DeviceProxyT = DeviceProxy>
    void SetDeviceProxy(DeviceProxyT&& value) { m_deviceProxyHasBeenSet = true; m_deviceProxy = std::forward<DeviceProxyT>(value); }
    template<typename DeviceProxyT = DeviceProxy>
    ScheduleRunConfiguration& WithDeviceProxy(DeviceProxyT&& value) { SetDeviceProxy(std::forward<DeviceProxyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input <code>CustomerArtifactPaths</code> object for the scheduled run
     * configuration.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const { return m_customerArtifactPaths; }
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }
    template<typename CustomerArtifactPathsT = CustomerArtifactPaths>
    void SetCustomerArtifactPaths(CustomerArtifactPathsT&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::forward<CustomerArtifactPathsT>(value); }
    template<typename CustomerArtifactPathsT = CustomerArtifactPaths>
    ScheduleRunConfiguration& WithCustomerArtifactPaths(CustomerArtifactPathsT&& value) { SetCustomerArtifactPaths(std::forward<CustomerArtifactPathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const { return m_radios; }
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }
    template<typename RadiosT = Radios>
    void SetRadios(RadiosT&& value) { m_radiosHasBeenSet = true; m_radios = std::forward<RadiosT>(value); }
    template<typename RadiosT = Radios>
    ScheduleRunConfiguration& WithRadios(RadiosT&& value) { SetRadios(std::forward<RadiosT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of upload ARNs for app packages to be installed with your app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuxiliaryApps() const { return m_auxiliaryApps; }
    inline bool AuxiliaryAppsHasBeenSet() const { return m_auxiliaryAppsHasBeenSet; }
    template<typename AuxiliaryAppsT = Aws::Vector<Aws::String>>
    void SetAuxiliaryApps(AuxiliaryAppsT&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps = std::forward<AuxiliaryAppsT>(value); }
    template<typename AuxiliaryAppsT = Aws::Vector<Aws::String>>
    ScheduleRunConfiguration& WithAuxiliaryApps(AuxiliaryAppsT&& value) { SetAuxiliaryApps(std::forward<AuxiliaryAppsT>(value)); return *this;}
    template<typename AuxiliaryAppsT = Aws::String>
    ScheduleRunConfiguration& AddAuxiliaryApps(AuxiliaryAppsT&& value) { m_auxiliaryAppsHasBeenSet = true; m_auxiliaryApps.emplace_back(std::forward<AuxiliaryAppsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have purchased unmetered device
     * slots, you must set this parameter to <code>unmetered</code> to make use of
     * them. Otherwise, your run counts against your metered time.</p> 
     */
    inline BillingMethod GetBillingMethod() const { return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(BillingMethod value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline ScheduleRunConfiguration& WithBillingMethod(BillingMethod value) { SetBillingMethod(value); return *this;}
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

    DeviceProxy m_deviceProxy;
    bool m_deviceProxyHasBeenSet = false;

    CustomerArtifactPaths m_customerArtifactPaths;
    bool m_customerArtifactPathsHasBeenSet = false;

    Radios m_radios;
    bool m_radiosHasBeenSet = false;

    Aws::Vector<Aws::String> m_auxiliaryApps;
    bool m_auxiliaryAppsHasBeenSet = false;

    BillingMethod m_billingMethod{BillingMethod::NOT_SET};
    bool m_billingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
