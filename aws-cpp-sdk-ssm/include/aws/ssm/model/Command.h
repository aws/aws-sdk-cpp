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
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CommandStatus.h>
#include <aws/ssm/model/NotificationConfig.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a command request.</p>
   */
  class AWS_SSM_API Command
  {
  public:
    Command();
    Command(const Aws::Utils::Json::JsonValue& jsonValue);
    Command& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline Command& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline Command& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the SSM document requested for execution.</p>
     */
    inline Command& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline Command& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline Command& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline Command& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAfter() const{ return m_expiresAfter; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline void SetExpiresAfter(const Aws::Utils::DateTime& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline void SetExpiresAfter(Aws::Utils::DateTime&& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline Command& WithExpiresAfter(const Aws::Utils::DateTime& value) { SetExpiresAfter(value); return *this;}

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline Command& WithExpiresAfter(Aws::Utils::DateTime&& value) { SetExpiresAfter(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the SSM document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline Command& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline Command& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>The status of the command.</p>
     */
    inline const CommandStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the command.</p>
     */
    inline void SetStatus(const CommandStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the command.</p>
     */
    inline void SetStatus(CommandStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the command.</p>
     */
    inline Command& WithStatus(const CommandStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the command.</p>
     */
    inline Command& WithStatus(CommandStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline Command& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline Command& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(value); return *this;}

  private:
    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::Utils::DateTime m_expiresAfter;
    bool m_expiresAfterHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet;
    CommandStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
