/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ServerSideEncryption.h>
#include <aws/macie2/model/StorageClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/KeyValuePair.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an S3 object that a finding applies
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3Object">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API S3Object
  {
  public:
    S3Object();
    S3Object(Aws::Utils::Json::JsonView jsonValue);
    S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline S3Object& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline S3Object& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline S3Object& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline S3Object& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline S3Object& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline S3Object& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline S3Object& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline S3Object& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}

    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline S3Object& WithExtension(const char* value) { SetExtension(value); return *this;}


    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline S3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline S3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The full key (name) that's assigned to the object.</p>
     */
    inline S3Object& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline S3Object& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline S3Object& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline S3Object& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline S3Object& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the object, including the full key (name).</p>
     */
    inline S3Object& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Specifies whether the object is publicly accessible due to the combination of
     * permissions settings that apply to the object.</p>
     */
    inline bool GetPublicAccess() const{ return m_publicAccess; }

    /**
     * <p>Specifies whether the object is publicly accessible due to the combination of
     * permissions settings that apply to the object.</p>
     */
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }

    /**
     * <p>Specifies whether the object is publicly accessible due to the combination of
     * permissions settings that apply to the object.</p>
     */
    inline void SetPublicAccess(bool value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }

    /**
     * <p>Specifies whether the object is publicly accessible due to the combination of
     * permissions settings that apply to the object.</p>
     */
    inline S3Object& WithPublicAccess(bool value) { SetPublicAccess(value); return *this;}


    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline const ServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }

    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline void SetServerSideEncryption(const ServerSideEncryption& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }

    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline void SetServerSideEncryption(ServerSideEncryption&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::move(value); }

    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline S3Object& WithServerSideEncryption(const ServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}

    /**
     * <p>The type of server-side encryption that's used to encrypt the object.</p>
     */
    inline S3Object& WithServerSideEncryption(ServerSideEncryption&& value) { SetServerSideEncryption(std::move(value)); return *this;}


    /**
     * <p>The total storage size, in bytes, of the object.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The total storage size, in bytes, of the object.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The total storage size, in bytes, of the object.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The total storage size, in bytes, of the object.</p>
     */
    inline S3Object& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>The storage class of the object.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The storage class of the object.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The storage class of the object.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The storage class of the object.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>The storage class of the object.</p>
     */
    inline S3Object& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The storage class of the object.</p>
     */
    inline S3Object& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}


    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline void SetTags(const Aws::Vector<KeyValuePair>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline void SetTags(Aws::Vector<KeyValuePair>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline S3Object& WithTags(const Aws::Vector<KeyValuePair>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline S3Object& WithTags(Aws::Vector<KeyValuePair>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline S3Object& AddTags(const KeyValuePair& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline S3Object& AddTags(KeyValuePair&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline S3Object& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline S3Object& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline S3Object& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;

    Aws::String m_extension;
    bool m_extensionHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    bool m_publicAccess;
    bool m_publicAccessHasBeenSet;

    ServerSideEncryption m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet;

    Aws::Vector<KeyValuePair> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
