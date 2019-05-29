/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for a RUN_COMMAND task type.</p> <p>For information about
   * specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an S3 bucket to contain logs, instead use the
   * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
   * the <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Run
   * Command tasks, Systems Manager uses specified values for
   * <code>TaskParameters</code> and <code>LoggingInfo</code> only if no values are
   * specified for <code>TaskInvocationParameters</code>. </p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowRunCommandParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowRunCommandParameters
  {
  public:
    MaintenanceWindowRunCommandParameters();
    MaintenanceWindowRunCommandParameters(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowRunCommandParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the commands to run.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>Information about the commands to run.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>Information about the commands to run.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Information about the commands to run.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>Information about the commands to run.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>Information about the commands to run.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>Information about the commands to run.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>Information about the commands to run.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline const Aws::String& GetDocumentHash() const{ return m_documentHash; }

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline void SetDocumentHash(const Aws::String& value) { m_documentHashHasBeenSet = true; m_documentHash = value; }

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline void SetDocumentHash(Aws::String&& value) { m_documentHashHasBeenSet = true; m_documentHash = std::move(value); }

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline void SetDocumentHash(const char* value) { m_documentHashHasBeenSet = true; m_documentHash.assign(value); }

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithDocumentHash(const Aws::String& value) { SetDocumentHash(value); return *this;}

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithDocumentHash(Aws::String&& value) { SetDocumentHash(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithDocumentHash(const char* value) { SetDocumentHash(value); return *this;}


    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline const DocumentHashType& GetDocumentHashType() const{ return m_documentHashType; }

    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline bool DocumentHashTypeHasBeenSet() const { return m_documentHashTypeHasBeenSet; }

    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline void SetDocumentHashType(const DocumentHashType& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }

    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline void SetDocumentHashType(DocumentHashType&& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = std::move(value); }

    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithDocumentHashType(const DocumentHashType& value) { SetDocumentHashType(value); return *this;}

    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithDocumentHashType(DocumentHashType&& value) { SetDocumentHashType(std::move(value)); return *this;}


    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::move(value); }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-instance basis.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}


    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket subfolder.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}


    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the RUN_COMMAND task execution.</p>
     */
    inline MaintenanceWindowRunCommandParameters& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>If this time is reached and the command has not already started running, it
     * doesn't run.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * doesn't run.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * doesn't run.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * doesn't run.</p>
     */
    inline MaintenanceWindowRunCommandParameters& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet;

    DocumentHashType m_documentHashType;
    bool m_documentHashTypeHasBeenSet;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
