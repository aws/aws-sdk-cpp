/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ebs/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EBS
{
namespace Model
{
  class StartSnapshotResult
  {
  public:
    AWS_EBS_API StartSnapshotResult();
    AWS_EBS_API StartSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EBS_API StartSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline StartSnapshotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline StartSnapshotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline StartSnapshotResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline StartSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline StartSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline StartSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline StartSnapshotResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline StartSnapshotResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the snapshot owner.</p>
     */
    inline StartSnapshotResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The status of the snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline StartSnapshotResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the snapshot.</p>
     */
    inline StartSnapshotResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the snapshot was created.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The timestamp when the snapshot was created.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the snapshot was created.</p>
     */
    inline StartSnapshotResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the snapshot was created.</p>
     */
    inline StartSnapshotResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline long long GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetVolumeSize(long long value) { m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline StartSnapshotResult& WithVolumeSize(long long value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }

    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline void SetBlockSize(int value) { m_blockSize = value; }

    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline StartSnapshotResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}


    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags applied to the snapshot. You can specify up to 50 tags per snapshot.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">
     * Tagging your Amazon EC2 resources</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p>
     */
    inline StartSnapshotResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline const Aws::String& GetParentSnapshotId() const{ return m_parentSnapshotId; }

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline void SetParentSnapshotId(const Aws::String& value) { m_parentSnapshotId = value; }

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline void SetParentSnapshotId(Aws::String&& value) { m_parentSnapshotId = std::move(value); }

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline void SetParentSnapshotId(const char* value) { m_parentSnapshotId.assign(value); }

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline StartSnapshotResult& WithParentSnapshotId(const Aws::String& value) { SetParentSnapshotId(value); return *this;}

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline StartSnapshotResult& WithParentSnapshotId(Aws::String&& value) { SetParentSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent snapshot.</p>
     */
    inline StartSnapshotResult& WithParentSnapshotId(const char* value) { SetParentSnapshotId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline StartSnapshotResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline StartSnapshotResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the snapshot.</p>
     */
    inline StartSnapshotResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_description;

    Aws::String m_snapshotId;

    Aws::String m_ownerId;

    Status m_status;

    Aws::Utils::DateTime m_startTime;

    long long m_volumeSize;

    int m_blockSize;

    Aws::Vector<Tag> m_tags;

    Aws::String m_parentSnapshotId;

    Aws::String m_kmsKeyArn;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
