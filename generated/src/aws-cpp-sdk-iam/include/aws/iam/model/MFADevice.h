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
   * response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListMFADevices.html">ListMFADevices</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/MFADevice">AWS API
   * Reference</a></p>
   */
  class MFADevice
  {
  public:
    AWS_IAM_API MFADevice() = default;
    AWS_IAM_API MFADevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API MFADevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The user with whom the MFA device is associated.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    MFADevice& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    MFADevice& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the MFA device was enabled for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetEnableDate() const { return m_enableDate; }
    inline bool EnableDateHasBeenSet() const { return m_enableDateHasBeenSet; }
    template<typename EnableDateT = Aws::Utils::DateTime>
    void SetEnableDate(EnableDateT&& value) { m_enableDateHasBeenSet = true; m_enableDate = std::forward<EnableDateT>(value); }
    template<typename EnableDateT = Aws::Utils::DateTime>
    MFADevice& WithEnableDate(EnableDateT&& value) { SetEnableDate(std::forward<EnableDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::DateTime m_enableDate{};
    bool m_enableDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
