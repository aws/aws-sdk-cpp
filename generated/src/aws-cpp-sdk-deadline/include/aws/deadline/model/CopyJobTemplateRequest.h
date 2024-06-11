/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/S3Location.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class CopyJobTemplateRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CopyJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyJobTemplate"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID to copy.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CopyJobTemplateRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CopyJobTemplateRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CopyJobTemplateRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID to copy.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline CopyJobTemplateRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline CopyJobTemplateRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline CopyJobTemplateRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID to copy.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline CopyJobTemplateRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline CopyJobTemplateRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline CopyJobTemplateRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket name and key where you would like to add a copy of the
     * job template.</p>
     */
    inline const S3Location& GetTargetS3Location() const{ return m_targetS3Location; }
    inline bool TargetS3LocationHasBeenSet() const { return m_targetS3LocationHasBeenSet; }
    inline void SetTargetS3Location(const S3Location& value) { m_targetS3LocationHasBeenSet = true; m_targetS3Location = value; }
    inline void SetTargetS3Location(S3Location&& value) { m_targetS3LocationHasBeenSet = true; m_targetS3Location = std::move(value); }
    inline CopyJobTemplateRequest& WithTargetS3Location(const S3Location& value) { SetTargetS3Location(value); return *this;}
    inline CopyJobTemplateRequest& WithTargetS3Location(S3Location&& value) { SetTargetS3Location(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    S3Location m_targetS3Location;
    bool m_targetS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
