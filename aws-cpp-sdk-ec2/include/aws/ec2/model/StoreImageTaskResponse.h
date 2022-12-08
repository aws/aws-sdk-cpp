/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The information about the AMI store task, including the progress of the
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StoreImageTaskResult">AWS
   * API Reference</a></p>
   */
  class StoreImageTaskResponse
  {
  public:
    AWS_EC2_API StoreImageTaskResponse();
    AWS_EC2_API StoreImageTaskResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API StoreImageTaskResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline StoreImageTaskResponse& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline StoreImageTaskResponse& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline StoreImageTaskResponse& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The time the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p>The time the task started.</p>
     */
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }

    /**
     * <p>The time the task started.</p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }

    /**
     * <p>The time the task started.</p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }

    /**
     * <p>The time the task started.</p>
     */
    inline StoreImageTaskResponse& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p>The time the task started.</p>
     */
    inline StoreImageTaskResponse& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline StoreImageTaskResponse& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline StoreImageTaskResponse& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline StoreImageTaskResponse& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline const Aws::String& GetS3objectKey() const{ return m_s3objectKey; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline bool S3objectKeyHasBeenSet() const { return m_s3objectKeyHasBeenSet; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetS3objectKey(const Aws::String& value) { m_s3objectKeyHasBeenSet = true; m_s3objectKey = value; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetS3objectKey(Aws::String&& value) { m_s3objectKeyHasBeenSet = true; m_s3objectKey = std::move(value); }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetS3objectKey(const char* value) { m_s3objectKeyHasBeenSet = true; m_s3objectKey.assign(value); }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline StoreImageTaskResponse& WithS3objectKey(const Aws::String& value) { SetS3objectKey(value); return *this;}

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline StoreImageTaskResponse& WithS3objectKey(Aws::String&& value) { SetS3objectKey(std::move(value)); return *this;}

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline StoreImageTaskResponse& WithS3objectKey(const char* value) { SetS3objectKey(value); return *this;}


    /**
     * <p>The progress of the task as a percentage.</p>
     */
    inline int GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>The progress of the task as a percentage.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>The progress of the task as a percentage.</p>
     */
    inline void SetProgressPercentage(int value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>The progress of the task as a percentage.</p>
     */
    inline StoreImageTaskResponse& WithProgressPercentage(int value) { SetProgressPercentage(value); return *this;}


    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline const Aws::String& GetStoreTaskState() const{ return m_storeTaskState; }

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline bool StoreTaskStateHasBeenSet() const { return m_storeTaskStateHasBeenSet; }

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline void SetStoreTaskState(const Aws::String& value) { m_storeTaskStateHasBeenSet = true; m_storeTaskState = value; }

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline void SetStoreTaskState(Aws::String&& value) { m_storeTaskStateHasBeenSet = true; m_storeTaskState = std::move(value); }

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline void SetStoreTaskState(const char* value) { m_storeTaskStateHasBeenSet = true; m_storeTaskState.assign(value); }

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskState(const Aws::String& value) { SetStoreTaskState(value); return *this;}

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskState(Aws::String&& value) { SetStoreTaskState(std::move(value)); return *this;}

    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskState(const char* value) { SetStoreTaskState(value); return *this;}


    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline const Aws::String& GetStoreTaskFailureReason() const{ return m_storeTaskFailureReason; }

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline bool StoreTaskFailureReasonHasBeenSet() const { return m_storeTaskFailureReasonHasBeenSet; }

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline void SetStoreTaskFailureReason(const Aws::String& value) { m_storeTaskFailureReasonHasBeenSet = true; m_storeTaskFailureReason = value; }

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline void SetStoreTaskFailureReason(Aws::String&& value) { m_storeTaskFailureReasonHasBeenSet = true; m_storeTaskFailureReason = std::move(value); }

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline void SetStoreTaskFailureReason(const char* value) { m_storeTaskFailureReasonHasBeenSet = true; m_storeTaskFailureReason.assign(value); }

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskFailureReason(const Aws::String& value) { SetStoreTaskFailureReason(value); return *this;}

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskFailureReason(Aws::String&& value) { SetStoreTaskFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline StoreImageTaskResponse& WithStoreTaskFailureReason(const char* value) { SetStoreTaskFailureReason(value); return *this;}

  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_s3objectKey;
    bool m_s3objectKeyHasBeenSet = false;

    int m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;

    Aws::String m_storeTaskState;
    bool m_storeTaskStateHasBeenSet = false;

    Aws::String m_storeTaskFailureReason;
    bool m_storeTaskFailureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
