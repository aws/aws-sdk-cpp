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
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/DeploymentCommand.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API CreateDeploymentRequest : public OpsWorksRequest
  {
  public:
    CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateDeploymentRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline CreateDeploymentRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline CreateDeploymentRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline CreateDeploymentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline CreateDeploymentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline CreateDeploymentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline CreateDeploymentRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }


    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline const DeploymentCommand& GetCommand() const{ return m_command; }

    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline void SetCommand(const DeploymentCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline void SetCommand(DeploymentCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline CreateDeploymentRequest& WithCommand(const DeploymentCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline CreateDeploymentRequest& WithCommand(DeploymentCommand&& value) { SetCommand(std::move(value)); return *this;}


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
    inline CreateDeploymentRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A user-defined comment.</p>
     */
    inline CreateDeploymentRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A user-defined comment.</p>
     */
    inline CreateDeploymentRequest& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline CreateDeploymentRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline CreateDeploymentRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}

    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline CreateDeploymentRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet;

    DeploymentCommand m_command;
    bool m_commandHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
