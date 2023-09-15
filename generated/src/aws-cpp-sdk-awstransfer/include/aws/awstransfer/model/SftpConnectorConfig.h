﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Contains the details for an SFTP connector object. The connector object is
   * used for transferring files to and from a partner's SFTP server.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SftpConnectorConfig">AWS
   * API Reference</a></p>
   */
  class SftpConnectorConfig
  {
  public:
    AWS_TRANSFER_API SftpConnectorConfig();
    AWS_TRANSFER_API SftpConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API SftpConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline const Aws::String& GetUserSecretId() const{ return m_userSecretId; }

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline bool UserSecretIdHasBeenSet() const { return m_userSecretIdHasBeenSet; }

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline void SetUserSecretId(const Aws::String& value) { m_userSecretIdHasBeenSet = true; m_userSecretId = value; }

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline void SetUserSecretId(Aws::String&& value) { m_userSecretIdHasBeenSet = true; m_userSecretId = std::move(value); }

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline void SetUserSecretId(const char* value) { m_userSecretIdHasBeenSet = true; m_userSecretId.assign(value); }

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline SftpConnectorConfig& WithUserSecretId(const Aws::String& value) { SetUserSecretId(value); return *this;}

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline SftpConnectorConfig& WithUserSecretId(Aws::String&& value) { SetUserSecretId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier can be
     * either the Amazon Resource Name (ARN) or the name of the secret.</p>
     */
    inline SftpConnectorConfig& WithUserSecretId(const char* value) { SetUserSecretId(value); return *this;}


    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTrustedHostKeys() const{ return m_trustedHostKeys; }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline bool TrustedHostKeysHasBeenSet() const { return m_trustedHostKeysHasBeenSet; }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline void SetTrustedHostKeys(const Aws::Vector<Aws::String>& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys = value; }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline void SetTrustedHostKeys(Aws::Vector<Aws::String>&& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys = std::move(value); }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline SftpConnectorConfig& WithTrustedHostKeys(const Aws::Vector<Aws::String>& value) { SetTrustedHostKeys(value); return *this;}

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline SftpConnectorConfig& WithTrustedHostKeys(Aws::Vector<Aws::String>&& value) { SetTrustedHostKeys(std::move(value)); return *this;}

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline SftpConnectorConfig& AddTrustedHostKeys(const Aws::String& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys.push_back(value); return *this; }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline SftpConnectorConfig& AddTrustedHostKeys(Aws::String&& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The public portion of the host key, or keys, that are used to authenticate
     * the user to the external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>For the
     * trusted host key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li>
     * <p>For RSA keys, the key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For
     * ECDSA keys, the key type is either <code>ecdsa-sha2-nistp256</code>,
     * <code>ecdsa-sha2-nistp384</code>, or <code>ecdsa-sha2-nistp521</code>, depending
     * on the size of the key you generated.</p> </li> </ul>
     */
    inline SftpConnectorConfig& AddTrustedHostKeys(const char* value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys.push_back(value); return *this; }

  private:

    Aws::String m_userSecretId;
    bool m_userSecretIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustedHostKeys;
    bool m_trustedHostKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
