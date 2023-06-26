/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Returns properties of the host key that's specified.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedHostKey">AWS
   * API Reference</a></p>
   */
  class ListedHostKey
  {
  public:
    AWS_TRANSFER_API ListedHostKey();
    AWS_TRANSFER_API ListedHostKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedHostKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline ListedHostKey& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline ListedHostKey& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the host key.</p>
     */
    inline ListedHostKey& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline const Aws::String& GetHostKeyId() const{ return m_hostKeyId; }

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline bool HostKeyIdHasBeenSet() const { return m_hostKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline void SetHostKeyId(const Aws::String& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = value; }

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline void SetHostKeyId(Aws::String&& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = std::move(value); }

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline void SetHostKeyId(const char* value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId.assign(value); }

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline ListedHostKey& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline ListedHostKey& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline ListedHostKey& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}


    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::move(value); }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetFingerprint(const char* value) { m_fingerprintHasBeenSet = true; m_fingerprint.assign(value); }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline ListedHostKey& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline ListedHostKey& WithFingerprint(Aws::String&& value) { SetFingerprint(std::move(value)); return *this;}

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline ListedHostKey& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}


    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline ListedHostKey& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline ListedHostKey& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The current description for the host key. You can change it by calling the
     * <code>UpdateHostKey</code> operation and providing a new description.</p>
     */
    inline ListedHostKey& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline ListedHostKey& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline ListedHostKey& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline ListedHostKey& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline const Aws::Utils::DateTime& GetDateImported() const{ return m_dateImported; }

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline bool DateImportedHasBeenSet() const { return m_dateImportedHasBeenSet; }

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline void SetDateImported(const Aws::Utils::DateTime& value) { m_dateImportedHasBeenSet = true; m_dateImported = value; }

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline void SetDateImported(Aws::Utils::DateTime&& value) { m_dateImportedHasBeenSet = true; m_dateImported = std::move(value); }

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline ListedHostKey& WithDateImported(const Aws::Utils::DateTime& value) { SetDateImported(value); return *this;}

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline ListedHostKey& WithDateImported(Aws::Utils::DateTime&& value) { SetDateImported(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_hostKeyId;
    bool m_hostKeyIdHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_dateImported;
    bool m_dateImportedHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
