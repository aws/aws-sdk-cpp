/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/UserImportJobStatusType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The user import job type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserImportJobType">AWS
   * API Reference</a></p>
   */
  class UserImportJobType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType();
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job name for the user import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline UserImportJobType& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline UserImportJobType& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline UserImportJobType& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the user import job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline UserImportJobType& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline UserImportJobType& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline UserImportJobType& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool ID for the user pool that the users are being imported
     * into.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline UserImportJobType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline UserImportJobType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline UserImportJobType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL to be used to upload the <code>.csv</code> file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }
    inline UserImportJobType& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline UserImportJobType& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline UserImportJobType& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline UserImportJobType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline UserImportJobType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the user import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline UserImportJobType& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline UserImportJobType& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the user import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }
    inline UserImportJobType& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline UserImportJobType& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user import job. One of the following:</p> <ul> <li> <p>
     * <code>Created</code> - The job was created but not started.</p> </li> <li> <p>
     * <code>Pending</code> - A transition state. You have started the job, but it has
     * not begun importing users yet.</p> </li> <li> <p> <code>InProgress</code> - The
     * job has started, and users are being imported.</p> </li> <li> <p>
     * <code>Stopping</code> - You have stopped the job, but the job has not stopped
     * importing users yet.</p> </li> <li> <p> <code>Stopped</code> - You have stopped
     * the job, and the job has stopped importing users.</p> </li> <li> <p>
     * <code>Succeeded</code> - The job has completed successfully.</p> </li> <li> <p>
     * <code>Failed</code> - The job has stopped due to an error.</p> </li> <li> <p>
     * <code>Expired</code> - You created a job, but did not start the job within 24-48
     * hours. All data associated with the job was deleted, and the job can't be
     * started.</p> </li> </ul>
     */
    inline const UserImportJobStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UserImportJobStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UserImportJobStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UserImportJobType& WithStatus(const UserImportJobStatusType& value) { SetStatus(value); return *this;}
    inline UserImportJobType& WithStatus(UserImportJobStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role Amazon Resource Name (ARN) for the Amazon CloudWatch Logging role
     * for the user import job. For more information, see "Creating the CloudWatch Logs
     * IAM Role" in the Amazon Cognito Developer Guide.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = value; }
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::move(value); }
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn.assign(value); }
    inline UserImportJobType& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}
    inline UserImportJobType& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}
    inline UserImportJobType& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that were successfully imported.</p>
     */
    inline long long GetImportedUsers() const{ return m_importedUsers; }
    inline bool ImportedUsersHasBeenSet() const { return m_importedUsersHasBeenSet; }
    inline void SetImportedUsers(long long value) { m_importedUsersHasBeenSet = true; m_importedUsers = value; }
    inline UserImportJobType& WithImportedUsers(long long value) { SetImportedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that were skipped.</p>
     */
    inline long long GetSkippedUsers() const{ return m_skippedUsers; }
    inline bool SkippedUsersHasBeenSet() const { return m_skippedUsersHasBeenSet; }
    inline void SetSkippedUsers(long long value) { m_skippedUsersHasBeenSet = true; m_skippedUsers = value; }
    inline UserImportJobType& WithSkippedUsers(long long value) { SetSkippedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that couldn't be imported.</p>
     */
    inline long long GetFailedUsers() const{ return m_failedUsers; }
    inline bool FailedUsersHasBeenSet() const { return m_failedUsersHasBeenSet; }
    inline void SetFailedUsers(long long value) { m_failedUsersHasBeenSet = true; m_failedUsers = value; }
    inline UserImportJobType& WithFailedUsers(long long value) { SetFailedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message returned when the user import job is completed.</p>
     */
    inline const Aws::String& GetCompletionMessage() const{ return m_completionMessage; }
    inline bool CompletionMessageHasBeenSet() const { return m_completionMessageHasBeenSet; }
    inline void SetCompletionMessage(const Aws::String& value) { m_completionMessageHasBeenSet = true; m_completionMessage = value; }
    inline void SetCompletionMessage(Aws::String&& value) { m_completionMessageHasBeenSet = true; m_completionMessage = std::move(value); }
    inline void SetCompletionMessage(const char* value) { m_completionMessageHasBeenSet = true; m_completionMessage.assign(value); }
    inline UserImportJobType& WithCompletionMessage(const Aws::String& value) { SetCompletionMessage(value); return *this;}
    inline UserImportJobType& WithCompletionMessage(Aws::String&& value) { SetCompletionMessage(std::move(value)); return *this;}
    inline UserImportJobType& WithCompletionMessage(const char* value) { SetCompletionMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    UserImportJobStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    long long m_importedUsers;
    bool m_importedUsersHasBeenSet = false;

    long long m_skippedUsers;
    bool m_skippedUsersHasBeenSet = false;

    long long m_failedUsers;
    bool m_failedUsersHasBeenSet = false;

    Aws::String m_completionMessage;
    bool m_completionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
