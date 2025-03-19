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
    AWS_GUARDDUTY_API RdsDbUserDetails() = default;
    AWS_GUARDDUTY_API RdsDbUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsDbUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    RdsDbUserDetails& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name used in the anomalous login attempt.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    RdsDbUserDetails& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database instance involved in the anomalous login
     * attempt.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RdsDbUserDetails& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Secure Socket Layer (SSL) used for the network.</p>
     */
    inline const Aws::String& GetSsl() const { return m_ssl; }
    inline bool SslHasBeenSet() const { return m_sslHasBeenSet; }
    template<typename SslT = Aws::String>
    void SetSsl(SslT&& value) { m_sslHasBeenSet = true; m_ssl = std::forward<SslT>(value); }
    template<typename SslT = Aws::String>
    RdsDbUserDetails& WithSsl(SslT&& value) { SetSsl(std::forward<SslT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method used by the user involved in the finding.</p>
     */
    inline const Aws::String& GetAuthMethod() const { return m_authMethod; }
    inline bool AuthMethodHasBeenSet() const { return m_authMethodHasBeenSet; }
    template<typename AuthMethodT = Aws::String>
    void SetAuthMethod(AuthMethodT&& value) { m_authMethodHasBeenSet = true; m_authMethod = std::forward<AuthMethodT>(value); }
    template<typename AuthMethodT = Aws::String>
    RdsDbUserDetails& WithAuthMethod(AuthMethodT&& value) { SetAuthMethod(std::forward<AuthMethodT>(value)); return *this;}
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
