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
    AWS_GLACIER_API S3Location();
    AWS_GLACIER_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline S3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline S3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline S3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline S3Location& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline S3Location& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline S3Location& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline S3Location& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}
    inline S3Location& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline const CannedACL& GetCannedACL() const{ return m_cannedACL; }
    inline bool CannedACLHasBeenSet() const { return m_cannedACLHasBeenSet; }
    inline void SetCannedACL(const CannedACL& value) { m_cannedACLHasBeenSet = true; m_cannedACL = value; }
    inline void SetCannedACL(CannedACL&& value) { m_cannedACLHasBeenSet = true; m_cannedACL = std::move(value); }
    inline S3Location& WithCannedACL(const CannedACL& value) { SetCannedACL(value); return *this;}
    inline S3Location& WithCannedACL(CannedACL&& value) { SetCannedACL(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline const Aws::Vector<Grant>& GetAccessControlList() const{ return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    inline void SetAccessControlList(const Aws::Vector<Grant>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }
    inline void SetAccessControlList(Aws::Vector<Grant>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }
    inline S3Location& WithAccessControlList(const Aws::Vector<Grant>& value) { SetAccessControlList(value); return *this;}
    inline S3Location& WithAccessControlList(Aws::Vector<Grant>&& value) { SetAccessControlList(std::move(value)); return *this;}
    inline S3Location& AddAccessControlList(const Grant& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }
    inline S3Location& AddAccessControlList(Grant&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagging() const{ return m_tagging; }
    inline bool TaggingHasBeenSet() const { return m_taggingHasBeenSet; }
    inline void SetTagging(const Aws::Map<Aws::String, Aws::String>& value) { m_taggingHasBeenSet = true; m_tagging = value; }
    inline void SetTagging(Aws::Map<Aws::String, Aws::String>&& value) { m_taggingHasBeenSet = true; m_tagging = std::move(value); }
    inline S3Location& WithTagging(const Aws::Map<Aws::String, Aws::String>& value) { SetTagging(value); return *this;}
    inline S3Location& WithTagging(Aws::Map<Aws::String, Aws::String>&& value) { SetTagging(std::move(value)); return *this;}
    inline S3Location& AddTagging(const Aws::String& key, const Aws::String& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, value); return *this; }
    inline S3Location& AddTagging(Aws::String&& key, const Aws::String& value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), value); return *this; }
    inline S3Location& AddTagging(const Aws::String& key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, std::move(value)); return *this; }
    inline S3Location& AddTagging(Aws::String&& key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), std::move(value)); return *this; }
    inline S3Location& AddTagging(const char* key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, std::move(value)); return *this; }
    inline S3Location& AddTagging(Aws::String&& key, const char* value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), value); return *this; }
    inline S3Location& AddTagging(const char* key, const char* value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }
    inline S3Location& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}
    inline S3Location& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}
    inline S3Location& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    inline S3Location& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline S3Location& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline S3Location& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline S3Location& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline S3Location& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline S3Location& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }
    inline S3Location& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}
    inline S3Location& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    CannedACL m_cannedACL;
    bool m_cannedACLHasBeenSet = false;

    Aws::Vector<Grant> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagging;
    bool m_taggingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
