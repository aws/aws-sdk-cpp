/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/EncodingType.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class GetSSHPublicKeyRequest : public IAMRequest
  {
  public:
    AWS_IAM_API GetSSHPublicKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSSHPublicKey"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    GetSSHPublicKeyRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline const Aws::String& GetSSHPublicKeyId() const { return m_sSHPublicKeyId; }
    inline bool SSHPublicKeyIdHasBeenSet() const { return m_sSHPublicKeyIdHasBeenSet; }
    template<typename SSHPublicKeyIdT = Aws::String>
    void SetSSHPublicKeyId(SSHPublicKeyIdT&& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = std::forward<SSHPublicKeyIdT>(value); }
    template<typename SSHPublicKeyIdT = Aws::String>
    GetSSHPublicKeyRequest& WithSSHPublicKeyId(SSHPublicKeyIdT&& value) { SetSSHPublicKeyId(std::forward<SSHPublicKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the public key encoding format to use in the response. To retrieve
     * the public key in ssh-rsa format, use <code>SSH</code>. To retrieve the public
     * key in PEM format, use <code>PEM</code>.</p>
     */
    inline EncodingType GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(EncodingType value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline GetSSHPublicKeyRequest& WithEncoding(EncodingType value) { SetEncoding(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet = false;

    EncodingType m_encoding{EncodingType::NOT_SET};
    bool m_encodingHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
