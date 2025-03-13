/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Information of a test device. A thing ARN, certificate ARN or device role ARN
   * is required.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/DeviceUnderTest">AWS
   * API Reference</a></p>
   */
  class DeviceUnderTest
  {
  public:
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest() = default;
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    DeviceUnderTest& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    DeviceUnderTest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists device's role ARN.</p>
     */
    inline const Aws::String& GetDeviceRoleArn() const { return m_deviceRoleArn; }
    inline bool DeviceRoleArnHasBeenSet() const { return m_deviceRoleArnHasBeenSet; }
    template<typename DeviceRoleArnT = Aws::String>
    void SetDeviceRoleArn(DeviceRoleArnT&& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = std::forward<DeviceRoleArnT>(value); }
    template<typename DeviceRoleArnT = Aws::String>
    DeviceUnderTest& WithDeviceRoleArn(DeviceRoleArnT&& value) { SetDeviceRoleArn(std::forward<DeviceRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_deviceRoleArn;
    bool m_deviceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
