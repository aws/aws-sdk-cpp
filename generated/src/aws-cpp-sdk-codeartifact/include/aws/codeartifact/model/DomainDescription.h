/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/DomainStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Information about a domain. A domain is a container for repositories. When
   * you create a domain, it is empty until you add one or more repositories.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DomainDescription">AWS
   * API Reference</a></p>
   */
  class DomainDescription
  {
  public:
    AWS_CODEARTIFACT_API DomainDescription();
    AWS_CODEARTIFACT_API DomainDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API DomainDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the domain. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline DomainDescription& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline DomainDescription& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID that owns the domain. </p>
     */
    inline DomainDescription& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline DomainDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline DomainDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the domain. </p>
     */
    inline DomainDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The current status of a domain. </p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of a domain. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of a domain. </p>
     */
    inline void SetStatus(const DomainStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of a domain. </p>
     */
    inline void SetStatus(DomainStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of a domain. </p>
     */
    inline DomainDescription& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of a domain. </p>
     */
    inline DomainDescription& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline DomainDescription& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p> A timestamp that represents the date and time the domain was created. </p>
     */
    inline DomainDescription& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline DomainDescription& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline DomainDescription& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p> The ARN of an Key Management Service (KMS) key associated with a domain.
     * </p>
     */
    inline DomainDescription& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p> The number of repositories in the domain. </p>
     */
    inline int GetRepositoryCount() const{ return m_repositoryCount; }

    /**
     * <p> The number of repositories in the domain. </p>
     */
    inline bool RepositoryCountHasBeenSet() const { return m_repositoryCountHasBeenSet; }

    /**
     * <p> The number of repositories in the domain. </p>
     */
    inline void SetRepositoryCount(int value) { m_repositoryCountHasBeenSet = true; m_repositoryCount = value; }

    /**
     * <p> The number of repositories in the domain. </p>
     */
    inline DomainDescription& WithRepositoryCount(int value) { SetRepositoryCount(value); return *this;}


    /**
     * <p> The total size of all assets in the domain. </p>
     */
    inline long long GetAssetSizeBytes() const{ return m_assetSizeBytes; }

    /**
     * <p> The total size of all assets in the domain. </p>
     */
    inline bool AssetSizeBytesHasBeenSet() const { return m_assetSizeBytesHasBeenSet; }

    /**
     * <p> The total size of all assets in the domain. </p>
     */
    inline void SetAssetSizeBytes(long long value) { m_assetSizeBytesHasBeenSet = true; m_assetSizeBytes = value; }

    /**
     * <p> The total size of all assets in the domain. </p>
     */
    inline DomainDescription& WithAssetSizeBytes(long long value) { SetAssetSizeBytes(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline DomainDescription& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline DomainDescription& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that is used to store
     * package assets in the domain.</p>
     */
    inline DomainDescription& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DomainStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    int m_repositoryCount;
    bool m_repositoryCountHasBeenSet = false;

    long long m_assetSizeBytes;
    bool m_assetSizeBytesHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
