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
    AWS_TRANSFER_API DescribedHostKey() = default;
    AWS_TRANSFER_API DescribedHostKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedHostKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the host key.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribedHostKey& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the host key.</p>
     */
    inline const Aws::String& GetHostKeyId() const { return m_hostKeyId; }
    inline bool HostKeyIdHasBeenSet() const { return m_hostKeyIdHasBeenSet; }
    template<typename HostKeyIdT = Aws::String>
    void SetHostKeyId(HostKeyIdT&& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = std::forward<HostKeyIdT>(value); }
    template<typename HostKeyIdT = Aws::String>
    DescribedHostKey& WithHostKeyId(HostKeyIdT&& value) { SetHostKeyId(std::forward<HostKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key fingerprint, which is a short sequence of bytes used to
     * identify the longer public key.</p>
     */
    inline const Aws::String& GetHostKeyFingerprint() const { return m_hostKeyFingerprint; }
    inline bool HostKeyFingerprintHasBeenSet() const { return m_hostKeyFingerprintHasBeenSet; }
    template<typename HostKeyFingerprintT = Aws::String>
    void SetHostKeyFingerprint(HostKeyFingerprintT&& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = std::forward<HostKeyFingerprintT>(value); }
    template<typename HostKeyFingerprintT = Aws::String>
    DescribedHostKey& WithHostKeyFingerprint(HostKeyFingerprintT&& value) { SetHostKeyFingerprint(std::forward<HostKeyFingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text description for this host key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribedHostKey& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that is used for the host key. The <code>Type</code>
     * parameter is specified by using one of the following values:</p> <ul> <li> <p>
     * <code>ssh-rsa</code> </p> </li> <li> <p> <code>ssh-ed25519</code> </p> </li>
     * <li> <p> <code>ecdsa-sha2-nistp256</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp384</code> </p> </li> <li> <p>
     * <code>ecdsa-sha2-nistp521</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DescribedHostKey& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the host key was added to the server.</p>
     */
    inline const Aws::Utils::DateTime& GetDateImported() const { return m_dateImported; }
    inline bool DateImportedHasBeenSet() const { return m_dateImportedHasBeenSet; }
    template<typename DateImportedT = Aws::Utils::DateTime>
    void SetDateImported(DateImportedT&& value) { m_dateImportedHasBeenSet = true; m_dateImported = std::forward<DateImportedT>(value); }
    template<typename DateImportedT = Aws::Utils::DateTime>
    DescribedHostKey& WithDateImported(DateImportedT&& value) { SetDateImported(std::forward<DateImportedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribedHostKey& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribedHostKey& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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

    Aws::Utils::DateTime m_dateImported{};
    bool m_dateImportedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
