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
    AWS_DATASYNC_API ReportDestinationS3() = default;
    AWS_DATASYNC_API ReportDestinationS3(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportDestinationS3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a bucket prefix for your report.</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    ReportDestinationS3& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the S3 bucket where DataSync uploads your report.</p>
     */
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    ReportDestinationS3& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM policy that allows
     * DataSync to upload a task report to your S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Allowing
     * DataSync to upload a task report to an Amazon S3 bucket</a>.</p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const { return m_bucketAccessRoleArn; }
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }
    template<typename BucketAccessRoleArnT = Aws::String>
    void SetBucketAccessRoleArn(BucketAccessRoleArnT&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::forward<BucketAccessRoleArnT>(value); }
    template<typename BucketAccessRoleArnT = Aws::String>
    ReportDestinationS3& WithBucketAccessRoleArn(BucketAccessRoleArnT&& value) { SetBucketAccessRoleArn(std::forward<BucketAccessRoleArnT>(value)); return *this;}
    ///@}
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
