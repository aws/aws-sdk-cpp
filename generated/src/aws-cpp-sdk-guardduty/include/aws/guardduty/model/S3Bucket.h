/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/PublicAccessStatus.h>
#include <aws/guardduty/model/PublicAccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon S3 bucket policies and
   * encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3Bucket">AWS
   * API Reference</a></p>
   */
  class S3Bucket
  {
  public:
    AWS_GUARDDUTY_API S3Bucket();
    AWS_GUARDDUTY_API S3Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The owner ID of the associated S3Amazon S3bucket.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline S3Bucket& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline S3Bucket& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline S3Bucket& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Amazon S3 bucket was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline S3Bucket& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline S3Bucket& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption used for the Amazon S3 buckets and its objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/serv-side-encryption.html">Protecting
     * data with server-side encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }
    inline S3Bucket& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}
    inline S3Bucket& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}
    inline S3Bucket& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key that is used to encrypt
     * the Amazon S3 bucket and its objects.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline S3Bucket& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline S3Bucket& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline S3Bucket& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the effective permissions on this S3 bucket, after factoring all
     * the attached policies.</p>
     */
    inline const Aws::String& GetEffectivePermission() const{ return m_effectivePermission; }
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }
    inline void SetEffectivePermission(const Aws::String& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = value; }
    inline void SetEffectivePermission(Aws::String&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::move(value); }
    inline void SetEffectivePermission(const char* value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission.assign(value); }
    inline S3Bucket& WithEffectivePermission(const Aws::String& value) { SetEffectivePermission(value); return *this;}
    inline S3Bucket& WithEffectivePermission(Aws::String&& value) { SetEffectivePermission(std::move(value)); return *this;}
    inline S3Bucket& WithEffectivePermission(const char* value) { SetEffectivePermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the public read access is allowed for an Amazon S3
     * bucket.</p>
     */
    inline const PublicAccessStatus& GetPublicReadAccess() const{ return m_publicReadAccess; }
    inline bool PublicReadAccessHasBeenSet() const { return m_publicReadAccessHasBeenSet; }
    inline void SetPublicReadAccess(const PublicAccessStatus& value) { m_publicReadAccessHasBeenSet = true; m_publicReadAccess = value; }
    inline void SetPublicReadAccess(PublicAccessStatus&& value) { m_publicReadAccessHasBeenSet = true; m_publicReadAccess = std::move(value); }
    inline S3Bucket& WithPublicReadAccess(const PublicAccessStatus& value) { SetPublicReadAccess(value); return *this;}
    inline S3Bucket& WithPublicReadAccess(PublicAccessStatus&& value) { SetPublicReadAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the public write access is allowed for an Amazon S3
     * bucket.</p>
     */
    inline const PublicAccessStatus& GetPublicWriteAccess() const{ return m_publicWriteAccess; }
    inline bool PublicWriteAccessHasBeenSet() const { return m_publicWriteAccessHasBeenSet; }
    inline void SetPublicWriteAccess(const PublicAccessStatus& value) { m_publicWriteAccessHasBeenSet = true; m_publicWriteAccess = value; }
    inline void SetPublicWriteAccess(PublicAccessStatus&& value) { m_publicWriteAccessHasBeenSet = true; m_publicWriteAccess = std::move(value); }
    inline S3Bucket& WithPublicWriteAccess(const PublicAccessStatus& value) { SetPublicWriteAccess(value); return *this;}
    inline S3Bucket& WithPublicWriteAccess(PublicAccessStatus&& value) { SetPublicWriteAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the public access policies that apply to the
     * Amazon S3 bucket at the account level.</p>
     */
    inline const PublicAccessConfiguration& GetAccountPublicAccess() const{ return m_accountPublicAccess; }
    inline bool AccountPublicAccessHasBeenSet() const { return m_accountPublicAccessHasBeenSet; }
    inline void SetAccountPublicAccess(const PublicAccessConfiguration& value) { m_accountPublicAccessHasBeenSet = true; m_accountPublicAccess = value; }
    inline void SetAccountPublicAccess(PublicAccessConfiguration&& value) { m_accountPublicAccessHasBeenSet = true; m_accountPublicAccess = std::move(value); }
    inline S3Bucket& WithAccountPublicAccess(const PublicAccessConfiguration& value) { SetAccountPublicAccess(value); return *this;}
    inline S3Bucket& WithAccountPublicAccess(PublicAccessConfiguration&& value) { SetAccountPublicAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about public access policies that apply to the Amazon S3
     * bucket.</p>
     */
    inline const PublicAccessConfiguration& GetBucketPublicAccess() const{ return m_bucketPublicAccess; }
    inline bool BucketPublicAccessHasBeenSet() const { return m_bucketPublicAccessHasBeenSet; }
    inline void SetBucketPublicAccess(const PublicAccessConfiguration& value) { m_bucketPublicAccessHasBeenSet = true; m_bucketPublicAccess = value; }
    inline void SetBucketPublicAccess(PublicAccessConfiguration&& value) { m_bucketPublicAccessHasBeenSet = true; m_bucketPublicAccess = std::move(value); }
    inline S3Bucket& WithBucketPublicAccess(const PublicAccessConfiguration& value) { SetBucketPublicAccess(value); return *this;}
    inline S3Bucket& WithBucketPublicAccess(PublicAccessConfiguration&& value) { SetBucketPublicAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list of Amazon S3 object identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3ObjectUids() const{ return m_s3ObjectUids; }
    inline bool S3ObjectUidsHasBeenSet() const { return m_s3ObjectUidsHasBeenSet; }
    inline void SetS3ObjectUids(const Aws::Vector<Aws::String>& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids = value; }
    inline void SetS3ObjectUids(Aws::Vector<Aws::String>&& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids = std::move(value); }
    inline S3Bucket& WithS3ObjectUids(const Aws::Vector<Aws::String>& value) { SetS3ObjectUids(value); return *this;}
    inline S3Bucket& WithS3ObjectUids(Aws::Vector<Aws::String>&& value) { SetS3ObjectUids(std::move(value)); return *this;}
    inline S3Bucket& AddS3ObjectUids(const Aws::String& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids.push_back(value); return *this; }
    inline S3Bucket& AddS3ObjectUids(Aws::String&& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids.push_back(std::move(value)); return *this; }
    inline S3Bucket& AddS3ObjectUids(const char* value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_effectivePermission;
    bool m_effectivePermissionHasBeenSet = false;

    PublicAccessStatus m_publicReadAccess;
    bool m_publicReadAccessHasBeenSet = false;

    PublicAccessStatus m_publicWriteAccess;
    bool m_publicWriteAccessHasBeenSet = false;

    PublicAccessConfiguration m_accountPublicAccess;
    bool m_accountPublicAccessHasBeenSet = false;

    PublicAccessConfiguration m_bucketPublicAccess;
    bool m_bucketPublicAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3ObjectUids;
    bool m_s3ObjectUidsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
