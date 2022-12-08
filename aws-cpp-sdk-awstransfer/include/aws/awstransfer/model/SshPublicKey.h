/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Provides information about the public Secure Shell (SSH) key that is
   * associated with a user account for the specific file transfer protocol-enabled
   * server (as identified by <code>ServerId</code>). The information returned
   * includes the date the key was imported, the public key contents, and the public
   * key ID. A user can store more than one SSH public key associated with their user
   * name on a specific server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SshPublicKey">AWS
   * API Reference</a></p>
   */
  class SshPublicKey
  {
  public:
    AWS_TRANSFER_API SshPublicKey();
    AWS_TRANSFER_API SshPublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API SshPublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline const Aws::Utils::DateTime& GetDateImported() const{ return m_dateImported; }

    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline bool DateImportedHasBeenSet() const { return m_dateImportedHasBeenSet; }

    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline void SetDateImported(const Aws::Utils::DateTime& value) { m_dateImportedHasBeenSet = true; m_dateImported = value; }

    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline void SetDateImported(Aws::Utils::DateTime&& value) { m_dateImportedHasBeenSet = true; m_dateImported = std::move(value); }

    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline SshPublicKey& WithDateImported(const Aws::Utils::DateTime& value) { SetDateImported(value); return *this;}

    /**
     * <p>Specifies the date that the public key was added to the user account.</p>
     */
    inline SshPublicKey& WithDateImported(Aws::Utils::DateTime&& value) { SetDateImported(std::move(value)); return *this;}


    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const{ return m_sshPublicKeyBody; }

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(const Aws::String& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = value; }

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(Aws::String&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::move(value); }

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(const char* value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody.assign(value); }

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(const Aws::String& value) { SetSshPublicKeyBody(value); return *this;}

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(Aws::String&& value) { SetSshPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(const char* value) { SetSshPublicKeyBody(value); return *this;}


    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const{ return m_sshPublicKeyId; }

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline bool SshPublicKeyIdHasBeenSet() const { return m_sshPublicKeyIdHasBeenSet; }

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline void SetSshPublicKeyId(const Aws::String& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = value; }

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline void SetSshPublicKeyId(Aws::String&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::move(value); }

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline void SetSshPublicKeyId(const char* value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId.assign(value); }

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(const Aws::String& value) { SetSshPublicKeyId(value); return *this;}

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(Aws::String&& value) { SetSshPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(const char* value) { SetSshPublicKeyId(value); return *this;}

  private:

    Aws::Utils::DateTime m_dateImported;
    bool m_dateImportedHasBeenSet = false;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet = false;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
