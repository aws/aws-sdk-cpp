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
    AWS_EC2_API StoreImageTaskResponse() = default;
    AWS_EC2_API StoreImageTaskResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API StoreImageTaskResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AMI that is being stored.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    StoreImageTaskResponse& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    StoreImageTaskResponse& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    StoreImageTaskResponse& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline const Aws::String& GetS3objectKey() const { return m_s3objectKey; }
    inline bool S3objectKeyHasBeenSet() const { return m_s3objectKeyHasBeenSet; }
    template<typename S3objectKeyT = Aws::String>
    void SetS3objectKey(S3objectKeyT&& value) { m_s3objectKeyHasBeenSet = true; m_s3objectKey = std::forward<S3objectKeyT>(value); }
    template<typename S3objectKeyT = Aws::String>
    StoreImageTaskResponse& WithS3objectKey(S3objectKeyT&& value) { SetS3objectKey(std::forward<S3objectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the task as a percentage.</p>
     */
    inline int GetProgressPercentage() const { return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(int value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline StoreImageTaskResponse& WithProgressPercentage(int value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the store task (<code>InProgress</code>, <code>Completed</code>,
     * or <code>Failed</code>).</p>
     */
    inline const Aws::String& GetStoreTaskState() const { return m_storeTaskState; }
    inline bool StoreTaskStateHasBeenSet() const { return m_storeTaskStateHasBeenSet; }
    template<typename StoreTaskStateT = Aws::String>
    void SetStoreTaskState(StoreTaskStateT&& value) { m_storeTaskStateHasBeenSet = true; m_storeTaskState = std::forward<StoreTaskStateT>(value); }
    template<typename StoreTaskStateT = Aws::String>
    StoreImageTaskResponse& WithStoreTaskState(StoreTaskStateT&& value) { SetStoreTaskState(std::forward<StoreTaskStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the tasks fails, the reason for the failure is returned. If the task
     * succeeds, <code>null</code> is returned.</p>
     */
    inline const Aws::String& GetStoreTaskFailureReason() const { return m_storeTaskFailureReason; }
    inline bool StoreTaskFailureReasonHasBeenSet() const { return m_storeTaskFailureReasonHasBeenSet; }
    template<typename StoreTaskFailureReasonT = Aws::String>
    void SetStoreTaskFailureReason(StoreTaskFailureReasonT&& value) { m_storeTaskFailureReasonHasBeenSet = true; m_storeTaskFailureReason = std::forward<StoreTaskFailureReasonT>(value); }
    template<typename StoreTaskFailureReasonT = Aws::String>
    StoreImageTaskResponse& WithStoreTaskFailureReason(StoreTaskFailureReasonT&& value) { SetStoreTaskFailureReason(std::forward<StoreTaskFailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_s3objectKey;
    bool m_s3objectKeyHasBeenSet = false;

    int m_progressPercentage{0};
    bool m_progressPercentageHasBeenSet = false;

    Aws::String m_storeTaskState;
    bool m_storeTaskStateHasBeenSet = false;

    Aws::String m_storeTaskFailureReason;
    bool m_storeTaskFailureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
