/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cognito-idp/model/UserImportJobType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserImportJobType::UserImportJobType() : 
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_status(UserImportJobStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_importedUsers(0),
    m_importedUsersHasBeenSet(false),
    m_skippedUsers(0),
    m_skippedUsersHasBeenSet(false),
    m_failedUsers(0),
    m_failedUsersHasBeenSet(false),
    m_completionMessageHasBeenSet(false)
{
}

UserImportJobType::UserImportJobType(const JsonValue& jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_status(UserImportJobStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_importedUsers(0),
    m_importedUsersHasBeenSet(false),
    m_skippedUsers(0),
    m_skippedUsersHasBeenSet(false),
    m_failedUsers(0),
    m_failedUsersHasBeenSet(false),
    m_completionMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UserImportJobType& UserImportJobType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreSignedUrl"))
  {
    m_preSignedUrl = jsonValue.GetString("PreSignedUrl");

    m_preSignedUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");

    m_completionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UserImportJobStatusTypeMapper::GetUserImportJobStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("CloudWatchLogsRoleArn");

    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedUsers"))
  {
    m_importedUsers = jsonValue.GetInt64("ImportedUsers");

    m_importedUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkippedUsers"))
  {
    m_skippedUsers = jsonValue.GetInt64("SkippedUsers");

    m_skippedUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedUsers"))
  {
    m_failedUsers = jsonValue.GetInt64("FailedUsers");

    m_failedUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionMessage"))
  {
    m_completionMessage = jsonValue.GetString("CompletionMessage");

    m_completionMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue UserImportJobType::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_preSignedUrlHasBeenSet)
  {
   payload.WithString("PreSignedUrl", m_preSignedUrl);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UserImportJobStatusTypeMapper::GetNameForUserImportJobStatusType(m_status));
  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  if(m_importedUsersHasBeenSet)
  {
   payload.WithInt64("ImportedUsers", m_importedUsers);

  }

  if(m_skippedUsersHasBeenSet)
  {
   payload.WithInt64("SkippedUsers", m_skippedUsers);

  }

  if(m_failedUsersHasBeenSet)
  {
   payload.WithInt64("FailedUsers", m_failedUsers);

  }

  if(m_completionMessageHasBeenSet)
  {
   payload.WithString("CompletionMessage", m_completionMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws