/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MailboxExportJobState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The details of a mailbox export job, including the user or resource ID
   * associated with the mailbox and the S3 bucket that the mailbox contents are
   * exported to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/MailboxExportJob">AWS
   * API Reference</a></p>
   */
  class MailboxExportJob
  {
  public:
    AWS_WORKMAIL_API MailboxExportJob();
    AWS_WORKMAIL_API MailboxExportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MailboxExportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline MailboxExportJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline MailboxExportJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the mailbox export job.</p>
     */
    inline MailboxExportJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline MailboxExportJob& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline MailboxExportJob& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline MailboxExportJob& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The mailbox export job description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline MailboxExportJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The mailbox export job description.</p>
     */
    inline MailboxExportJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The mailbox export job description.</p>
     */
    inline MailboxExportJob& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline MailboxExportJob& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline MailboxExportJob& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline MailboxExportJob& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline MailboxExportJob& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline MailboxExportJob& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job exports
     * to.</p>
     */
    inline MailboxExportJob& WithS3Path(const char* value) { SetS3Path(value); return *this;}


    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline int GetEstimatedProgress() const{ return m_estimatedProgress; }

    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline bool EstimatedProgressHasBeenSet() const { return m_estimatedProgressHasBeenSet; }

    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline void SetEstimatedProgress(int value) { m_estimatedProgressHasBeenSet = true; m_estimatedProgress = value; }

    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline MailboxExportJob& WithEstimatedProgress(int value) { SetEstimatedProgress(value); return *this;}


    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline const MailboxExportJobState& GetState() const{ return m_state; }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline void SetState(const MailboxExportJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline void SetState(MailboxExportJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline MailboxExportJob& WithState(const MailboxExportJobState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline MailboxExportJob& WithState(MailboxExportJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline MailboxExportJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline MailboxExportJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline MailboxExportJob& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline MailboxExportJob& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    int m_estimatedProgress;
    bool m_estimatedProgressHasBeenSet = false;

    MailboxExportJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
