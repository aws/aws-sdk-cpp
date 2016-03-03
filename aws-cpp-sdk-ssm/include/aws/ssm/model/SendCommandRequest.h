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
#include <aws/core/utils/memory/stl/AWSMap.h>

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
     * Required. The instance IDs where the command should execute.
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline SendCommandRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline SendCommandRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline SendCommandRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline SendCommandRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * Required. The instance IDs where the command should execute.
     */
    inline SendCommandRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline SendCommandRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline SendCommandRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * Required. The name of the SSM document to execute. This can be an SSM public
     * document or a custom document.
     */
    inline SendCommandRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute.
     */
    inline long GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute.
     */
    inline void SetTimeoutSeconds(long value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * If this time is reached and the command has not already started executing, it
     * will not execute.
     */
    inline SendCommandRequest& WithTimeoutSeconds(long value) { SetTimeoutSeconds(value); return *this;}

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
    inline SendCommandRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline SendCommandRequest& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * User-specified information about the command, such as a brief description of
     * what the command should do.
     */
    inline SendCommandRequest& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The required and optional parameters specified in the SSM document being
     * executed.
     */
    inline SendCommandRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline SendCommandRequest& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline SendCommandRequest& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The name of the S3 bucket where command execution responses should be stored.
     */
    inline SendCommandRequest& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The directory structure within the S3 bucket where the responses should be
     * stored.
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    long m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
