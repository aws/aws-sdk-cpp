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
   * <p>Contains information about an SSH public key, without the key's body or
   * fingerprint.</p> <p>This data type is used as a response element in the
   * <a>ListSSHPublicKeys</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SSHPublicKeyMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API SSHPublicKeyMetadata
  {
  public:
    SSHPublicKeyMetadata();
    SSHPublicKeyMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    SSHPublicKeyMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline SSHPublicKeyMetadata& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline SSHPublicKeyMetadata& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p>
     */
    inline SSHPublicKeyMetadata& WithUserName(const char* value) { SetUserName(value); return *this;}


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
    inline SSHPublicKeyMetadata& WithSSHPublicKeyId(const Aws::String& value) { SetSSHPublicKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline SSHPublicKeyMetadata& WithSSHPublicKeyId(Aws::String&& value) { SetSSHPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p>
     */
    inline SSHPublicKeyMetadata& WithSSHPublicKeyId(const char* value) { SetSSHPublicKeyId(value); return *this;}


    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline SSHPublicKeyMetadata& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the SSH public key. <code>Active</code> means that the key can
     * be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means that the key cannot be used.</p>
     */
    inline SSHPublicKeyMetadata& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


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
    inline SSHPublicKeyMetadata& WithUploadDate(const Aws::Utils::DateTime& value) { SetUploadDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the SSH public key was uploaded.</p>
     */
    inline SSHPublicKeyMetadata& WithUploadDate(Aws::Utils::DateTime&& value) { SetUploadDate(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet;

    StatusType m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_uploadDate;
    bool m_uploadDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
