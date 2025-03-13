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
    AWS_GLUE_API EncryptionConfiguration() = default;
    AWS_GLUE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption configuration for Amazon Simple Storage Service (Amazon S3)
     * data.</p>
     */
    inline const Aws::Vector<S3Encryption>& GetS3Encryption() const { return m_s3Encryption; }
    inline bool S3EncryptionHasBeenSet() const { return m_s3EncryptionHasBeenSet; }
    template<typename S3EncryptionT = Aws::Vector<S3Encryption>>
    void SetS3Encryption(S3EncryptionT&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = std::forward<S3EncryptionT>(value); }
    template<typename S3EncryptionT = Aws::Vector<S3Encryption>>
    EncryptionConfiguration& WithS3Encryption(S3EncryptionT&& value) { SetS3Encryption(std::forward<S3EncryptionT>(value)); return *this;}
    template<typename S3EncryptionT = S3Encryption>
    EncryptionConfiguration& AddS3Encryption(S3EncryptionT&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption.emplace_back(std::forward<S3EncryptionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for Amazon CloudWatch.</p>
     */
    inline const CloudWatchEncryption& GetCloudWatchEncryption() const { return m_cloudWatchEncryption; }
    inline bool CloudWatchEncryptionHasBeenSet() const { return m_cloudWatchEncryptionHasBeenSet; }
    template<typename CloudWatchEncryptionT = CloudWatchEncryption>
    void SetCloudWatchEncryption(CloudWatchEncryptionT&& value) { m_cloudWatchEncryptionHasBeenSet = true; m_cloudWatchEncryption = std::forward<CloudWatchEncryptionT>(value); }
    template<typename CloudWatchEncryptionT = CloudWatchEncryption>
    EncryptionConfiguration& WithCloudWatchEncryption(CloudWatchEncryptionT&& value) { SetCloudWatchEncryption(std::forward<CloudWatchEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for job bookmarks.</p>
     */
    inline const JobBookmarksEncryption& GetJobBookmarksEncryption() const { return m_jobBookmarksEncryption; }
    inline bool JobBookmarksEncryptionHasBeenSet() const { return m_jobBookmarksEncryptionHasBeenSet; }
    template<typename JobBookmarksEncryptionT = JobBookmarksEncryption>
    void SetJobBookmarksEncryption(JobBookmarksEncryptionT&& value) { m_jobBookmarksEncryptionHasBeenSet = true; m_jobBookmarksEncryption = std::forward<JobBookmarksEncryptionT>(value); }
    template<typename JobBookmarksEncryptionT = JobBookmarksEncryption>
    EncryptionConfiguration& WithJobBookmarksEncryption(JobBookmarksEncryptionT&& value) { SetJobBookmarksEncryption(std::forward<JobBookmarksEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for Glue Data Quality assets.</p>
     */
    inline const DataQualityEncryption& GetDataQualityEncryption() const { return m_dataQualityEncryption; }
    inline bool DataQualityEncryptionHasBeenSet() const { return m_dataQualityEncryptionHasBeenSet; }
    template<typename DataQualityEncryptionT = DataQualityEncryption>
    void SetDataQualityEncryption(DataQualityEncryptionT&& value) { m_dataQualityEncryptionHasBeenSet = true; m_dataQualityEncryption = std::forward<DataQualityEncryptionT>(value); }
    template<typename DataQualityEncryptionT = DataQualityEncryption>
    EncryptionConfiguration& WithDataQualityEncryption(DataQualityEncryptionT&& value) { SetDataQualityEncryption(std::forward<DataQualityEncryptionT>(value)); return *this;}
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
