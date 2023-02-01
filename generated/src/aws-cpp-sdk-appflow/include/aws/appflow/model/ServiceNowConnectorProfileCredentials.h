/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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


    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p> The name of the user. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p> The name of the user. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p> The name of the user. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p> The name of the user. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p> The name of the user. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p> The name of the user. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p> The name of the user. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p> The password that corresponds to the user name. </p>
     */
    inline ServiceNowConnectorProfileCredentials& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
