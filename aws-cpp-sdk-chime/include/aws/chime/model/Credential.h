/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The SIP credentials used to authenticate requests to your Amazon Chime Voice
   * Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Credential">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API Credential
  {
  public:
    Credential();
    Credential(Aws::Utils::Json::JsonView jsonValue);
    Credential& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The RFC2617 compliant user name associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The RFC2617 compliant password associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline Credential& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
