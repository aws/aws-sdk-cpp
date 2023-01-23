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
   * <p> The basic auth credentials required for basic authentication. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/BasicAuthCredentials">AWS
   * API Reference</a></p>
   */
  class BasicAuthCredentials
  {
  public:
    AWS_APPFLOW_API BasicAuthCredentials();
    AWS_APPFLOW_API BasicAuthCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API BasicAuthCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline BasicAuthCredentials& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline BasicAuthCredentials& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p> The username to use to connect to a resource. </p>
     */
    inline BasicAuthCredentials& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline BasicAuthCredentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline BasicAuthCredentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p> The password to use to connect to a resource.</p>
     */
    inline BasicAuthCredentials& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
