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
   * as a response element in the <a>GetSSHPublicKey</a> and
   * <a>UploadSSHPublicKey</a> operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SSHPublicKey">AWS
   * API Reference</a></p>
   */
  class SSHPublicKey
  {
  public:
    AWS_IAM_API SSHPublicKey();
    AWS_IAM_API SSHPublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API SSHPublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline SSHPublicKey& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline SSHPublicKey& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline SSHPublicKey& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline const Aws::String& GetSSHPublicKeyId() const{ return m_sSHPublicKeyId; }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline bool SSHPublicKeyIdHasBeenSet() const { return m_sSHPublicKeyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline void SetSSHPublicKeyId(const Aws::String& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = value; }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline void SetSSHPublicKeyId(Aws::String&& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = std::move(value); }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline void SetSSHPublicKeyId(const char* value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId.assign(value); }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyId(const Aws::String& value) { SetSSHPublicKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyId(Aws::String&& value) { SetSSHPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyId(const char* value) { SetSSHPublicKeyId(value); return *this;}


    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::move(value); }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline void SetFingerprint(const char* value) { m_fingerprintHasBeenSet = true; m_fingerprint.assign(value); }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline SSHPublicKey& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline SSHPublicKey& WithFingerprint(Aws::String&& value) { SetFingerprint(std::move(value)); return *this;}

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline SSHPublicKey& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}


    /**
     * <p>The SSH public key.</p>
     */
    inline const Aws::String& GetSSHPublicKeyBody() const{ return m_sSHPublicKeyBody; }

    /**
     * <p>The SSH public key.</p>
     */
    inline bool SSHPublicKeyBodyHasBeenSet() const { return m_sSHPublicKeyBodyHasBeenSet; }

    /**
     * <p>The SSH public key.</p>
     */
    inline void SetSSHPublicKeyBody(const Aws::String& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

    /**
     * <p>The SSH public key.</p>
     */
    inline void SetSSHPublicKeyBody(Aws::String&& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = std::move(value); }

    /**
     * <p>The SSH public key.</p>
     */
    inline void SetSSHPublicKeyBody(const char* value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody.assign(value); }

    /**
     * <p>The SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyBody(const Aws::String& value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyBody(Aws::String&& value) { SetSSHPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyBody(const char* value) { SetSSHPublicKeyBody(value); return *this;}


    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline SSHPublicKey& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an CodeCommit repository. <code>Inactive</code>
     * means that the key cannot be used.</p>
     */
    inline SSHPublicKey& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadDate() const{ return m_uploadDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline bool UploadDateHasBeenSet() const { return m_uploadDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline void SetUploadDate(const Aws::Utils::DateTime& value) { m_uploadDateHasBeenSet = true; m_uploadDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline void SetUploadDate(Aws::Utils::DateTime&& value) { m_uploadDateHasBeenSet = true; m_uploadDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline SSHPublicKey& WithUploadDate(const Aws::Utils::DateTime& value) { SetUploadDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline SSHPublicKey& WithUploadDate(Aws::Utils::DateTime&& value) { SetUploadDate(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;

    Aws::String m_sSHPublicKeyBody;
    bool m_sSHPublicKeyBodyHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_uploadDate;
    bool m_uploadDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
