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
    AWS_GUARDDUTY_API S3Bucket() = default;
    AWS_GUARDDUTY_API S3Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The owner ID of the associated S3Amazon S3bucket.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    S3Bucket& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Amazon S3 bucket was created.</p>
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
     * <p>The type of encryption used for the Amazon S3 buckets and its objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/serv-side-encryption.html">Protecting
     * data with server-side encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    template<typename EncryptionTypeT = Aws::String>
    void SetEncryptionType(EncryptionTypeT&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::forward<EncryptionTypeT>(value); }
    template<typename EncryptionTypeT = Aws::String>
    S3Bucket& WithEncryptionType(EncryptionTypeT&& value) { SetEncryptionType(std::forward<EncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key that is used to encrypt
     * the Amazon S3 bucket and its objects.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    S3Bucket& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the effective permissions on this S3 bucket, after factoring all
     * the attached policies.</p>
     */
    inline const Aws::String& GetEffectivePermission() const { return m_effectivePermission; }
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }
    template<typename EffectivePermissionT = Aws::String>
    void SetEffectivePermission(EffectivePermissionT&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::forward<EffectivePermissionT>(value); }
    template<typename EffectivePermissionT = Aws::String>
    S3Bucket& WithEffectivePermission(EffectivePermissionT&& value) { SetEffectivePermission(std::forward<EffectivePermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the public read access is allowed for an Amazon S3
     * bucket.</p>
     */
    inline PublicAccessStatus GetPublicReadAccess() const { return m_publicReadAccess; }
    inline bool PublicReadAccessHasBeenSet() const { return m_publicReadAccessHasBeenSet; }
    inline void SetPublicReadAccess(PublicAccessStatus value) { m_publicReadAccessHasBeenSet = true; m_publicReadAccess = value; }
    inline S3Bucket& WithPublicReadAccess(PublicAccessStatus value) { SetPublicReadAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the public write access is allowed for an Amazon S3
     * bucket.</p>
     */
    inline PublicAccessStatus GetPublicWriteAccess() const { return m_publicWriteAccess; }
    inline bool PublicWriteAccessHasBeenSet() const { return m_publicWriteAccessHasBeenSet; }
    inline void SetPublicWriteAccess(PublicAccessStatus value) { m_publicWriteAccessHasBeenSet = true; m_publicWriteAccess = value; }
    inline S3Bucket& WithPublicWriteAccess(PublicAccessStatus value) { SetPublicWriteAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the public access policies that apply to the
     * Amazon S3 bucket at the account level.</p>
     */
    inline const PublicAccessConfiguration& GetAccountPublicAccess() const { return m_accountPublicAccess; }
    inline bool AccountPublicAccessHasBeenSet() const { return m_accountPublicAccessHasBeenSet; }
    template<typename AccountPublicAccessT = PublicAccessConfiguration>
    void SetAccountPublicAccess(AccountPublicAccessT&& value) { m_accountPublicAccessHasBeenSet = true; m_accountPublicAccess = std::forward<AccountPublicAccessT>(value); }
    template<typename AccountPublicAccessT = PublicAccessConfiguration>
    S3Bucket& WithAccountPublicAccess(AccountPublicAccessT&& value) { SetAccountPublicAccess(std::forward<AccountPublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about public access policies that apply to the Amazon S3
     * bucket.</p>
     */
    inline const PublicAccessConfiguration& GetBucketPublicAccess() const { return m_bucketPublicAccess; }
    inline bool BucketPublicAccessHasBeenSet() const { return m_bucketPublicAccessHasBeenSet; }
    template<typename BucketPublicAccessT = PublicAccessConfiguration>
    void SetBucketPublicAccess(BucketPublicAccessT&& value) { m_bucketPublicAccessHasBeenSet = true; m_bucketPublicAccess = std::forward<BucketPublicAccessT>(value); }
    template<typename BucketPublicAccessT = PublicAccessConfiguration>
    S3Bucket& WithBucketPublicAccess(BucketPublicAccessT&& value) { SetBucketPublicAccess(std::forward<BucketPublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list of Amazon S3 object identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3ObjectUids() const { return m_s3ObjectUids; }
    inline bool S3ObjectUidsHasBeenSet() const { return m_s3ObjectUidsHasBeenSet; }
    template<typename S3ObjectUidsT = Aws::Vector<Aws::String>>
    void SetS3ObjectUids(S3ObjectUidsT&& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids = std::forward<S3ObjectUidsT>(value); }
    template<typename S3ObjectUidsT = Aws::Vector<Aws::String>>
    S3Bucket& WithS3ObjectUids(S3ObjectUidsT&& value) { SetS3ObjectUids(std::forward<S3ObjectUidsT>(value)); return *this;}
    template<typename S3ObjectUidsT = Aws::String>
    S3Bucket& AddS3ObjectUids(S3ObjectUidsT&& value) { m_s3ObjectUidsHasBeenSet = true; m_s3ObjectUids.emplace_back(std::forward<S3ObjectUidsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_effectivePermission;
    bool m_effectivePermissionHasBeenSet = false;

    PublicAccessStatus m_publicReadAccess{PublicAccessStatus::NOT_SET};
    bool m_publicReadAccessHasBeenSet = false;

    PublicAccessStatus m_publicWriteAccess{PublicAccessStatus::NOT_SET};
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
