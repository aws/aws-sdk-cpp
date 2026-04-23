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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the code-signing profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SigningProfileParameter">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API SigningProfileParameter
  {
  public:
    SigningProfileParameter();
    SigningProfileParameter(Aws::Utils::Json::JsonView jsonValue);
    SigningProfileParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>Certificate ARN.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>Certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>Certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>Certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>Certificate ARN.</p>
     */
    inline SigningProfileParameter& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>Certificate ARN.</p>
     */
    inline SigningProfileParameter& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>Certificate ARN.</p>
     */
    inline SigningProfileParameter& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The hardware platform of your device.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline SigningProfileParameter& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline SigningProfileParameter& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The hardware platform of your device.</p>
     */
    inline SigningProfileParameter& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline const Aws::String& GetCertificatePathOnDevice() const{ return m_certificatePathOnDevice; }

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline bool CertificatePathOnDeviceHasBeenSet() const { return m_certificatePathOnDeviceHasBeenSet; }

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline void SetCertificatePathOnDevice(const Aws::String& value) { m_certificatePathOnDeviceHasBeenSet = true; m_certificatePathOnDevice = value; }

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline void SetCertificatePathOnDevice(Aws::String&& value) { m_certificatePathOnDeviceHasBeenSet = true; m_certificatePathOnDevice = std::move(value); }

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline void SetCertificatePathOnDevice(const char* value) { m_certificatePathOnDeviceHasBeenSet = true; m_certificatePathOnDevice.assign(value); }

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline SigningProfileParameter& WithCertificatePathOnDevice(const Aws::String& value) { SetCertificatePathOnDevice(value); return *this;}

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline SigningProfileParameter& WithCertificatePathOnDevice(Aws::String&& value) { SetCertificatePathOnDevice(std::move(value)); return *this;}

    /**
     * <p>The location of the code-signing certificate on your device.</p>
     */
    inline SigningProfileParameter& WithCertificatePathOnDevice(const char* value) { SetCertificatePathOnDevice(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_certificatePathOnDevice;
    bool m_certificatePathOnDeviceHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
