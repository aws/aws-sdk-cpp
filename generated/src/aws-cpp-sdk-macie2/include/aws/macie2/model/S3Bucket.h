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
   * <p>Provides information about the S3 bucket that a finding applies to. If a
   * quota prevented Amazon Macie from retrieving and processing all the bucket's
   * information prior to generating the finding, the following values are UNKNOWN or
   * null: allowsUnencryptedObjectUploads, defaultServerSideEncryption, publicAccess,
   * and tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3Bucket">AWS API
   * Reference</a></p>
   */
  class S3Bucket
  {
  public:
    AWS_MACIE2_API S3Bucket() = default;
    AWS_MACIE2_API S3Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are added to the bucket. Possible values
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
    inline AllowsUnencryptedObjectUploads GetAllowsUnencryptedObjectUploads() const { return m_allowsUnencryptedObjectUploads; }
    inline bool AllowsUnencryptedObjectUploadsHasBeenSet() const { return m_allowsUnencryptedObjectUploadsHasBeenSet; }
    inline void SetAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads value) { m_allowsUnencryptedObjectUploadsHasBeenSet = true; m_allowsUnencryptedObjectUploads = value; }
    inline S3Bucket& WithAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads value) { SetAllowsUnencryptedObjectUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    S3Bucket& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created. This value can also indicate when changes such as edits to the bucket's
     * policy were most recently made to the bucket, relative to when the finding was
     * created or last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    S3Bucket& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default server-side encryption settings for the bucket.</p>
     */
    inline const ServerSideEncryption& GetDefaultServerSideEncryption() const { return m_defaultServerSideEncryption; }
    inline bool DefaultServerSideEncryptionHasBeenSet() const { return m_defaultServerSideEncryptionHasBeenSet; }
    template<typename DefaultServerSideEncryptionT = ServerSideEncryption>
    void SetDefaultServerSideEncryption(DefaultServerSideEncryptionT&& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = std::forward<DefaultServerSideEncryptionT>(value); }
    template<typename DefaultServerSideEncryptionT = ServerSideEncryption>
    S3Bucket& WithDefaultServerSideEncryption(DefaultServerSideEncryptionT&& value) { SetDefaultServerSideEncryption(std::forward<DefaultServerSideEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3Bucket& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name and canonical user ID for the Amazon Web Services account
     * that owns the bucket.</p>
     */
    inline const S3BucketOwner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = S3BucketOwner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = S3BucketOwner>
    S3Bucket& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions settings that determine whether the bucket is publicly
     * accessible.</p>
     */
    inline const BucketPublicAccess& GetPublicAccess() const { return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    template<typename PublicAccessT = BucketPublicAccess>
    void SetPublicAccess(PublicAccessT&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::forward<PublicAccessT>(value); }
    template<typename PublicAccessT = BucketPublicAccess>
    S3Bucket& WithPublicAccess(PublicAccessT&& value) { SetPublicAccess(std::forward<PublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are associated with the bucket.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<KeyValuePair>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<KeyValuePair>>
    S3Bucket& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = KeyValuePair>
    S3Bucket& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    AllowsUnencryptedObjectUploads m_allowsUnencryptedObjectUploads{AllowsUnencryptedObjectUploads::NOT_SET};
    bool m_allowsUnencryptedObjectUploadsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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
