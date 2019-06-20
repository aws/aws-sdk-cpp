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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/DeploymentCommand.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a deployment of a stack or app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Deployment">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API Deployment
  {
  public:
    Deployment();
    Deployment(Aws::Utils::Json::JsonView jsonValue);
    Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment ID.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment ID.</p>
     */
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline Deployment& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Deployment& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline Deployment& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline Deployment& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline Deployment& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline Deployment& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Date when the deployment was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline Deployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline Deployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Date when the deployment was created.</p>
     */
    inline Deployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Date when the deployment completed.</p>
     */
    inline const Aws::String& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline void SetCompletedAt(const Aws::String& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline void SetCompletedAt(Aws::String&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline void SetCompletedAt(const char* value) { m_completedAtHasBeenSet = true; m_completedAt.assign(value); }

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline Deployment& WithCompletedAt(const Aws::String& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline Deployment& WithCompletedAt(Aws::String&& value) { SetCompletedAt(std::move(value)); return *this;}

    /**
     * <p>Date when the deployment completed.</p>
     */
    inline Deployment& WithCompletedAt(const char* value) { SetCompletedAt(value); return *this;}


    /**
     * <p>The deployment duration.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The deployment duration.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The deployment duration.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The deployment duration.</p>
     */
    inline Deployment& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline Deployment& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline Deployment& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline Deployment& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>A user-defined comment.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A user-defined comment.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A user-defined comment.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A user-defined comment.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A user-defined comment.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A user-defined comment.</p>
     */
    inline Deployment& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A user-defined comment.</p>
     */
    inline Deployment& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A user-defined comment.</p>
     */
    inline Deployment& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline const DeploymentCommand& GetCommand() const{ return m_command; }

    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline void SetCommand(const DeploymentCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline void SetCommand(DeploymentCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline Deployment& WithCommand(const DeploymentCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline Deployment& WithCommand(DeploymentCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Deployment& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Deployment& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}

    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline Deployment& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}


    /**
     * <p>The IDs of the target instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline Deployment& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline Deployment& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline Deployment& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline Deployment& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the target instances.</p>
     */
    inline Deployment& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    DeploymentCommand m_command;
    bool m_commandHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
