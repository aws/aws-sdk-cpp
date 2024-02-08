/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies the Amazon S3 bucket where DataSync uploads your <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ReportDestinationS3">AWS
   * API Reference</a></p>
   */
  class ReportDestinationS3
  {
  public:
    AWS_DATASYNC_API ReportDestinationS3();
    AWS_DATASYNC_API ReportDestinationS3(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportDestinationS3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline ReportDestinationS3& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline ReportDestinationS3& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline ReportDestinationS3& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline ReportDestinationS3& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline ReportDestinationS3& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline ReportDestinationS3& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const{ return m_bucketAccessRoleArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline void SetBucketAccessRoleArn(const Aws::String& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline void SetBucketAccessRoleArn(Aws::String&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline void SetBucketAccessRoleArn(const char* value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline ReportDestinationS3& WithBucketAccessRoleArn(const Aws::String& value) { SetBucketAccessRoleArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline ReportDestinationS3& WithBucketAccessRoleArn(Aws::String&& value) { SetBucketAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline ReportDestinationS3& WithBucketAccessRoleArn(const char* value) { SetBucketAccessRoleArn(value); return *this;}

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::String m_bucketAccessRoleArn;
    bool m_bucketAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
