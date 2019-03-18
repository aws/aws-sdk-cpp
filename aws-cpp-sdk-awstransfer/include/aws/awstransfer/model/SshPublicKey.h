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
   * associated with a user account for a specific server (as identified by
   * <code>ServerId</code>). The information returned includes the date the key was
   * imported, the public key contents, and the public key ID. A user can store more
   * than one SSH public key associated with their user name on a specific SFTP
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SshPublicKey">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API SshPublicKey
  {
  public:
    SshPublicKey();
    SshPublicKey(Aws::Utils::Json::JsonView jsonValue);
    SshPublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline const Aws::Utils::DateTime& GetDateImported() const{ return m_dateImported; }

    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline bool DateImportedHasBeenSet() const { return m_dateImportedHasBeenSet; }

    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline void SetDateImported(const Aws::Utils::DateTime& value) { m_dateImportedHasBeenSet = true; m_dateImported = value; }

    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline void SetDateImported(Aws::Utils::DateTime&& value) { m_dateImportedHasBeenSet = true; m_dateImported = std::move(value); }

    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline SshPublicKey& WithDateImported(const Aws::Utils::DateTime& value) { SetDateImported(value); return *this;}

    /**
     * <p>The date that the public key was added to the user account.</p>
     */
    inline SshPublicKey& WithDateImported(Aws::Utils::DateTime&& value) { SetDateImported(std::move(value)); return *this;}


    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const{ return m_sshPublicKeyBody; }

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline void SetSshPublicKeyBody(const Aws::String& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = value; }

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline void SetSshPublicKeyBody(Aws::String&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::move(value); }

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline void SetSshPublicKeyBody(const char* value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody.assign(value); }

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(const Aws::String& value) { SetSshPublicKeyBody(value); return *this;}

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(Aws::String&& value) { SetSshPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The content of the SSH public key as specified by the
     * <code>PublicKeyId</code>.</p>
     */
    inline SshPublicKey& WithSshPublicKeyBody(const char* value) { SetSshPublicKeyBody(value); return *this;}


    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const{ return m_sshPublicKeyId; }

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline bool SshPublicKeyIdHasBeenSet() const { return m_sshPublicKeyIdHasBeenSet; }

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline void SetSshPublicKeyId(const Aws::String& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = value; }

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline void SetSshPublicKeyId(Aws::String&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::move(value); }

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline void SetSshPublicKeyId(const char* value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId.assign(value); }

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(const Aws::String& value) { SetSshPublicKeyId(value); return *this;}

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(Aws::String&& value) { SetSshPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>The <code>SshPublicKeyId</code> parameter contains the identifier of the
     * public key.</p>
     */
    inline SshPublicKey& WithSshPublicKeyId(const char* value) { SetSshPublicKeyId(value); return *this;}

  private:

    Aws::Utils::DateTime m_dateImported;
    bool m_dateImportedHasBeenSet;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
