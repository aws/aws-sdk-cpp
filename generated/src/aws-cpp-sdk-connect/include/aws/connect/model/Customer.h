/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DeviceInfo.h>
#include <aws/connect/model/ParticipantCapabilities.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the Customer on the contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Customer">AWS
   * API Reference</a></p>
   */
  class Customer
  {
  public:
    AWS_CONNECT_API Customer() = default;
    AWS_CONNECT_API Customer(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Customer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information regarding Customer’s device.</p>
     */
    inline const DeviceInfo& GetDeviceInfo() const { return m_deviceInfo; }
    inline bool DeviceInfoHasBeenSet() const { return m_deviceInfoHasBeenSet; }
    template<typename DeviceInfoT = DeviceInfo>
    void SetDeviceInfo(DeviceInfoT&& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = std::forward<DeviceInfoT>(value); }
    template<typename DeviceInfoT = DeviceInfo>
    Customer& WithDeviceInfo(DeviceInfoT&& value) { SetDeviceInfo(std::forward<DeviceInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = ParticipantCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = ParticipantCapabilities>
    Customer& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}
  private:

    DeviceInfo m_deviceInfo;
    bool m_deviceInfoHasBeenSet = false;

    ParticipantCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
