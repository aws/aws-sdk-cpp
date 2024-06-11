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
   * <p>Contains information about the user and authentication details for a database
   * instance involved in the finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsDbUserDetails">AWS
   * API Reference</a></p>
   */
  class RdsDbUserDetails
  {
  public:
    AWS_GUARDDUTY_API RdsDbUserDetails();
    AWS_GUARDDUTY_API RdsDbUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsDbUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline RdsDbUserDetails& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline RdsDbUserDetails& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline RdsDbUserDetails& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline RdsDbUserDetails& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline RdsDbUserDetails& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline RdsDbUserDetails& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline RdsDbUserDetails& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline RdsDbUserDetails& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline RdsDbUserDetails& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline const Aws::String& GetSsl() const{ return m_ssl; }
    inline bool SslHasBeenSet() const { return m_sslHasBeenSet; }
    inline void SetSsl(const Aws::String& value) { m_sslHasBeenSet = true; m_ssl = value; }
    inline void SetSsl(Aws::String&& value) { m_sslHasBeenSet = true; m_ssl = std::move(value); }
    inline void SetSsl(const char* value) { m_sslHasBeenSet = true; m_ssl.assign(value); }
    inline RdsDbUserDetails& WithSsl(const Aws::String& value) { SetSsl(value); return *this;}
    inline RdsDbUserDetails& WithSsl(Aws::String&& value) { SetSsl(std::move(value)); return *this;}
    inline RdsDbUserDetails& WithSsl(const char* value) { SetSsl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline const Aws::String& GetAuthMethod() const{ return m_authMethod; }
    inline bool AuthMethodHasBeenSet() const { return m_authMethodHasBeenSet; }
    inline void SetAuthMethod(const Aws::String& value) { m_authMethodHasBeenSet = true; m_authMethod = value; }
    inline void SetAuthMethod(Aws::String&& value) { m_authMethodHasBeenSet = true; m_authMethod = std::move(value); }
    inline void SetAuthMethod(const char* value) { m_authMethodHasBeenSet = true; m_authMethod.assign(value); }
    inline RdsDbUserDetails& WithAuthMethod(const Aws::String& value) { SetAuthMethod(value); return *this;}
    inline RdsDbUserDetails& WithAuthMethod(Aws::String&& value) { SetAuthMethod(std::move(value)); return *this;}
    inline RdsDbUserDetails& WithAuthMethod(const char* value) { SetAuthMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_ssl;
    bool m_sslHasBeenSet = false;

    Aws::String m_authMethod;
    bool m_authMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
