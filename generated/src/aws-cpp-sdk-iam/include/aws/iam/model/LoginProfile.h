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
   * <p>Contains the user name and password create date for a user.</p> <p> This data
   * type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateLoginProfile.html">CreateLoginProfile</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetLoginProfile.html">GetLoginProfile</a>
   * operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/LoginProfile">AWS
   * API Reference</a></p>
   */
  class LoginProfile
  {
  public:
    AWS_IAM_API LoginProfile() = default;
    AWS_IAM_API LoginProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API LoginProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the user, which can be used for signing in to the Amazon Web
     * Services Management Console.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    LoginProfile& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the password for the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    LoginProfile& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user is required to set a new password on next
     * sign-in.</p>
     */
    inline bool GetPasswordResetRequired() const { return m_passwordResetRequired; }
    inline bool PasswordResetRequiredHasBeenSet() const { return m_passwordResetRequiredHasBeenSet; }
    inline void SetPasswordResetRequired(bool value) { m_passwordResetRequiredHasBeenSet = true; m_passwordResetRequired = value; }
    inline LoginProfile& WithPasswordResetRequired(bool value) { SetPasswordResetRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    bool m_passwordResetRequired{false};
    bool m_passwordResetRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
