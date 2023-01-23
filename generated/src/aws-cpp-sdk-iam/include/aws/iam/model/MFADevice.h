/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MFADevice
  {
  public:
    AWS_IAM_API MFADevice();
    AWS_IAM_API MFADevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API MFADevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_userNameHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::DateTime m_enableDate;
    bool m_enableDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
