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
   * <p>A user import job in a user pool. Describes the status of user import with a
   * CSV file. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-using-import-tool.html">Importing
   * users into user pools from a CSV file</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserImportJobType">AWS
   * API Reference</a></p>
   */
  class UserImportJobType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserImportJobType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The friendly name of the user import job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    UserImportJobType& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user import job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UserImportJobType& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that the users are being imported into.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UserImportJobType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URL target for uploading the CSV file.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    UserImportJobType& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    UserImportJobType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the user import job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    UserImportJobType& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the user import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    UserImportJobType& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
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
    inline UserImportJobStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UserImportJobStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline UserImportJobType& WithStatus(UserImportJobStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role Amazon Resource Name (ARN) for the Amazon CloudWatch Logging role
     * for the user import job. For more information, see "Creating the CloudWatch Logs
     * IAM Role" in the Amazon Cognito Developer Guide.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const { return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    void SetCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::forward<CloudWatchLogsRoleArnT>(value); }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    UserImportJobType& WithCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { SetCloudWatchLogsRoleArn(std::forward<CloudWatchLogsRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that were successfully imported.</p>
     */
    inline long long GetImportedUsers() const { return m_importedUsers; }
    inline bool ImportedUsersHasBeenSet() const { return m_importedUsersHasBeenSet; }
    inline void SetImportedUsers(long long value) { m_importedUsersHasBeenSet = true; m_importedUsers = value; }
    inline UserImportJobType& WithImportedUsers(long long value) { SetImportedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that were skipped.</p>
     */
    inline long long GetSkippedUsers() const { return m_skippedUsers; }
    inline bool SkippedUsersHasBeenSet() const { return m_skippedUsersHasBeenSet; }
    inline void SetSkippedUsers(long long value) { m_skippedUsersHasBeenSet = true; m_skippedUsers = value; }
    inline UserImportJobType& WithSkippedUsers(long long value) { SetSkippedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that couldn't be imported.</p>
     */
    inline long long GetFailedUsers() const { return m_failedUsers; }
    inline bool FailedUsersHasBeenSet() const { return m_failedUsersHasBeenSet; }
    inline void SetFailedUsers(long long value) { m_failedUsersHasBeenSet = true; m_failedUsers = value; }
    inline UserImportJobType& WithFailedUsers(long long value) { SetFailedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message returned when the user import job is completed.</p>
     */
    inline const Aws::String& GetCompletionMessage() const { return m_completionMessage; }
    inline bool CompletionMessageHasBeenSet() const { return m_completionMessageHasBeenSet; }
    template<typename CompletionMessageT = Aws::String>
    void SetCompletionMessage(CompletionMessageT&& value) { m_completionMessageHasBeenSet = true; m_completionMessage = std::forward<CompletionMessageT>(value); }
    template<typename CompletionMessageT = Aws::String>
    UserImportJobType& WithCompletionMessage(CompletionMessageT&& value) { SetCompletionMessage(std::forward<CompletionMessageT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    UserImportJobStatusType m_status{UserImportJobStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    long long m_importedUsers{0};
    bool m_importedUsersHasBeenSet = false;

    long long m_skippedUsers{0};
    bool m_skippedUsersHasBeenSet = false;

    long long m_failedUsers{0};
    bool m_failedUsersHasBeenSet = false;

    Aws::String m_completionMessage;
    bool m_completionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
