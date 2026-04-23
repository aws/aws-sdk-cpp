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
  class AWS_GLACIER_API S3Location
  {
  public:
    S3Location();
    S3Location(Aws::Utils::Json::JsonView jsonValue);
    S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline S3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline S3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the job results are stored.</p>
     */
    inline S3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline S3Location& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline S3Location& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix that is prepended to the results for this request.</p>
     */
    inline S3Location& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline S3Location& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>Contains information about the encryption used to store the job results in
     * Amazon S3.</p>
     */
    inline S3Location& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline const CannedACL& GetCannedACL() const{ return m_cannedACL; }

    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline bool CannedACLHasBeenSet() const { return m_cannedACLHasBeenSet; }

    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline void SetCannedACL(const CannedACL& value) { m_cannedACLHasBeenSet = true; m_cannedACL = value; }

    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline void SetCannedACL(CannedACL&& value) { m_cannedACLHasBeenSet = true; m_cannedACL = std::move(value); }

    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline S3Location& WithCannedACL(const CannedACL& value) { SetCannedACL(value); return *this;}

    /**
     * <p>The canned access control list (ACL) to apply to the job results.</p>
     */
    inline S3Location& WithCannedACL(CannedACL&& value) { SetCannedACL(std::move(value)); return *this;}


    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline const Aws::Vector<Grant>& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline void SetAccessControlList(const Aws::Vector<Grant>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline void SetAccessControlList(Aws::Vector<Grant>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline S3Location& WithAccessControlList(const Aws::Vector<Grant>& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline S3Location& WithAccessControlList(Aws::Vector<Grant>&& value) { SetAccessControlList(std::move(value)); return *this;}

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline S3Location& AddAccessControlList(const Grant& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }

    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline S3Location& AddAccessControlList(Grant&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagging() const{ return m_tagging; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline bool TaggingHasBeenSet() const { return m_taggingHasBeenSet; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline void SetTagging(const Aws::Map<Aws::String, Aws::String>& value) { m_taggingHasBeenSet = true; m_tagging = value; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline void SetTagging(Aws::Map<Aws::String, Aws::String>&& value) { m_taggingHasBeenSet = true; m_tagging = std::move(value); }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& WithTagging(const Aws::Map<Aws::String, Aws::String>& value) { SetTagging(value); return *this;}

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& WithTagging(Aws::Map<Aws::String, Aws::String>&& value) { SetTagging(std::move(value)); return *this;}

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(const Aws::String& key, const Aws::String& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, value); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(Aws::String&& key, const Aws::String& value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(const Aws::String& key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(Aws::String&& key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(const char* key, Aws::String&& value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(Aws::String&& key, const char* value) { m_taggingHasBeenSet = true; m_tagging.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag-set that is applied to the job results.</p>
     */
    inline S3Location& AddTagging(const char* key, const char* value) { m_taggingHasBeenSet = true; m_tagging.emplace(key, value); return *this; }


    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of metadata to store with the job results in Amazon S3.</p>
     */
    inline S3Location& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }


    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline S3Location& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The storage class used to store the job results.</p>
     */
    inline S3Location& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;

    CannedACL m_cannedACL;
    bool m_cannedACLHasBeenSet;

    Aws::Vector<Grant> m_accessControlList;
    bool m_accessControlListHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tagging;
    bool m_taggingHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
