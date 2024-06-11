﻿/**
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
   * <p>Provides information about the S3 object that a finding applies
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3Object">AWS API
   * Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_MACIE2_API S3Object();
    AWS_MACIE2_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the object.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }
    inline S3Object& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}
    inline S3Object& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}
    inline S3Object& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) that identifies the affected version of the object. If
     * the object was overwritten or changed after Amazon Macie produced the finding,
     * this value might be different from the current ETag for the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline S3Object& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline S3Object& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline S3Object& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file name extension of the object. If the object doesn't have a file name
     * extension, this value is "".</p>
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }
    inline S3Object& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}
    inline S3Object& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}
    inline S3Object& WithExtension(const char* value) { SetExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name (<i>key</i>) of the object, including the object's prefix if
     * applicable.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline S3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline S3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline S3Object& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the object was
     * last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline S3Object& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline S3Object& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path to the affected object, including the name of the affected
     * bucket and the object's name (key).</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline S3Object& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline S3Object& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline S3Object& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the object is publicly accessible due to the combination of
     * permissions settings that apply to the object.</p>
     */
    inline bool GetPublicAccess() const{ return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    inline void SetPublicAccess(bool value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }
    inline S3Object& WithPublicAccess(bool value) { SetPublicAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server-side encryption that was used to encrypt the object.</p>
     */
    inline const ServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    inline void SetServerSideEncryption(const ServerSideEncryption& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline void SetServerSideEncryption(ServerSideEncryption&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::move(value); }
    inline S3Object& WithServerSideEncryption(const ServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}
    inline S3Object& WithServerSideEncryption(ServerSideEncryption&& value) { SetServerSideEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the object.</p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline S3Object& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class of the object.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }
    inline S3Object& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}
    inline S3Object& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are associated with the object.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<KeyValuePair>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<KeyValuePair>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline S3Object& WithTags(const Aws::Vector<KeyValuePair>& value) { SetTags(value); return *this;}
    inline S3Object& WithTags(Aws::Vector<KeyValuePair>&& value) { SetTags(std::move(value)); return *this;}
    inline S3Object& AddTags(const KeyValuePair& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline S3Object& AddTags(KeyValuePair&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the affected version of the object.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline S3Object& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline S3Object& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline S3Object& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_extension;
    bool m_extensionHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    bool m_publicAccess;
    bool m_publicAccessHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
