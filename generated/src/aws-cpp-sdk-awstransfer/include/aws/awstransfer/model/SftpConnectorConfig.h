/**
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
    AWS_TRANSFER_API SftpConnectorConfig() = default;
    AWS_TRANSFER_API SftpConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API SftpConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the secret (in Amazon Web Services Secrets Manager) that
     * contains the SFTP user's private key, password, or both. The identifier must be
     * the Amazon Resource Name (ARN) of the secret.</p>  <ul> <li> <p>Required
     * when creating an SFTP connector</p> </li> <li> <p>Optional when updating an
     * existing SFTP connector</p> </li> </ul> 
     */
    inline const Aws::String& GetUserSecretId() const { return m_userSecretId; }
    inline bool UserSecretIdHasBeenSet() const { return m_userSecretIdHasBeenSet; }
    template<typename UserSecretIdT = Aws::String>
    void SetUserSecretId(UserSecretIdT&& value) { m_userSecretIdHasBeenSet = true; m_userSecretId = std::forward<UserSecretIdT>(value); }
    template<typename UserSecretIdT = Aws::String>
    SftpConnectorConfig& WithUserSecretId(UserSecretIdT&& value) { SetUserSecretId(std::forward<UserSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public portion of the host key, or keys, that are used to identify the
     * external server to which you are connecting. You can use the
     * <code>ssh-keyscan</code> command against the SFTP server to retrieve the
     * necessary key.</p>  <p> <code>TrustedHostKeys</code> is optional for
     * <code>CreateConnector</code>. If not provided, you can use
     * <code>TestConnection</code> to retrieve the server host key during the initial
     * connection attempt, and subsequently update the connector with the observed host
     * key.</p>  <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element. Specify only the
     * <code>&lt;key type&gt;</code> and <code>&lt;body base64&gt;</code>: do not enter
     * the <code>&lt;comment&gt;</code> portion of the key.</p> <p>For the trusted host
     * key, Transfer Family accepts RSA and ECDSA keys.</p> <ul> <li> <p>For RSA keys,
     * the <code>&lt;key type&gt;</code> string is <code>ssh-rsa</code>.</p> </li> <li>
     * <p>For ECDSA keys, the <code>&lt;key type&gt;</code> string is either
     * <code>ecdsa-sha2-nistp256</code>, <code>ecdsa-sha2-nistp384</code>, or
     * <code>ecdsa-sha2-nistp521</code>, depending on the size of the key you
     * generated.</p> </li> </ul> <p>Run this command to retrieve the SFTP server host
     * key, where your SFTP server name is <code>ftp.host.com</code>.</p> <p>
     * <code>ssh-keyscan ftp.host.com</code> </p> <p>This prints the public host key to
     * standard output.</p> <p> <code>ftp.host.com ssh-rsa
     * AAAAB3Nza...&lt;long-string-for-public-key</code> </p> <p>Copy and paste this
     * string into the <code>TrustedHostKeys</code> field for the
     * <code>create-connector</code> command or into the <b>Trusted host keys</b> field
     * in the console.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustedHostKeys() const { return m_trustedHostKeys; }
    inline bool TrustedHostKeysHasBeenSet() const { return m_trustedHostKeysHasBeenSet; }
    template<typename TrustedHostKeysT = Aws::Vector<Aws::String>>
    void SetTrustedHostKeys(TrustedHostKeysT&& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys = std::forward<TrustedHostKeysT>(value); }
    template<typename TrustedHostKeysT = Aws::Vector<Aws::String>>
    SftpConnectorConfig& WithTrustedHostKeys(TrustedHostKeysT&& value) { SetTrustedHostKeys(std::forward<TrustedHostKeysT>(value)); return *this;}
    template<typename TrustedHostKeysT = Aws::String>
    SftpConnectorConfig& AddTrustedHostKeys(TrustedHostKeysT&& value) { m_trustedHostKeysHasBeenSet = true; m_trustedHostKeys.emplace_back(std::forward<TrustedHostKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the number of concurrent connections that your connector creates to
     * the remote server. The default value is <code>5</code> (this is also the maximum
     * value allowed).</p> <p>This parameter specifies the number of active connections
     * that your connector can establish with the remote server at the same time.
     * Increasing this value can enhance connector performance when transferring large
     * file batches by enabling parallel operations.</p>
     */
    inline int GetMaxConcurrentConnections() const { return m_maxConcurrentConnections; }
    inline bool MaxConcurrentConnectionsHasBeenSet() const { return m_maxConcurrentConnectionsHasBeenSet; }
    inline void SetMaxConcurrentConnections(int value) { m_maxConcurrentConnectionsHasBeenSet = true; m_maxConcurrentConnections = value; }
    inline SftpConnectorConfig& WithMaxConcurrentConnections(int value) { SetMaxConcurrentConnections(value); return *this;}
    ///@}
  private:

    Aws::String m_userSecretId;
    bool m_userSecretIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustedHostKeys;
    bool m_trustedHostKeysHasBeenSet = false;

    int m_maxConcurrentConnections{0};
    bool m_maxConcurrentConnectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
