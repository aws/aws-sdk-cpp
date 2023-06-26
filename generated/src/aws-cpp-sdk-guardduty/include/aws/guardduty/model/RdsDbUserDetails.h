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


    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline RdsDbUserDetails& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline RdsDbUserDetails& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline RdsDbUserDetails& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline RdsDbUserDetails& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline const Aws::String& GetSsl() const{ return m_ssl; }

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline bool SslHasBeenSet() const { return m_sslHasBeenSet; }

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline void SetSsl(const Aws::String& value) { m_sslHasBeenSet = true; m_ssl = value; }

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline void SetSsl(Aws::String&& value) { m_sslHasBeenSet = true; m_ssl = std::move(value); }

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline void SetSsl(const char* value) { m_sslHasBeenSet = true; m_ssl.assign(value); }

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline RdsDbUserDetails& WithSsl(const Aws::String& value) { SetSsl(value); return *this;}

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline RdsDbUserDetails& WithSsl(Aws::String&& value) { SetSsl(std::move(value)); return *this;}

    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline RdsDbUserDetails& WithSsl(const char* value) { SetSsl(value); return *this;}


    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline const Aws::String& GetAuthMethod() const{ return m_authMethod; }

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline bool AuthMethodHasBeenSet() const { return m_authMethodHasBeenSet; }

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline void SetAuthMethod(const Aws::String& value) { m_authMethodHasBeenSet = true; m_authMethod = value; }

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline void SetAuthMethod(Aws::String&& value) { m_authMethodHasBeenSet = true; m_authMethod = std::move(value); }

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline void SetAuthMethod(const char* value) { m_authMethodHasBeenSet = true; m_authMethod.assign(value); }

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline RdsDbUserDetails& WithAuthMethod(const Aws::String& value) { SetAuthMethod(value); return *this;}

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline RdsDbUserDetails& WithAuthMethod(Aws::String&& value) { SetAuthMethod(std::move(value)); return *this;}

    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline RdsDbUserDetails& WithAuthMethod(const char* value) { SetAuthMethod(value); return *this;}

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
