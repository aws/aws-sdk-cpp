/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/iam/model/User.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Tag.h>
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
  class VirtualMFADevice
  {
  public:
    AWS_IAM_API VirtualMFADevice() = default;
    AWS_IAM_API VirtualMFADevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API VirtualMFADevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The serial number associated with <code>VirtualMFADevice</code>.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    VirtualMFADevice& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The base32 seed defined as specified in <a
     * href="https://tools.ietf.org/html/rfc3548.txt">RFC3548</a>. The
     * <code>Base32StringSeed</code> is base32-encoded. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBase32StringSeed() const { return m_base32StringSeed; }
    inline bool Base32StringSeedHasBeenSet() const { return m_base32StringSeedHasBeenSet; }
    template<typename Base32StringSeedT = Aws::Utils::CryptoBuffer>
    void SetBase32StringSeed(Base32StringSeedT&& value) { m_base32StringSeedHasBeenSet = true; m_base32StringSeed = std::forward<Base32StringSeedT>(value); }
    template<typename Base32StringSeedT = Aws::Utils::CryptoBuffer>
    VirtualMFADevice& WithBase32StringSeed(Base32StringSeedT&& value) { SetBase32StringSeed(std::forward<Base32StringSeedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A QR code PNG image that encodes
     * <code>otpauth://totp/$virtualMFADeviceName@$AccountName?secret=$Base32String</code>
     * where <code>$virtualMFADeviceName</code> is one of the create call arguments.
     * <code>AccountName</code> is the user name if set (otherwise, the account ID
     * otherwise), and <code>Base32String</code> is the seed in base32 format. The
     * <code>Base32String</code> value is base64-encoded. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetQRCodePNG() const { return m_qRCodePNG; }
    inline bool QRCodePNGHasBeenSet() const { return m_qRCodePNGHasBeenSet; }
    template<typename QRCodePNGT = Aws::Utils::CryptoBuffer>
    void SetQRCodePNG(QRCodePNGT&& value) { m_qRCodePNGHasBeenSet = true; m_qRCodePNG = std::forward<QRCodePNGT>(value); }
    template<typename QRCodePNGT = Aws::Utils::CryptoBuffer>
    VirtualMFADevice& WithQRCodePNG(QRCodePNGT&& value) { SetQRCodePNG(std::forward<QRCodePNGT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM user associated with this virtual MFA device.</p>
     */
    inline const User& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = User>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = User>
    VirtualMFADevice& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the virtual MFA device was enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetEnableDate() const { return m_enableDate; }
    inline bool EnableDateHasBeenSet() const { return m_enableDateHasBeenSet; }
    template<typename EnableDateT = Aws::Utils::DateTime>
    void SetEnableDate(EnableDateT&& value) { m_enableDateHasBeenSet = true; m_enableDate = std::forward<EnableDateT>(value); }
    template<typename EnableDateT = Aws::Utils::DateTime>
    VirtualMFADevice& WithEnableDate(EnableDateT&& value) { SetEnableDate(std::forward<EnableDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the virtual MFA device. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VirtualMFADevice& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VirtualMFADevice& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_base32StringSeed{};
    bool m_base32StringSeedHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_qRCodePNG{};
    bool m_qRCodePNGHasBeenSet = false;

    User m_user;
    bool m_userHasBeenSet = false;

    Aws::Utils::DateTime m_enableDate{};
    bool m_enableDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
