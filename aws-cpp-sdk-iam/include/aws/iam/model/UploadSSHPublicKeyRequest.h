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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadSSHPublicKey"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user to associate the SSH public key with.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline UploadSSHPublicKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetSSHPublicKeyBody() const{ return m_sSHPublicKeyBody; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline bool SSHPublicKeyBodyHasBeenSet() const { return m_sSHPublicKeyBodyHasBeenSet; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetSSHPublicKeyBody(const Aws::String& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetSSHPublicKeyBody(Aws::String&& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = std::move(value); }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetSSHPublicKeyBody(const char* value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody.assign(value); }

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadSSHPublicKeyRequest& WithSSHPublicKeyBody(const Aws::String& value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadSSHPublicKeyRequest& WithSSHPublicKeyBody(Aws::String&& value) { SetSSHPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The SSH public key. The public key must be encoded in ssh-rsa format or PEM
     * format. The minimum bit-length of the public key is 2048 bits. For example, you
     * can generate a 2048-bit key, and the resulting PEM file is 1679 bytes long.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of the
     * following:</p> <ul> <li> <p>Any printable ASCII character ranging from the space
     * character (\u0020) through the end of the ASCII character range</p> </li> <li>
     * <p>The printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
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
