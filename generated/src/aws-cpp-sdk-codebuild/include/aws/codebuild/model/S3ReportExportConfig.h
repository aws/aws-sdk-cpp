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
    AWS_CODEBUILD_API S3ReportExportConfig();
    AWS_CODEBUILD_API S3ReportExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API S3ReportExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline S3ReportExportConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline S3ReportExportConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The name of the S3 bucket where the raw data of a report are exported. </p>
     */
    inline S3ReportExportConfig& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline const Aws::String& GetBucketOwner() const{ return m_bucketOwner; }

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline void SetBucketOwner(const Aws::String& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = value; }

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline void SetBucketOwner(Aws::String&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline void SetBucketOwner(const char* value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline S3ReportExportConfig& WithBucketOwner(const Aws::String& value) { SetBucketOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline S3ReportExportConfig& WithBucketOwner(Aws::String&& value) { SetBucketOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the owner of the Amazon S3
     * bucket. This allows report data to be exported to an Amazon S3 bucket that is
     * owned by an account other than the account running the build.</p>
     */
    inline S3ReportExportConfig& WithBucketOwner(const char* value) { SetBucketOwner(value); return *this;}


    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline S3ReportExportConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline S3ReportExportConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> The path to the exported report's raw data results. </p>
     */
    inline S3ReportExportConfig& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline const ReportPackagingType& GetPackaging() const{ return m_packaging; }

    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }

    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline void SetPackaging(const ReportPackagingType& value) { m_packagingHasBeenSet = true; m_packaging = value; }

    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline void SetPackaging(ReportPackagingType&& value) { m_packagingHasBeenSet = true; m_packaging = std::move(value); }

    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline S3ReportExportConfig& WithPackaging(const ReportPackagingType& value) { SetPackaging(value); return *this;}

    /**
     * <p> The type of build output artifact to create. Valid values include: </p> <ul>
     * <li> <p> <code>NONE</code>: CodeBuild creates the raw data in the output bucket.
     * This is the default if packaging is not specified. </p> </li> <li> <p>
     * <code>ZIP</code>: CodeBuild creates a ZIP file with the raw data in the output
     * bucket. </p> </li> </ul>
     */
    inline S3ReportExportConfig& WithPackaging(ReportPackagingType&& value) { SetPackaging(std::move(value)); return *this;}


    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline S3ReportExportConfig& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline S3ReportExportConfig& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p> The encryption key for the report's encrypted raw data. </p>
     */
    inline S3ReportExportConfig& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p> A boolean value that specifies if the results of a report are encrypted.
     * </p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }

    /**
     * <p> A boolean value that specifies if the results of a report are encrypted.
     * </p>
     */
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }

    /**
     * <p> A boolean value that specifies if the results of a report are encrypted.
     * </p>
     */
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }

    /**
     * <p> A boolean value that specifies if the results of a report are encrypted.
     * </p>
     */
    inline S3ReportExportConfig& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ReportPackagingType m_packaging;
    bool m_packagingHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    bool m_encryptionDisabled;
    bool m_encryptionDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
