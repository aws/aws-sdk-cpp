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
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest();
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API DeviceUnderTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline DeviceUnderTest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline DeviceUnderTest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>Lists device's thing ARN.</p>
     */
    inline DeviceUnderTest& WithThingArn(const char* value) { SetThingArn(value); return *this;}


    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline DeviceUnderTest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline DeviceUnderTest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>Lists device's certificate ARN.</p>
     */
    inline DeviceUnderTest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>Lists device's role ARN.</p>
     */
    inline const Aws::String& GetDeviceRoleArn() const{ return m_deviceRoleArn; }

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline bool DeviceRoleArnHasBeenSet() const { return m_deviceRoleArnHasBeenSet; }

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline void SetDeviceRoleArn(const Aws::String& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = value; }

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline void SetDeviceRoleArn(Aws::String&& value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn = std::move(value); }

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline void SetDeviceRoleArn(const char* value) { m_deviceRoleArnHasBeenSet = true; m_deviceRoleArn.assign(value); }

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline DeviceUnderTest& WithDeviceRoleArn(const Aws::String& value) { SetDeviceRoleArn(value); return *this;}

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline DeviceUnderTest& WithDeviceRoleArn(Aws::String&& value) { SetDeviceRoleArn(std::move(value)); return *this;}

    /**
     * <p>Lists device's role ARN.</p>
     */
    inline DeviceUnderTest& WithDeviceRoleArn(const char* value) { SetDeviceRoleArn(value); return *this;}

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
