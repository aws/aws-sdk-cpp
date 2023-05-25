/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Credential
  {
  public:
    AWS_CHIME_API Credential();
    AWS_CHIME_API Credential(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Credential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
