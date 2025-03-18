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
   * associated with a Transfer Family user for the specific file transfer
   * protocol-enabled server (as identified by <code>ServerId</code>). The
   * information returned includes the date the key was imported, the public key
   * contents, and the public key ID. A user can store more than one SSH public key
   * associated with their user name on a specific server.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SshPublicKey">AWS
   * API Reference</a></p>
   */
  class SshPublicKey
  {
  public:
    AWS_TRANSFER_API SshPublicKey() = default;
    AWS_TRANSFER_API SshPublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API SshPublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the date that the public key was added to the Transfer Family
     * user.</p>
     */
    inline const Aws::Utils::DateTime& GetDateImported() const { return m_dateImported; }
    inline bool DateImportedHasBeenSet() const { return m_dateImportedHasBeenSet; }
    template<typename DateImportedT = Aws::Utils::DateTime>
    void SetDateImported(DateImportedT&& value) { m_dateImportedHasBeenSet = true; m_dateImported = std::forward<DateImportedT>(value); }
    template<typename DateImportedT = Aws::Utils::DateTime>
    SshPublicKey& WithDateImported(DateImportedT&& value) { SetDateImported(std::forward<DateImportedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const { return m_sshPublicKeyBody; }
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }
    template<typename SshPublicKeyBodyT = Aws::String>
    void SetSshPublicKeyBody(SshPublicKeyBodyT&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::forward<SshPublicKeyBodyT>(value); }
    template<typename SshPublicKeyBodyT = Aws::String>
    SshPublicKey& WithSshPublicKeyBody(SshPublicKeyBodyT&& value) { SetSshPublicKeyBody(std::forward<SshPublicKeyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>SshPublicKeyId</code> parameter contains the identifier
     * of the public key.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const { return m_sshPublicKeyId; }
    inline bool SshPublicKeyIdHasBeenSet() const { return m_sshPublicKeyIdHasBeenSet; }
    template<typename SshPublicKeyIdT = Aws::String>
    void SetSshPublicKeyId(SshPublicKeyIdT&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::forward<SshPublicKeyIdT>(value); }
    template<typename SshPublicKeyIdT = Aws::String>
    SshPublicKey& WithSshPublicKeyId(SshPublicKeyIdT&& value) { SetSshPublicKeyId(std::forward<SshPublicKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_dateImported{};
    bool m_dateImportedHasBeenSet = false;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet = false;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
