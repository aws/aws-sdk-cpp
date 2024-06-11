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
    AWS_CONNECT_API Customer();
    AWS_CONNECT_API Customer(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Customer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information regarding Customer’s device.</p>
     */
    inline const DeviceInfo& GetDeviceInfo() const{ return m_deviceInfo; }
    inline bool DeviceInfoHasBeenSet() const { return m_deviceInfoHasBeenSet; }
    inline void SetDeviceInfo(const DeviceInfo& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = value; }
    inline void SetDeviceInfo(DeviceInfo&& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = std::move(value); }
    inline Customer& WithDeviceInfo(const DeviceInfo& value) { SetDeviceInfo(value); return *this;}
    inline Customer& WithDeviceInfo(DeviceInfo&& value) { SetDeviceInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantCapabilities& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const ParticipantCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(ParticipantCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline Customer& WithCapabilities(const ParticipantCapabilities& value) { SetCapabilities(value); return *this;}
    inline Customer& WithCapabilities(ParticipantCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}
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
