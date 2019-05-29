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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <aws/iotthingsgraph/model/DeploymentTarget.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/MetricsConfiguration.h>
#include <aws/iotthingsgraph/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API CreateSystemInstanceRequest : public IoTThingsGraphRequest
  {
  public:
    CreateSystemInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSystemInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline CreateSystemInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline CreateSystemInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline CreateSystemInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata, consisting of key-value pairs, that can be used to categorize your
     * system instances.</p>
     */
    inline CreateSystemInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    
    inline CreateSystemInstanceRequest& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    
    inline CreateSystemInstanceRequest& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline const DeploymentTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline void SetTarget(const DeploymentTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline void SetTarget(DeploymentTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithTarget(const DeploymentTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target type of the deployment. Valid values are <code>GREENGRASS</code>
     * and <code>CLOUD</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithTarget(DeploymentTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline const Aws::String& GetGreengrassGroupName() const{ return m_greengrassGroupName; }

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline bool GreengrassGroupNameHasBeenSet() const { return m_greengrassGroupNameHasBeenSet; }

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline void SetGreengrassGroupName(const Aws::String& value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName = value; }

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline void SetGreengrassGroupName(Aws::String&& value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName = std::move(value); }

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline void SetGreengrassGroupName(const char* value) { m_greengrassGroupNameHasBeenSet = true; m_greengrassGroupName.assign(value); }

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithGreengrassGroupName(const Aws::String& value) { SetGreengrassGroupName(value); return *this;}

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithGreengrassGroupName(Aws::String&& value) { SetGreengrassGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Greengrass group where the system instance will be deployed.
     * This value is required if the value of the <code>target</code> parameter is
     * <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithGreengrassGroupName(const char* value) { SetGreengrassGroupName(value); return *this;}


    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Simple Storage Service bucket that will be used to
     * store and deploy the system instance's resource file. This value is required if
     * the value of the <code>target</code> parameter is <code>GREENGRASS</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    
    inline const MetricsConfiguration& GetMetricsConfiguration() const{ return m_metricsConfiguration; }

    
    inline bool MetricsConfigurationHasBeenSet() const { return m_metricsConfigurationHasBeenSet; }

    
    inline void SetMetricsConfiguration(const MetricsConfiguration& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = value; }

    
    inline void SetMetricsConfiguration(MetricsConfiguration&& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = std::move(value); }

    
    inline CreateSystemInstanceRequest& WithMetricsConfiguration(const MetricsConfiguration& value) { SetMetricsConfiguration(value); return *this;}

    
    inline CreateSystemInstanceRequest& WithMetricsConfiguration(MetricsConfiguration&& value) { SetMetricsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline const Aws::String& GetFlowActionsRoleArn() const{ return m_flowActionsRoleArn; }

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline bool FlowActionsRoleArnHasBeenSet() const { return m_flowActionsRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline void SetFlowActionsRoleArn(const Aws::String& value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn = value; }

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline void SetFlowActionsRoleArn(Aws::String&& value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline void SetFlowActionsRoleArn(const char* value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithFlowActionsRoleArn(const Aws::String& value) { SetFlowActionsRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithFlowActionsRoleArn(Aws::String&& value) { SetFlowActionsRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that AWS IoT Things Graph will assume when it
     * executes the flow. This role must have read and write access to AWS Lambda and
     * AWS IoT and any other AWS services that the flow uses when it executes. This
     * value is required if the value of the <code>target</code> parameter is
     * <code>CLOUD</code>.</p>
     */
    inline CreateSystemInstanceRequest& WithFlowActionsRoleArn(const char* value) { SetFlowActionsRoleArn(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    DeploymentTarget m_target;
    bool m_targetHasBeenSet;

    Aws::String m_greengrassGroupName;
    bool m_greengrassGroupNameHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    MetricsConfiguration m_metricsConfiguration;
    bool m_metricsConfigurationHasBeenSet;

    Aws::String m_flowActionsRoleArn;
    bool m_flowActionsRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
