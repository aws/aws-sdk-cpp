/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
   * <p>The details for a server host key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedHostKey">AWS
   * API Reference</a></p>
   */
  class DescribedHostKey
  {
  public:
    AWS_TRANSFER_API DescribedHostKey();
    AWS_TRANSFER_API DescribedHostKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedHostKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline DescribedHostKey& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline DescribedHostKey& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline DescribedHostKey& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DescribedHostKey& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline DescribedHostKey& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline DescribedHostKey& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}


    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline const Aws::String& GetHostKeyFingerprint() const{ return m_hostKeyFingerprint; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline bool HostKeyFingerprintHasBeenSet() const { return m_hostKeyFingerprintHasBeenSet; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetHostKeyFingerprint(const Aws::String& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = value; }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetHostKeyFingerprint(Aws::String&& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = std::move(value); }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline void SetHostKeyFingerprint(const char* value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint.assign(value); }

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline DescribedHostKey& WithHostKeyFingerprint(const Aws::String& value) { SetHostKeyFingerprint(value); return *this;}

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline DescribedHostKey& WithHostKeyFingerprint(Aws::String&& value) { SetHostKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline DescribedHostKey& WithHostKeyFingerprint(const char* value) { SetHostKeyFingerprint(value); return *this;}


    /**
     * <p>The text description for this host key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description for this host key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The text description for this host key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description for this host key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The text description for this host key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description for this host key.</p>
     */
    inline DescribedHostKey& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description for this host key.</p>
     */
    inline DescribedHostKey& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The text description for this host key.</p>
     */
    inline DescribedHostKey& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline DescribedHostKey& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline DescribedHostKey& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline DescribedHostKey& WithType(const char* value) { SetType(value); return *this;}


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
    inline DescribedHostKey& WithDateImported(const Aws::Utils::DateTime& value) { SetDateImported(value); return *this;}

    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline DescribedHostKey& WithDateImported(Aws::Utils::DateTime&& value) { SetDateImported(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline DescribedHostKey& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline DescribedHostKey& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline DescribedHostKey& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline DescribedHostKey& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_hostKeyId;
    bool m_hostKeyIdHasBeenSet = false;

    Aws::String m_hostKeyFingerprint;
    bool m_hostKeyFingerprintHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_dateImported;
    bool m_dateImportedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
