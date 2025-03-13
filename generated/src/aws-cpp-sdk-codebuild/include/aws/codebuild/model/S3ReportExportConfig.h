/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportPackagingType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about the S3 bucket where the raw data of a report are exported.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/S3ReportExportConfig">AWS
   * API Reference</a></p>
   */
  class S3ReportExportConfig
  {
  public:
    AWS_CODEBUILD_API S3ReportExportConfig() = default;
    AWS_CODEBUILD_API S3ReportExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API S3ReportExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3ReportExportConfig& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline const Aws::String& GetBucketOwner() const { return m_bucketOwner; }
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
    template<typename BucketOwnerT = Aws::String>
    void SetBucketOwner(BucketOwnerT&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::forward<BucketOwnerT>(value); }
    template<typename BucketOwnerT = Aws::String>
    S3ReportExportConfig& WithBucketOwner(BucketOwnerT&& value) { SetBucketOwner(std::forward<BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    S3ReportExportConfig& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline ReportPackagingType GetPackaging() const { return m_packaging; }
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }
    inline void SetPackaging(ReportPackagingType value) { m_packagingHasBeenSet = true; m_packaging = value; }
    inline S3ReportExportConfig& WithPackaging(ReportPackagingType value) { SetPackaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    S3ReportExportConfig& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A boolean value that specifies if the results of a report are encrypted.
     * </p>
     */
    inline bool GetEncryptionDisabled() const { return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline S3ReportExportConfig& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ReportPackagingType m_packaging{ReportPackagingType::NOT_SET};
    bool m_packagingHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    bool m_encryptionDisabled{false};
    bool m_encryptionDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
