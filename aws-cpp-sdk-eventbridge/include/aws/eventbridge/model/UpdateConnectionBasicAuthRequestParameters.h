/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains the Basic authorization parameters for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UpdateConnectionBasicAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionBasicAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API UpdateConnectionBasicAuthRequestParameters();
    AWS_EVENTBRIDGE_API UpdateConnectionBasicAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API UpdateConnectionBasicAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password associated with the user name to use for Basic
     * authorization.</p>
     */
    inline UpdateConnectionBasicAuthRequestParameters& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
