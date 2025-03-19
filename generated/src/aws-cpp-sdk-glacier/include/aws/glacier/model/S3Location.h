/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/Encryption.h>
#include <aws/glacier/model/CannedACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glacier/model/StorageClass.h>
#include <aws/glacier/model/Grant.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the location in Amazon S3 where the select job
   * results are stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_GLACIER_API S3Location() = default;
    AWS_GLACIER_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3Location& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3Location& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    S3Location& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline CannedACL GetCannedACL() const { return m_cannedACL; }
    inline bool CannedACLHasBeenSet() const { return m_cannedACLHasBeenSet; }
    inline void SetCannedACL(CannedACL value) { m_cannedACLHasBeenSet = true; m_cannedACL = value; }
    inline S3Location& WithCannedACL(CannedACL value) { SetCannedACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline const Aws::Vector<Grant>& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = Aws::Vector<Grant>>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = Aws::Vector<Grant>>
    S3Location& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    template<typename AccessControlListT = Grant>
    S3Location& AddAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.emplace_back(std::forward<AccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagging() const { return m_tagging; }
    inline bool TaggingHasBeenSet() const { return m_taggingHasBeenSet; }
    template<typename TaggingT = Aws::Map<Aws::String, Aws::String>>
    void SetTagging(TaggingT&& value) { m_taggingHasBeenSet = true; m_tagging = std::forward<TaggingT>(value); }
    template<typename TaggingT = Aws::Map<Aws::String, Aws::String>>
    S3Location& WithTagging(TaggingT&& value) { SetTagging(std::forward<TaggingT>(value)); return *this;}
    template<typename TaggingKeyT = Aws::String, typename TaggingValueT = Aws::String>
    S3Location& AddTagging(TaggingKeyT&& key, TaggingValueT&& value) {
      m_taggingHasBeenSet = true; m_tagging.emplace(std::forward<TaggingKeyT>(key), std::forward<TaggingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    S3Location& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    S3Location& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline S3Location& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    CannedACL m_cannedACL{CannedACL::NOT_SET};
    bool m_cannedACLHasBeenSet = false;

    Aws::Vector<Grant> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagging;
    bool m_taggingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
