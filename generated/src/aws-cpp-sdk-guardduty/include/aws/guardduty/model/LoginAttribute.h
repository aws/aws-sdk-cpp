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
    AWS_GUARDDUTY_API LoginAttribute();
    AWS_GUARDDUTY_API LoginAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LoginAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline LoginAttribute& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline LoginAttribute& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>Indicates the user name which attempted to log in.</p>
     */
    inline LoginAttribute& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline LoginAttribute& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline LoginAttribute& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>Indicates the application name used to attempt log in.</p>
     */
    inline LoginAttribute& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>Represents the sum of failed (unsuccessful) login attempts made to establish
     * a connection to the database instance.</p>
     */
    inline int GetFailedLoginAttempts() const{ return m_failedLoginAttempts; }

    /**
     * <p>Represents the sum of failed (unsuccessful) login attempts made to establish
     * a connection to the database instance.</p>
     */
    inline bool FailedLoginAttemptsHasBeenSet() const { return m_failedLoginAttemptsHasBeenSet; }

    /**
     * <p>Represents the sum of failed (unsuccessful) login attempts made to establish
     * a connection to the database instance.</p>
     */
    inline void SetFailedLoginAttempts(int value) { m_failedLoginAttemptsHasBeenSet = true; m_failedLoginAttempts = value; }

    /**
     * <p>Represents the sum of failed (unsuccessful) login attempts made to establish
     * a connection to the database instance.</p>
     */
    inline LoginAttribute& WithFailedLoginAttempts(int value) { SetFailedLoginAttempts(value); return *this;}


    /**
     * <p>Represents the sum of successful connections (a correct combination of login
     * attributes) made to the database instance by the actor.</p>
     */
    inline int GetSuccessfulLoginAttempts() const{ return m_successfulLoginAttempts; }

    /**
     * <p>Represents the sum of successful connections (a correct combination of login
     * attributes) made to the database instance by the actor.</p>
     */
    inline bool SuccessfulLoginAttemptsHasBeenSet() const { return m_successfulLoginAttemptsHasBeenSet; }

    /**
     * <p>Represents the sum of successful connections (a correct combination of login
     * attributes) made to the database instance by the actor.</p>
     */
    inline void SetSuccessfulLoginAttempts(int value) { m_successfulLoginAttemptsHasBeenSet = true; m_successfulLoginAttempts = value; }

    /**
     * <p>Represents the sum of successful connections (a correct combination of login
     * attributes) made to the database instance by the actor.</p>
     */
    inline LoginAttribute& WithSuccessfulLoginAttempts(int value) { SetSuccessfulLoginAttempts(value); return *this;}

  private:

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    int m_failedLoginAttempts;
    bool m_failedLoginAttemptsHasBeenSet = false;

    int m_successfulLoginAttempts;
    bool m_successfulLoginAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
