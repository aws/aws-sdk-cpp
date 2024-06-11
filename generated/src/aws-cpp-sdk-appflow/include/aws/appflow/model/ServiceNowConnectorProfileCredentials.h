/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuth2Credentials.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile credentials required when using ServiceNow.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ServiceNowConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class ServiceNowConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API ServiceNowConnectorProfileCredentials();
    AWS_APPFLOW_API ServiceNowConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ServiceNowConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ServiceNowConnectorProfileCredentials& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ServiceNowConnectorProfileCredentials& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ServiceNowConnectorProfileCredentials& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline ServiceNowConnectorProfileCredentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline ServiceNowConnectorProfileCredentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline ServiceNowConnectorProfileCredentials& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The OAuth 2.0 credentials required to authenticate the user. </p>
     */
    inline const OAuth2Credentials& GetOAuth2Credentials() const{ return m_oAuth2Credentials; }
    inline bool OAuth2CredentialsHasBeenSet() const { return m_oAuth2CredentialsHasBeenSet; }
    inline void SetOAuth2Credentials(const OAuth2Credentials& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = value; }
    inline void SetOAuth2Credentials(OAuth2Credentials&& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = std::move(value); }
    inline ServiceNowConnectorProfileCredentials& WithOAuth2Credentials(const OAuth2Credentials& value) { SetOAuth2Credentials(value); return *this;}
    inline ServiceNowConnectorProfileCredentials& WithOAuth2Credentials(OAuth2Credentials&& value) { SetOAuth2Credentials(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    OAuth2Credentials m_oAuth2Credentials;
    bool m_oAuth2CredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
