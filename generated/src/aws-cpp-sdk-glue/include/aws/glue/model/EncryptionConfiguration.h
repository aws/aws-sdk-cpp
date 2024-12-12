/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CloudWatchEncryption.h>
#include <aws/glue/model/JobBookmarksEncryption.h>
#include <aws/glue/model/DataQualityEncryption.h>
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


    ///@{
    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline const Aws::Vector<S3Encryption>& GetS3Encryption() const{ return m_s3Encryption; }
    inline bool S3EncryptionHasBeenSet() const { return m_s3EncryptionHasBeenSet; }
    inline void SetS3Encryption(const Aws::Vector<S3Encryption>& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = value; }
    inline void SetS3Encryption(Aws::Vector<S3Encryption>&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = std::move(value); }
    inline EncryptionConfiguration& WithS3Encryption(const Aws::Vector<S3Encryption>& value) { SetS3Encryption(value); return *this;}
    inline EncryptionConfiguration& WithS3Encryption(Aws::Vector<S3Encryption>&& value) { SetS3Encryption(std::move(value)); return *this;}
    inline EncryptionConfiguration& AddS3Encryption(const S3Encryption& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption.push_back(value); return *this; }
    inline EncryptionConfiguration& AddS3Encryption(S3Encryption&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline const CloudWatchEncryption& GetCloudWatchEncryption() const{ return m_cloudWatchEncryption; }
    inline bool CloudWatchEncryptionHasBeenSet() const { return m_cloudWatchEncryptionHasBeenSet; }
    inline void SetCloudWatchEncryption(const CloudWatchEncryption& value) { m_cloudWatchEncryptionHasBeenSet = true; m_cloudWatchEncryption = value; }
    inline void SetCloudWatchEncryption(CloudWatchEncryption&& value) { m_cloudWatchEncryptionHasBeenSet = true; m_cloudWatchEncryption = std::move(value); }
    inline EncryptionConfiguration& WithCloudWatchEncryption(const CloudWatchEncryption& value) { SetCloudWatchEncryption(value); return *this;}
    inline EncryptionConfiguration& WithCloudWatchEncryption(CloudWatchEncryption&& value) { SetCloudWatchEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline const JobBookmarksEncryption& GetJobBookmarksEncryption() const{ return m_jobBookmarksEncryption; }
    inline bool JobBookmarksEncryptionHasBeenSet() const { return m_jobBookmarksEncryptionHasBeenSet; }
    inline void SetJobBookmarksEncryption(const JobBookmarksEncryption& value) { m_jobBookmarksEncryptionHasBeenSet = true; m_jobBookmarksEncryption = value; }
    inline void SetJobBookmarksEncryption(JobBookmarksEncryption&& value) { m_jobBookmarksEncryptionHasBeenSet = true; m_jobBookmarksEncryption = std::move(value); }
    inline EncryptionConfiguration& WithJobBookmarksEncryption(const JobBookmarksEncryption& value) { SetJobBookmarksEncryption(value); return *this;}
    inline EncryptionConfiguration& WithJobBookmarksEncryption(JobBookmarksEncryption&& value) { SetJobBookmarksEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for Glue Data Quality assets.</p>
     */
    inline const DataQualityEncryption& GetDataQualityEncryption() const{ return m_dataQualityEncryption; }
    inline bool DataQualityEncryptionHasBeenSet() const { return m_dataQualityEncryptionHasBeenSet; }
    inline void SetDataQualityEncryption(const DataQualityEncryption& value) { m_dataQualityEncryptionHasBeenSet = true; m_dataQualityEncryption = value; }
    inline void SetDataQualityEncryption(DataQualityEncryption&& value) { m_dataQualityEncryptionHasBeenSet = true; m_dataQualityEncryption = std::move(value); }
    inline EncryptionConfiguration& WithDataQualityEncryption(const DataQualityEncryption& value) { SetDataQualityEncryption(value); return *this;}
    inline EncryptionConfiguration& WithDataQualityEncryption(DataQualityEncryption&& value) { SetDataQualityEncryption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<S3Encryption> m_s3Encryption;
    bool m_s3EncryptionHasBeenSet = false;

    CloudWatchEncryption m_cloudWatchEncryption;
    bool m_cloudWatchEncryptionHasBeenSet = false;

    JobBookmarksEncryption m_jobBookmarksEncryption;
    bool m_jobBookmarksEncryptionHasBeenSet = false;

    DataQualityEncryption m_dataQualityEncryption;
    bool m_dataQualityEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
