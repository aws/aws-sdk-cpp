/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UploadSSHPublicKeyRequest : public IAMRequest
  {
  public:
    UploadSSHPublicKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline const Aws::String& GetSSHPublicKeyBody() const{ return m_sSHPublicKeyBody; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetSSHPublicKeyBody(const Aws::String& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetSSHPublicKeyBody(Aws::String&& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetSSHPublicKeyBody(const char* value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody.assign(value); }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline UploadSSHPublicKeyRequest& WithSSHPublicKeyBody(const Aws::String& value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline UploadSSHPublicKeyRequest& WithSSHPublicKeyBody(Aws::String&& value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline UploadSSHPublicKeyRequest& WithSSHPublicKeyBody(const char* value) { SetSSHPublicKeyBody(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_sSHPublicKeyBody;
    bool m_sSHPublicKeyBodyHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
