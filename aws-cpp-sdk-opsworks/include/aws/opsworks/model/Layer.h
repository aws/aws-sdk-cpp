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
#include <aws/opsworks/model/LayerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/CloudWatchLogsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Recipes.h>
#include <aws/opsworks/model/LifecycleEventConfiguration.h>
#include <aws/opsworks/model/LayerAttributesKeys.h>
#include <aws/opsworks/model/VolumeConfiguration.h>
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
   * <p>Describes a layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Layer">AWS API
   * Reference</a></p>
   */
  class AWS_OPSWORKS_API Layer
  {
  public:
    Layer();
    Layer(Aws::Utils::Json::JsonView jsonValue);
    Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline Layer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline Layer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline Layer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The layer stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The layer stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The layer stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The layer stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The layer stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The layer stack ID.</p>
     */
    inline Layer& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The layer stack ID.</p>
     */
    inline Layer& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The layer stack ID.</p>
     */
    inline Layer& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The layer ID.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline Layer& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline Layer& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline Layer& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>The layer type.</p>
     */
    inline const LayerType& GetType() const{ return m_type; }

    /**
     * <p>The layer type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The layer type.</p>
     */
    inline void SetType(const LayerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The layer type.</p>
     */
    inline void SetType(LayerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The layer type.</p>
     */
    inline Layer& WithType(const LayerType& value) { SetType(value); return *this;}

    /**
     * <p>The layer type.</p>
     */
    inline Layer& WithType(LayerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The layer name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The layer name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The layer name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The layer name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The layer name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The layer name.</p>
     */
    inline Layer& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The layer name.</p>
     */
    inline Layer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The layer name.</p>
     */
    inline Layer& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The layer short name.</p>
     */
    inline const Aws::String& GetShortname() const{ return m_shortname; }

    /**
     * <p>The layer short name.</p>
     */
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }

    /**
     * <p>The layer short name.</p>
     */
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }

    /**
     * <p>The layer short name.</p>
     */
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }

    /**
     * <p>The layer short name.</p>
     */
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }

    /**
     * <p>The layer short name.</p>
     */
    inline Layer& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}

    /**
     * <p>The layer short name.</p>
     */
    inline Layer& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}

    /**
     * <p>The layer short name.</p>
     */
    inline Layer& WithShortname(const char* value) { SetShortname(value); return *this;}


    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline void SetAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline void SetAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& WithAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& WithAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, AWS OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }

    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }

    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline Layer& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { SetCloudWatchLogsConfiguration(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline Layer& WithCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const{ return m_customInstanceProfileArn; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const Aws::String& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(Aws::String&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::move(value); }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const char* value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn.assign(value); }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Layer& WithCustomInstanceProfileArn(const Aws::String& value) { SetCustomInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Layer& WithCustomInstanceProfileArn(Aws::String&& value) { SetCustomInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Layer& WithCustomInstanceProfileArn(const char* value) { SetCustomInstanceProfileArn(value); return *this;}


    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline Layer& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline Layer& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline Layer& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}


    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomSecurityGroupIds() const{ return m_customSecurityGroupIds; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline bool CustomSecurityGroupIdsHasBeenSet() const { return m_customSecurityGroupIdsHasBeenSet; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline void SetCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = value; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline void SetCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = std::move(value); }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& WithCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetCustomSecurityGroupIds(value); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& WithCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetCustomSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& AddCustomSecurityGroupIds(const Aws::String& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& AddCustomSecurityGroupIds(Aws::String&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& AddCustomSecurityGroupIds(const char* value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultSecurityGroupNames() const{ return m_defaultSecurityGroupNames; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline bool DefaultSecurityGroupNamesHasBeenSet() const { return m_defaultSecurityGroupNamesHasBeenSet; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline void SetDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = value; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline void SetDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = std::move(value); }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& WithDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetDefaultSecurityGroupNames(value); return *this;}

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& WithDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetDefaultSecurityGroupNames(std::move(value)); return *this;}

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& AddDefaultSecurityGroupNames(const Aws::String& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& AddDefaultSecurityGroupNames(Aws::String&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& AddDefaultSecurityGroupNames(const char* value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }


    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackages() const{ return m_packages; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline bool PackagesHasBeenSet() const { return m_packagesHasBeenSet; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline void SetPackages(const Aws::Vector<Aws::String>& value) { m_packagesHasBeenSet = true; m_packages = value; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline void SetPackages(Aws::Vector<Aws::String>&& value) { m_packagesHasBeenSet = true; m_packages = std::move(value); }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& WithPackages(const Aws::Vector<Aws::String>& value) { SetPackages(value); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& WithPackages(Aws::Vector<Aws::String>&& value) { SetPackages(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& AddPackages(const Aws::String& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& AddPackages(Aws::String&& value) { m_packagesHasBeenSet = true; m_packages.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& AddPackages(const char* value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }


    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline const Aws::Vector<VolumeConfiguration>& GetVolumeConfigurations() const{ return m_volumeConfigurations; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline void SetVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline void SetVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::move(value); }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& WithVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& WithVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& AddVolumeConfigurations(const VolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& AddVolumeConfigurations(VolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const{ return m_enableAutoHealing; }

    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline bool EnableAutoHealingHasBeenSet() const { return m_enableAutoHealingHasBeenSet; }

    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline void SetEnableAutoHealing(bool value) { m_enableAutoHealingHasBeenSet = true; m_enableAutoHealing = value; }

    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline Layer& WithEnableAutoHealing(bool value) { SetEnableAutoHealing(value); return *this;}


    /**
     * <p>Whether to automatically assign an <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignElasticIps() const{ return m_autoAssignElasticIps; }

    /**
     * <p>Whether to automatically assign an <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool AutoAssignElasticIpsHasBeenSet() const { return m_autoAssignElasticIpsHasBeenSet; }

    /**
     * <p>Whether to automatically assign an <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline void SetAutoAssignElasticIps(bool value) { m_autoAssignElasticIpsHasBeenSet = true; m_autoAssignElasticIps = value; }

    /**
     * <p>Whether to automatically assign an <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline Layer& WithAutoAssignElasticIps(bool value) { SetAutoAssignElasticIps(value); return *this;}


    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignPublicIps() const{ return m_autoAssignPublicIps; }

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool AutoAssignPublicIpsHasBeenSet() const { return m_autoAssignPublicIpsHasBeenSet; }

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline void SetAutoAssignPublicIps(bool value) { m_autoAssignPublicIpsHasBeenSet = true; m_autoAssignPublicIps = value; }

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline Layer& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}


    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline const Recipes& GetDefaultRecipes() const{ return m_defaultRecipes; }

    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline bool DefaultRecipesHasBeenSet() const { return m_defaultRecipesHasBeenSet; }

    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline void SetDefaultRecipes(const Recipes& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = value; }

    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline void SetDefaultRecipes(Recipes&& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = std::move(value); }

    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline Layer& WithDefaultRecipes(const Recipes& value) { SetDefaultRecipes(value); return *this;}

    /**
     * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
     * You can also provide custom recipes for any or all layers and events. AWS
     * OpsWorks Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline Layer& WithDefaultRecipes(Recipes&& value) { SetDefaultRecipes(std::move(value)); return *this;}


    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const{ return m_customRecipes; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline bool CustomRecipesHasBeenSet() const { return m_customRecipesHasBeenSet; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline void SetCustomRecipes(const Recipes& value) { m_customRecipesHasBeenSet = true; m_customRecipes = value; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline void SetCustomRecipes(Recipes&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = std::move(value); }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline Layer& WithCustomRecipes(const Recipes& value) { SetCustomRecipes(value); return *this;}

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline Layer& WithCustomRecipes(Recipes&& value) { SetCustomRecipes(std::move(value)); return *this;}


    /**
     * <p>Date when the layer was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline Layer& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date when the layer was created.</p>
     */
    inline Layer& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Date when the layer was created.</p>
     */
    inline Layer& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p> <note> <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> </note>
     */
    inline Layer& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}


    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const{ return m_useEbsOptimizedInstances; }

    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline bool UseEbsOptimizedInstancesHasBeenSet() const { return m_useEbsOptimizedInstancesHasBeenSet; }

    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline void SetUseEbsOptimizedInstances(bool value) { m_useEbsOptimizedInstancesHasBeenSet = true; m_useEbsOptimizedInstances = value; }

    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline Layer& WithUseEbsOptimizedInstances(bool value) { SetUseEbsOptimizedInstances(value); return *this;}


    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const{ return m_lifecycleEventConfiguration; }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline void SetLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline void SetLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::move(value); }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline Layer& WithLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { SetLifecycleEventConfiguration(value); return *this;}

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline Layer& WithLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { SetLifecycleEventConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;

    LayerType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_shortname;
    bool m_shortnameHasBeenSet;

    Aws::Map<LayerAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    CloudWatchLogsConfiguration m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet;

    Aws::String m_customInstanceProfileArn;
    bool m_customInstanceProfileArnHasBeenSet;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet;

    Aws::Vector<Aws::String> m_customSecurityGroupIds;
    bool m_customSecurityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_defaultSecurityGroupNames;
    bool m_defaultSecurityGroupNamesHasBeenSet;

    Aws::Vector<Aws::String> m_packages;
    bool m_packagesHasBeenSet;

    Aws::Vector<VolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet;

    bool m_enableAutoHealing;
    bool m_enableAutoHealingHasBeenSet;

    bool m_autoAssignElasticIps;
    bool m_autoAssignElasticIpsHasBeenSet;

    bool m_autoAssignPublicIps;
    bool m_autoAssignPublicIpsHasBeenSet;

    Recipes m_defaultRecipes;
    bool m_defaultRecipesHasBeenSet;

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    bool m_installUpdatesOnBoot;
    bool m_installUpdatesOnBootHasBeenSet;

    bool m_useEbsOptimizedInstances;
    bool m_useEbsOptimizedInstancesHasBeenSet;

    LifecycleEventConfiguration m_lifecycleEventConfiguration;
    bool m_lifecycleEventConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
