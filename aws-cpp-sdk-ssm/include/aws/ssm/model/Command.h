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
   * Describes a command request.
   */
  class AWS_SSM_API Command
  {
  public:
    Command();
    Command(const Aws::Utils::Json::JsonValue& jsonValue);
    Command& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * A unique identifier for this command.
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * A unique identifier for this command.
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * A unique identifier for this command.
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * A unique identifier for this command.
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * A unique identifier for this command.
     */
    inline Command& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * A unique identifier for this command.
     */
    inline Command& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * A unique identifier for this command.
     */
    inline Command& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * The name of the SSM document requested for execution.
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * The name of the SSM document requested for execution.
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * The name of the SSM document requested for execution.
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * The name of the SSM document requested for execution.
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * The name of the SSM document requested for execution.
     */
    inline Command& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * The name of the SSM document requested for execution.
     */
    inline Command& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * The name of the SSM document requested for execution.
     */
    inline Command& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline Command& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline Command& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline Command& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.
     */
    inline const Aws::Utils::DateTime& GetExpiresAfter() const{ return m_expiresAfter; }

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.
     */
    inline void SetExpiresAfter(const Aws::Utils::DateTime& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.
     */
    inline void SetExpiresAfter(Aws::Utils::DateTime&& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.
     */
    inline Command& WithExpiresAfter(const Aws::Utils::DateTime& value) { SetExpiresAfter(value); return *this;}

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.
     */
    inline Command& WithExpiresAfter(Aws::Utils::DateTime&& value) { SetExpiresAfter(value); return *this;}

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The parameter values to be inserted in the SSM document when executing the
     * command.
     */
    inline Command& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline Command& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * The instance IDs against which this command was requested.
     */
    inline Command& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * The instance IDs against which this command was requested.
     */
    inline Command& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline Command& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * The instance IDs against which this command was requested.
     */
    inline Command& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * The date and time the command was requested.
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }

    /**
     * The date and time the command was requested.
     */
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * The date and time the command was requested.
     */
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * The date and time the command was requested.
     */
    inline Command& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}

    /**
     * The date and time the command was requested.
     */
    inline Command& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(value); return *this;}

    /**
     * The status of the command.
     */
    inline const CommandStatus& GetStatus() const{ return m_status; }

    /**
     * The status of the command.
     */
    inline void SetStatus(const CommandStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of the command.
     */
    inline void SetStatus(CommandStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of the command.
     */
    inline Command& WithStatus(const CommandStatus& value) { SetStatus(value); return *this;}

    /**
     * The status of the command.
     */
    inline Command& WithStatus(CommandStatus&& value) { SetStatus(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline Command& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline Command& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline Command& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline Command& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline Command& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline Command& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
