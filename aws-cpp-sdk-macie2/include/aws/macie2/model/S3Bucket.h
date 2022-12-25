/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AllowsUnencryptedObjectUploads.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ServerSideEncryption.h>
#include <aws/macie2/model/S3BucketOwner.h>
#include <aws/macie2/model/BucketPublicAccess.h>
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
   * <p>Provides information about the S3 bucket that a finding applies
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3Bucket">AWS API
   * Reference</a></p>
   */
  class S3Bucket
  {
  public:
    AWS_MACIE2_API S3Bucket();
    AWS_MACIE2_API S3Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline const AllowsUnencryptedObjectUploads& GetAllowsUnencryptedObjectUploads() const{ return m_allowsUnencryptedObjectUploads; }

    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline bool AllowsUnencryptedObjectUploadsHasBeenSet() const { return m_allowsUnencryptedObjectUploadsHasBeenSet; }

    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline void SetAllowsUnencryptedObjectUploads(const AllowsUnencryptedObjectUploads& value) { m_allowsUnencryptedObjectUploadsHasBeenSet = true; m_allowsUnencryptedObjectUploads = value; }

    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline void SetAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads&& value) { m_allowsUnencryptedObjectUploadsHasBeenSet = true; m_allowsUnencryptedObjectUploads = std::move(value); }

    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline S3Bucket& WithAllowsUnencryptedObjectUploads(const AllowsUnencryptedObjectUploads& value) { SetAllowsUnencryptedObjectUploads(value); return *this;}

    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are uploaded to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline S3Bucket& WithAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads&& value) { SetAllowsUnencryptedObjectUploads(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline S3Bucket& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline S3Bucket& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline S3Bucket& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline S3Bucket& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline S3Bucket& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline const ServerSideEncryption& GetDefaultServerSideEncryption() const{ return m_defaultServerSideEncryption; }

    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline bool DefaultServerSideEncryptionHasBeenSet() const { return m_defaultServerSideEncryptionHasBeenSet; }

    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline void SetDefaultServerSideEncryption(const ServerSideEncryption& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = value; }

    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline void SetDefaultServerSideEncryption(ServerSideEncryption&& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = std::move(value); }

    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline S3Bucket& WithDefaultServerSideEncryption(const ServerSideEncryption& value) { SetDefaultServerSideEncryption(value); return *this;}

    /**
     * <p>The type of server-side encryption that's used by default to encrypt objects
     * in the bucket.</p>
     */
    inline S3Bucket& WithDefaultServerSideEncryption(ServerSideEncryption&& value) { SetDefaultServerSideEncryption(std::move(value)); return *this;}


    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Bucket& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Bucket& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Bucket& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline const S3BucketOwner& GetOwner() const{ return m_owner; }

    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline void SetOwner(const S3BucketOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline void SetOwner(S3BucketOwner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline S3Bucket& WithOwner(const S3BucketOwner& value) { SetOwner(value); return *this;}

    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline S3Bucket& WithOwner(S3BucketOwner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline const BucketPublicAccess& GetPublicAccess() const{ return m_publicAccess; }

    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }

    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline void SetPublicAccess(const BucketPublicAccess& value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }

    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline void SetPublicAccess(BucketPublicAccess&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::move(value); }

    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline S3Bucket& WithPublicAccess(const BucketPublicAccess& value) { SetPublicAccess(value); return *this;}

    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline S3Bucket& WithPublicAccess(BucketPublicAccess&& value) { SetPublicAccess(std::move(value)); return *this;}


    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline void SetTags(const Aws::Vector<KeyValuePair>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline void SetTags(Aws::Vector<KeyValuePair>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline S3Bucket& WithTags(const Aws::Vector<KeyValuePair>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline S3Bucket& WithTags(Aws::Vector<KeyValuePair>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline S3Bucket& AddTags(const KeyValuePair& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline S3Bucket& AddTags(KeyValuePair&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    AllowsUnencryptedObjectUploads m_allowsUnencryptedObjectUploads;
    bool m_allowsUnencryptedObjectUploadsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ServerSideEncryption m_defaultServerSideEncryption;
    bool m_defaultServerSideEncryptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3BucketOwner m_owner;
    bool m_ownerHasBeenSet = false;

    BucketPublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
