/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DefaultServerSideEncryption.h>
#include <aws/guardduty/model/PublicAccess.h>
#include <aws/guardduty/model/Tag.h>
#include <aws/guardduty/model/S3ObjectDetail.h>
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
   * <p>Contains information on the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3BucketDetail">AWS
   * API Reference</a></p>
   */
  class S3BucketDetail
  {
  public:
    AWS_GUARDDUTY_API S3BucketDetail() = default;
    AWS_GUARDDUTY_API S3BucketDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3BucketDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    S3BucketDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3BucketDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the bucket is a source or destination bucket.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    S3BucketDetail& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the bucket was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    S3BucketDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the S3 bucket.</p>
     */
    inline const Owner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    S3BucketDetail& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All tags attached to the S3 bucket</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    S3BucketDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    S3BucketDetail& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the server side encryption method used in the S3 bucket.</p>
     */
    inline const DefaultServerSideEncryption& GetDefaultServerSideEncryption() const { return m_defaultServerSideEncryption; }
    inline bool DefaultServerSideEncryptionHasBeenSet() const { return m_defaultServerSideEncryptionHasBeenSet; }
    template<typename DefaultServerSideEncryptionT = DefaultServerSideEncryption>
    void SetDefaultServerSideEncryption(DefaultServerSideEncryptionT&& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = std::forward<DefaultServerSideEncryptionT>(value); }
    template<typename DefaultServerSideEncryptionT = DefaultServerSideEncryption>
    S3BucketDetail& WithDefaultServerSideEncryption(DefaultServerSideEncryptionT&& value) { SetDefaultServerSideEncryption(std::forward<DefaultServerSideEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the public access policies that apply to the S3 bucket.</p>
     */
    inline const PublicAccess& GetPublicAccess() const { return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    template<typename PublicAccessT = PublicAccess>
    void SetPublicAccess(PublicAccessT&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::forward<PublicAccessT>(value); }
    template<typename PublicAccessT = PublicAccess>
    S3BucketDetail& WithPublicAccess(PublicAccessT&& value) { SetPublicAccess(std::forward<PublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the S3 object that was scanned.</p>
     */
    inline const Aws::Vector<S3ObjectDetail>& GetS3ObjectDetails() const { return m_s3ObjectDetails; }
    inline bool S3ObjectDetailsHasBeenSet() const { return m_s3ObjectDetailsHasBeenSet; }
    template<typename S3ObjectDetailsT = Aws::Vector<S3ObjectDetail>>
    void SetS3ObjectDetails(S3ObjectDetailsT&& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails = std::forward<S3ObjectDetailsT>(value); }
    template<typename S3ObjectDetailsT = Aws::Vector<S3ObjectDetail>>
    S3BucketDetail& WithS3ObjectDetails(S3ObjectDetailsT&& value) { SetS3ObjectDetails(std::forward<S3ObjectDetailsT>(value)); return *this;}
    template<typename S3ObjectDetailsT = S3ObjectDetail>
    S3BucketDetail& AddS3ObjectDetails(S3ObjectDetailsT&& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails.emplace_back(std::forward<S3ObjectDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DefaultServerSideEncryption m_defaultServerSideEncryption;
    bool m_defaultServerSideEncryptionHasBeenSet = false;

    PublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet = false;

    Aws::Vector<S3ObjectDetail> m_s3ObjectDetails;
    bool m_s3ObjectDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
