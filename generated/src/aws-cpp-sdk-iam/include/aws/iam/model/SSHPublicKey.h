/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an SSH public key.</p> <p>This data type is used
   * as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetSSHPublicKey.html">GetSSHPublicKey</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UploadSSHPublicKey.html">UploadSSHPublicKey</a>
   * operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SSHPublicKey">AWS
   * API Reference</a></p>
   */
  class SSHPublicKey
  {
  public:
    AWS_IAM_API SSHPublicKey() = default;
    AWS_IAM_API SSHPublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API SSHPublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    SSHPublicKey& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline const Aws::String& GetSSHPublicKeyId() const { return m_sSHPublicKeyId; }
    inline bool SSHPublicKeyIdHasBeenSet() const { return m_sSHPublicKeyIdHasBeenSet; }
    template<typename SSHPublicKeyIdT = Aws::String>
    void SetSSHPublicKeyId(SSHPublicKeyIdT&& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = std::forward<SSHPublicKeyIdT>(value); }
    template<typename SSHPublicKeyIdT = Aws::String>
    SSHPublicKey& WithSSHPublicKeyId(SSHPublicKeyIdT&& value) { SetSSHPublicKeyId(std::forward<SSHPublicKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline const Aws::String& GetFingerprint() const { return m_fingerprint; }
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }
    template<typename FingerprintT = Aws::String>
    void SetFingerprint(FingerprintT&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::forward<FingerprintT>(value); }
    template<typename FingerprintT = Aws::String>
    SSHPublicKey& WithFingerprint(FingerprintT&& value) { SetFingerprint(std::forward<FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSH public key.</p>
     */
    inline const Aws::String& GetSSHPublicKeyBody() const { return m_sSHPublicKeyBody; }
    inline bool SSHPublicKeyBodyHasBeenSet() const { return m_sSHPublicKeyBodyHasBeenSet; }
    template<typename SSHPublicKeyBodyT = Aws::String>
    void SetSSHPublicKeyBody(SSHPublicKeyBodyT&& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = std::forward<SSHPublicKeyBodyT>(value); }
    template<typename SSHPublicKeyBodyT = Aws::String>
    SSHPublicKey& WithSSHPublicKeyBody(SSHPublicKeyBodyT&& value) { SetSSHPublicKeyBody(std::forward<SSHPublicKeyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline SSHPublicKey& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadDate() const { return m_uploadDate; }
    inline bool UploadDateHasBeenSet() const { return m_uploadDateHasBeenSet; }
    template<typename UploadDateT = Aws::Utils::DateTime>
    void SetUploadDate(UploadDateT&& value) { m_uploadDateHasBeenSet = true; m_uploadDate = std::forward<UploadDateT>(value); }
    template<typename UploadDateT = Aws::Utils::DateTime>
    SSHPublicKey& WithUploadDate(UploadDateT&& value) { SetUploadDate(std::forward<UploadDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;

    Aws::String m_sSHPublicKeyBody;
    bool m_sSHPublicKeyBodyHasBeenSet = false;

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_uploadDate{};
    bool m_uploadDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
