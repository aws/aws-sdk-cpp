/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the login attempts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LoginAttribute">AWS
   * API Reference</a></p>
   */
  class LoginAttribute
  {
  public:
    AWS_GUARDDUTY_API LoginAttribute() = default;
    AWS_GUARDDUTY_API LoginAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LoginAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    LoginAttribute& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    LoginAttribute& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the sum of failed (unsuccessful) login attempts made to establish
     * a connection to the database instance.</p>
     */
    inline int GetFailedLoginAttempts() const { return m_failedLoginAttempts; }
    inline bool FailedLoginAttemptsHasBeenSet() const { return m_failedLoginAttemptsHasBeenSet; }
    inline void SetFailedLoginAttempts(int value) { m_failedLoginAttemptsHasBeenSet = true; m_failedLoginAttempts = value; }
    inline LoginAttribute& WithFailedLoginAttempts(int value) { SetFailedLoginAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the sum of successful connections (a correct combination of login
     * attributes) made to the database instance by the actor.</p>
     */
    inline int GetSuccessfulLoginAttempts() const { return m_successfulLoginAttempts; }
    inline bool SuccessfulLoginAttemptsHasBeenSet() const { return m_successfulLoginAttemptsHasBeenSet; }
    inline void SetSuccessfulLoginAttempts(int value) { m_successfulLoginAttemptsHasBeenSet = true; m_successfulLoginAttempts = value; }
    inline LoginAttribute& WithSuccessfulLoginAttempts(int value) { SetSuccessfulLoginAttempts(value); return *this;}
    ///@}
  private:

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    int m_failedLoginAttempts{0};
    bool m_failedLoginAttemptsHasBeenSet = false;

    int m_successfulLoginAttempts{0};
    bool m_successfulLoginAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
