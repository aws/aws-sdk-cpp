/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The basic authentication credentials of a connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/BasicAuthenticationCredentials">AWS
   * API Reference</a></p>
   */
  class BasicAuthenticationCredentials
  {
  public:
    AWS_DATAZONE_API BasicAuthenticationCredentials();
    AWS_DATAZONE_API BasicAuthenticationCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API BasicAuthenticationCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password for a connection.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline BasicAuthenticationCredentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline BasicAuthenticationCredentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline BasicAuthenticationCredentials& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name for the connecion.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline BasicAuthenticationCredentials& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline BasicAuthenticationCredentials& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline BasicAuthenticationCredentials& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}
  private:

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
