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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an MFA device.</p> <p>This data type is used as a
   * response element in the <a>ListMFADevices</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/MFADevice">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API MFADevice
  {
  public:
    MFADevice();
    MFADevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    MFADevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline MFADevice& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline MFADevice& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline MFADevice& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline MFADevice& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline MFADevice& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline MFADevice& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetEnableDate() const{ return m_enableDate; }

    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline bool EnableDateHasBeenSet() const { return m_enableDateHasBeenSet; }

    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline void SetEnableDate(const Aws::Utils::DateTime& value) { m_enableDateHasBeenSet = true; m_enableDate = value; }

    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline void SetEnableDate(Aws::Utils::DateTime&& value) { m_enableDateHasBeenSet = true; m_enableDate = std::move(value); }

    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline MFADevice& WithEnableDate(const Aws::Utils::DateTime& value) { SetEnableDate(value); return *this;}

    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline MFADevice& WithEnableDate(Aws::Utils::DateTime&& value) { SetEnableDate(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;

    Aws::Utils::DateTime m_enableDate;
    bool m_enableDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
