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
    AWS_GUARDDUTY_API S3BucketDetail();
    AWS_GUARDDUTY_API S3BucketDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3BucketDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline S3BucketDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline S3BucketDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline S3BucketDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline S3BucketDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline S3BucketDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline S3BucketDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the bucket is a source or destination bucket.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline S3BucketDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline S3BucketDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline S3BucketDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the bucket was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline S3BucketDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline S3BucketDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the S3 bucket.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline S3BucketDetail& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline S3BucketDetail& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All tags attached to the S3 bucket</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline S3BucketDetail& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline S3BucketDetail& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline S3BucketDetail& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline S3BucketDetail& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the server side encryption method used in the S3 bucket.</p>
     */
    inline const DefaultServerSideEncryption& GetDefaultServerSideEncryption() const{ return m_defaultServerSideEncryption; }
    inline bool DefaultServerSideEncryptionHasBeenSet() const { return m_defaultServerSideEncryptionHasBeenSet; }
    inline void SetDefaultServerSideEncryption(const DefaultServerSideEncryption& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = value; }
    inline void SetDefaultServerSideEncryption(DefaultServerSideEncryption&& value) { m_defaultServerSideEncryptionHasBeenSet = true; m_defaultServerSideEncryption = std::move(value); }
    inline S3BucketDetail& WithDefaultServerSideEncryption(const DefaultServerSideEncryption& value) { SetDefaultServerSideEncryption(value); return *this;}
    inline S3BucketDetail& WithDefaultServerSideEncryption(DefaultServerSideEncryption&& value) { SetDefaultServerSideEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the public access policies that apply to the S3 bucket.</p>
     */
    inline const PublicAccess& GetPublicAccess() const{ return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    inline void SetPublicAccess(const PublicAccess& value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }
    inline void SetPublicAccess(PublicAccess&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::move(value); }
    inline S3BucketDetail& WithPublicAccess(const PublicAccess& value) { SetPublicAccess(value); return *this;}
    inline S3BucketDetail& WithPublicAccess(PublicAccess&& value) { SetPublicAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the S3 object that was scanned.</p>
     */
    inline const Aws::Vector<S3ObjectDetail>& GetS3ObjectDetails() const{ return m_s3ObjectDetails; }
    inline bool S3ObjectDetailsHasBeenSet() const { return m_s3ObjectDetailsHasBeenSet; }
    inline void SetS3ObjectDetails(const Aws::Vector<S3ObjectDetail>& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails = value; }
    inline void SetS3ObjectDetails(Aws::Vector<S3ObjectDetail>&& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails = std::move(value); }
    inline S3BucketDetail& WithS3ObjectDetails(const Aws::Vector<S3ObjectDetail>& value) { SetS3ObjectDetails(value); return *this;}
    inline S3BucketDetail& WithS3ObjectDetails(Aws::Vector<S3ObjectDetail>&& value) { SetS3ObjectDetails(std::move(value)); return *this;}
    inline S3BucketDetail& AddS3ObjectDetails(const S3ObjectDetail& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails.push_back(value); return *this; }
    inline S3BucketDetail& AddS3ObjectDetails(S3ObjectDetail&& value) { m_s3ObjectDetailsHasBeenSet = true; m_s3ObjectDetails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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
