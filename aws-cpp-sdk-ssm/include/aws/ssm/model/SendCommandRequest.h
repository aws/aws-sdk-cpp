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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/NotificationConfig.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API SendCommandRequest : public SSMRequest
  {
  public:
    SendCommandRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline SendCommandRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline SendCommandRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline SendCommandRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>Required. The instance IDs where the command should execute. You can specify
     * a maximum of 50 IDs.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const Aws::String& GetDocumentHash() const{ return m_documentHash; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(const Aws::String& value) { m_documentHashHasBeenSet = true; m_documentHash = value; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(Aws::String&& value) { m_documentHashHasBeenSet = true; m_documentHash = value; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(const char* value) { m_documentHashHasBeenSet = true; m_documentHash.assign(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(const Aws::String& value) { SetDocumentHash(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(Aws::String&& value) { SetDocumentHash(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(const char* value) { SetDocumentHash(value); return *this;}

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const DocumentHashType& GetDocumentHashType() const{ return m_documentHashType; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHashType(const DocumentHashType& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHashType(DocumentHashType&& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHashType(const DocumentHashType& value) { SetDocumentHashType(value); return *this;}

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHashType(DocumentHashType&& value) { SetDocumentHashType(value); return *this;}

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute.</p>
     */
    inline SendCommandRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

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
    inline SendCommandRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline SendCommandRequest& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline SendCommandRequest& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The required and optional parameters specified in the SSM document being
     * executed.</p>
     */
    inline SendCommandRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline SendCommandRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline SendCommandRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The IAM role that SSM uses to send notifications. </p>
     */
    inline SendCommandRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline SendCommandRequest& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline SendCommandRequest& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet;
    DocumentHashType m_documentHashType;
    bool m_documentHashTypeHasBeenSet;
    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;
    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
