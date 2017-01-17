﻿/*
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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
#include <aws/core/utils/DateTime.h>

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
   * <a>UploadSSHPublicKey</a> actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SSHPublicKey">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API SSHPublicKey
  {
  public:
    SSHPublicKey();
    SSHPublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    SSHPublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

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
    inline SSHPublicKey& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

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
    inline void SetSSHPublicKeyId(const Aws::String& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = value; }

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline void SetSSHPublicKeyId(Aws::String&& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = value; }

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
    inline SSHPublicKey& WithSSHPublicKeyId(Aws::String&& value) { SetSSHPublicKeyId(value); return *this;}

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
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The MD5 message digest of the SSH public key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

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
    inline SSHPublicKey& WithFingerprint(Aws::String&& value) { SetFingerprint(value); return *this;}

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
    inline void SetSSHPublicKeyBody(const Aws::String& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

    /**
     * <p>The SSH public key.</p>
     */
    inline void SetSSHPublicKeyBody(Aws::String&& value) { m_sSHPublicKeyBodyHasBeenSet = true; m_sSHPublicKeyBody = value; }

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
    inline SSHPublicKey& WithSSHPublicKeyBody(Aws::String&& value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The SSH public key.</p>
     */
    inline SSHPublicKey& WithSSHPublicKeyBody(const char* value) { SetSSHPublicKeyBody(value); return *this;}

    /**
     * <p>The status of the SSH public key. <code>Active</code> means the key can be
     * used for authentication with an AWS CodeCommit repository. <code>Inactive</code>
     * means the key cannot be used.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means the key can be
     * used for authentication with an AWS CodeCommit repository. <code>Inactive</code>
     * means the key cannot be used.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means the key can be
     * used for authentication with an AWS CodeCommit repository. <code>Inactive</code>
     * means the key cannot be used.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means the key can be
     * used for authentication with an AWS CodeCommit repository. <code>Inactive</code>
     * means the key cannot be used.</p>
     */
    inline SSHPublicKey& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the SSH public key. <code>Active</code> means the key can be
     * used for authentication with an AWS CodeCommit repository. <code>Inactive</code>
     * means the key cannot be used.</p>
     */
    inline SSHPublicKey& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadDate() const{ return m_uploadDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline void SetUploadDate(const Aws::Utils::DateTime& value) { m_uploadDateHasBeenSet = true; m_uploadDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline void SetUploadDate(Aws::Utils::DateTime&& value) { m_uploadDateHasBeenSet = true; m_uploadDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline SSHPublicKey& WithUploadDate(const Aws::Utils::DateTime& value) { SetUploadDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline SSHPublicKey& WithUploadDate(Aws::Utils::DateTime&& value) { SetUploadDate(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet;
    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet;
    Aws::String m_sSHPublicKeyBody;
    bool m_sSHPublicKeyBodyHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_uploadDate;
    bool m_uploadDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
