/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CloudWatchEncryption.h>
#include <aws/glue/model/JobBookmarksEncryption.h>
#include <aws/glue/model/S3Encryption.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an encryption configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_GLUE_API EncryptionConfiguration();
    AWS_GLUE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline const Aws::Vector<S3Encryption>& GetS3Encryption() const{ return m_s3Encryption; }

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline bool S3EncryptionHasBeenSet() const { return m_s3EncryptionHasBeenSet; }

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline void SetS3Encryption(const Aws::Vector<S3Encryption>& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = value; }

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline void SetS3Encryption(Aws::Vector<S3Encryption>&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = std::move(value); }

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline EncryptionConfiguration& WithS3Encryption(const Aws::Vector<S3Encryption>& value) { SetS3Encryption(value); return *this;}

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline EncryptionConfiguration& WithS3Encryption(Aws::Vector<S3Encryption>&& value) { SetS3Encryption(std::move(value)); return *this;}

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline EncryptionConfiguration& AddS3Encryption(const S3Encryption& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption.push_back(value); return *this; }

    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline EncryptionConfiguration& AddS3Encryption(S3Encryption&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption.push_back(std::move(value)); return *this; }


    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline const CloudWatchEncryption& GetCloudWatchEncryption() const{ return m_cloudWatchEncryption; }

    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline bool CloudWatchEncryptionHasBeenSet() const { return m_cloudWatchEncryptionHasBeenSet; }

    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline void SetCloudWatchEncryption(const CloudWatchEncryption& value) { m_cloudWatchEncryptionHasBeenSet = true; m_cloudWatchEncryption = value; }

    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline void SetCloudWatchEncryption(CloudWatchEncryption&& value) { m_cloudWatchEncryptionHasBeenSet = true; m_cloudWatchEncryption = std::move(value); }

    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline EncryptionConfiguration& WithCloudWatchEncryption(const CloudWatchEncryption& value) { SetCloudWatchEncryption(value); return *this;}

    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline EncryptionConfiguration& WithCloudWatchEncryption(CloudWatchEncryption&& value) { SetCloudWatchEncryption(std::move(value)); return *this;}


    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline const JobBookmarksEncryption& GetJobBookmarksEncryption() const{ return m_jobBookmarksEncryption; }

    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline bool JobBookmarksEncryptionHasBeenSet() const { return m_jobBookmarksEncryptionHasBeenSet; }

    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline void SetJobBookmarksEncryption(const JobBookmarksEncryption& value) { m_jobBookmarksEncryptionHasBeenSet = true; m_jobBookmarksEncryption = value; }

    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline void SetJobBookmarksEncryption(JobBookmarksEncryption&& value) { m_jobBookmarksEncryptionHasBeenSet = true; m_jobBookmarksEncryption = std::move(value); }

    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline EncryptionConfiguration& WithJobBookmarksEncryption(const JobBookmarksEncryption& value) { SetJobBookmarksEncryption(value); return *this;}

    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline EncryptionConfiguration& WithJobBookmarksEncryption(JobBookmarksEncryption&& value) { SetJobBookmarksEncryption(std::move(value)); return *this;}

  private:

    Aws::Vector<S3Encryption> m_s3Encryption;
    bool m_s3EncryptionHasBeenSet = false;

    CloudWatchEncryption m_cloudWatchEncryption;
    bool m_cloudWatchEncryptionHasBeenSet = false;

    JobBookmarksEncryption m_jobBookmarksEncryption;
    bool m_jobBookmarksEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
