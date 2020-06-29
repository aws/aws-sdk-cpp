/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API UpdateClassificationJobRequest : public Macie2Request
  {
  public:
    UpdateClassificationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClassificationJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline UpdateClassificationJobRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status to change the job's status to. The only supported value is
     * CANCELLED, which cancels the job completely.</p>
     */
    inline UpdateClassificationJobRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
