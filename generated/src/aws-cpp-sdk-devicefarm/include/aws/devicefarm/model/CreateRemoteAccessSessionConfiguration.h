/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceProxy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration settings for a remote access session, including billing
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSessionConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateRemoteAccessSessionConfiguration
  {
  public:
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration() = default;
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline BillingMethod GetBillingMethod() const { return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(BillingMethod value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline CreateRemoteAccessSessionConfiguration& WithBillingMethod(BillingMethod value) { SetBillingMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpceConfigurationArns() const { return m_vpceConfigurationArns; }
    inline bool VpceConfigurationArnsHasBeenSet() const { return m_vpceConfigurationArnsHasBeenSet; }
    template<typename VpceConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetVpceConfigurationArns(VpceConfigurationArnsT&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = std::forward<VpceConfigurationArnsT>(value); }
    template<typename VpceConfigurationArnsT = Aws::Vector<Aws::String>>
    CreateRemoteAccessSessionConfiguration& WithVpceConfigurationArns(VpceConfigurationArnsT&& value) { SetVpceConfigurationArns(std::forward<VpceConfigurationArnsT>(value)); return *this;}
    template<typename VpceConfigurationArnsT = Aws::String>
    CreateRemoteAccessSessionConfiguration& AddVpceConfigurationArns(VpceConfigurationArnsT&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.emplace_back(std::forward<VpceConfigurationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device proxy to be configured on the device for the remote access
     * session.</p>
     */
    inline const DeviceProxy& GetDeviceProxy() const { return m_deviceProxy; }
    inline bool DeviceProxyHasBeenSet() const { return m_deviceProxyHasBeenSet; }
    template<typename DeviceProxyT = DeviceProxy>
    void SetDeviceProxy(DeviceProxyT&& value) { m_deviceProxyHasBeenSet = true; m_deviceProxy = std::forward<DeviceProxyT>(value); }
    template<typename DeviceProxyT = DeviceProxy>
    CreateRemoteAccessSessionConfiguration& WithDeviceProxy(DeviceProxyT&& value) { SetDeviceProxy(std::forward<DeviceProxyT>(value)); return *this;}
    ///@}
  private:

    BillingMethod m_billingMethod{BillingMethod::NOT_SET};
    bool m_billingMethodHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpceConfigurationArns;
    bool m_vpceConfigurationArnsHasBeenSet = false;

    DeviceProxy m_deviceProxy;
    bool m_deviceProxyHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
