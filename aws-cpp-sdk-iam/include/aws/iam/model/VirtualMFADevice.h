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
#include <aws/core/utils/Array.h>
#include <aws/iam/model/User.h>
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
   * <p>Contains information about a virtual MFA device.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/VirtualMFADevice">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API VirtualMFADevice
  {
  public:
    VirtualMFADevice();
    VirtualMFADevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    VirtualMFADevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline VirtualMFADevice& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline VirtualMFADevice& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline VirtualMFADevice& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBase32StringSeed() const{ return m_base32StringSeed; }

    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline bool Base32StringSeedHasBeenSet() const { return m_base32StringSeedHasBeenSet; }

    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline void SetBase32StringSeed(const Aws::Utils::CryptoBuffer& value) { m_base32StringSeedHasBeenSet = true; m_base32StringSeed = value; }

    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline void SetBase32StringSeed(Aws::Utils::CryptoBuffer&& value) { m_base32StringSeedHasBeenSet = true; m_base32StringSeed = std::move(value); }

    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline VirtualMFADevice& WithBase32StringSeed(const Aws::Utils::CryptoBuffer& value) { SetBase32StringSeed(value); return *this;}

    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base64-encoded. </p>
     */
    inline VirtualMFADevice& WithBase32StringSeed(Aws::Utils::CryptoBuffer&& value) { SetBase32StringSeed(std::move(value)); return *this;}


    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetQRCodePNG() const{ return m_qRCodePNG; }

    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline bool QRCodePNGHasBeenSet() const { return m_qRCodePNGHasBeenSet; }

    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline void SetQRCodePNG(const Aws::Utils::CryptoBuffer& value) { m_qRCodePNGHasBeenSet = true; m_qRCodePNG = value; }

    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline void SetQRCodePNG(Aws::Utils::CryptoBuffer&& value) { m_qRCodePNGHasBeenSet = true; m_qRCodePNG = std::move(value); }

    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline VirtualMFADevice& WithQRCodePNG(const Aws::Utils::CryptoBuffer& value) { SetQRCodePNG(value); return *this;}

    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline VirtualMFADevice& WithQRCodePNG(Aws::Utils::CryptoBuffer&& value) { SetQRCodePNG(std::move(value)); return *this;}


    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline void SetUser(const User& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline void SetUser(User&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline VirtualMFADevice& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline VirtualMFADevice& WithUser(User&& value) { SetUser(std::move(value)); return *this;}


    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetEnableDate() const{ return m_enableDate; }

    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline bool EnableDateHasBeenSet() const { return m_enableDateHasBeenSet; }

    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline void SetEnableDate(const Aws::Utils::DateTime& value) { m_enableDateHasBeenSet = true; m_enableDate = value; }

    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline void SetEnableDate(Aws::Utils::DateTime&& value) { m_enableDateHasBeenSet = true; m_enableDate = std::move(value); }

    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline VirtualMFADevice& WithEnableDate(const Aws::Utils::DateTime& value) { SetEnableDate(value); return *this;}

    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline VirtualMFADevice& WithEnableDate(Aws::Utils::DateTime&& value) { SetEnableDate(std::move(value)); return *this;}

  private:

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;

    Aws::Utils::CryptoBuffer m_base32StringSeed;
    bool m_base32StringSeedHasBeenSet;

    Aws::Utils::CryptoBuffer m_qRCodePNG;
    bool m_qRCodePNGHasBeenSet;

    User m_user;
    bool m_userHasBeenSet;

    Aws::Utils::DateTime m_enableDate;
    bool m_enableDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
