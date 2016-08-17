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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/LayerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Recipes.h>
#include <aws/opsworks/model/LifecycleEventConfiguration.h>
#include <aws/opsworks/model/LayerAttributesKeys.h>
#include <aws/opsworks/model/VolumeConfiguration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a layer.</p>
   */
  class AWS_OPSWORKS_API Layer
  {
  public:
    Layer();
    Layer(const Aws::Utils::Json::JsonValue& jsonValue);
    Layer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The layer stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The layer stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The layer stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

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
    inline Layer& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

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
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

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
    inline Layer& WithLayerId(Aws::String&& value) { SetLayerId(value); return *this;}

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
    inline void SetType(const LayerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The layer type.</p>
     */
    inline void SetType(LayerType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The layer type.</p>
     */
    inline Layer& WithType(const LayerType& value) { SetType(value); return *this;}

    /**
     * <p>The layer type.</p>
     */
    inline Layer& WithType(LayerType&& value) { SetType(value); return *this;}

    /**
     * <p>The layer name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The layer name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The layer name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline Layer& WithName(Aws::String&& value) { SetName(value); return *this;}

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
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }

    /**
     * <p>The layer short name.</p>
     */
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = value; }

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
    inline Layer& WithShortname(Aws::String&& value) { SetShortname(value); return *this;}

    /**
     * <p>The layer short name.</p>
     */
    inline Layer& WithShortname(const char* value) { SetShortname(value); return *this;}

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline void SetAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline void SetAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& WithAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& WithAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes, AWS
     * OpsWorks returns <code>*****FILTERED*****</code> instead of the actual value</p>
     * <p>For an ECS Cluster layer, AWS OpsWorks the <code>EcsClusterArn</code>
     * attribute is set to the cluster's ARN.</p>
     */
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const{ return m_customInstanceProfileArn; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const Aws::String& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(Aws::String&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const char* value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn.assign(value); }

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Layer& WithCustomInstanceProfileArn(const Aws::String& value) { SetCustomInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline Layer& WithCustomInstanceProfileArn(Aws::String&& value) { SetCustomInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
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
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

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
    inline Layer& WithCustomJson(Aws::String&& value) { SetCustomJson(value); return *this;}

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
    inline void SetCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = value; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline void SetCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = value; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& WithCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetCustomSecurityGroupIds(value); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& WithCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetCustomSecurityGroupIds(value); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& AddCustomSecurityGroupIds(const Aws::String& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline Layer& AddCustomSecurityGroupIds(Aws::String&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }

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
    inline void SetDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = value; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline void SetDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = value; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& WithDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetDefaultSecurityGroupNames(value); return *this;}

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& WithDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetDefaultSecurityGroupNames(value); return *this;}

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& AddDefaultSecurityGroupNames(const Aws::String& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline Layer& AddDefaultSecurityGroupNames(Aws::String&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }

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
    inline void SetPackages(const Aws::Vector<Aws::String>& value) { m_packagesHasBeenSet = true; m_packages = value; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline void SetPackages(Aws::Vector<Aws::String>&& value) { m_packagesHasBeenSet = true; m_packages = value; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& WithPackages(const Aws::Vector<Aws::String>& value) { SetPackages(value); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& WithPackages(Aws::Vector<Aws::String>&& value) { SetPackages(value); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& AddPackages(const Aws::String& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline Layer& AddPackages(Aws::String&& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }

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
    inline void SetVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline void SetVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& WithVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& WithVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { SetVolumeConfigurations(value); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& AddVolumeConfigurations(const VolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline Layer& AddVolumeConfigurations(VolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }

    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const{ return m_enableAutoHealing; }

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
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignElasticIps() const{ return m_autoAssignElasticIps; }

    /**
     * <p>Whether to automatically assign an <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline void SetAutoAssignElasticIps(bool value) { m_autoAssignElasticIpsHasBeenSet = true; m_autoAssignElasticIps = value; }

    /**
     * <p>Whether to automatically assign an <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline Layer& WithAutoAssignElasticIps(bool value) { SetAutoAssignElasticIps(value); return *this;}

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignPublicIps() const{ return m_autoAssignPublicIps; }

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline void SetAutoAssignPublicIps(bool value) { m_autoAssignPublicIpsHasBeenSet = true; m_autoAssignPublicIps = value; }

    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline Layer& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}

    
    inline const Recipes& GetDefaultRecipes() const{ return m_defaultRecipes; }

    
    inline void SetDefaultRecipes(const Recipes& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = value; }

    
    inline void SetDefaultRecipes(Recipes&& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = value; }

    
    inline Layer& WithDefaultRecipes(const Recipes& value) { SetDefaultRecipes(value); return *this;}

    
    inline Layer& WithDefaultRecipes(Recipes&& value) { SetDefaultRecipes(value); return *this;}

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const{ return m_customRecipes; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline void SetCustomRecipes(const Recipes& value) { m_customRecipesHasBeenSet = true; m_customRecipes = value; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline void SetCustomRecipes(Recipes&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = value; }

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline Layer& WithCustomRecipes(const Recipes& value) { SetCustomRecipes(value); return *this;}

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline Layer& WithCustomRecipes(Recipes&& value) { SetCustomRecipes(value); return *this;}

    /**
     * <p>Date when the layer was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date when the layer was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

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
    inline Layer& WithCreatedAt(Aws::String&& value) { SetCreatedAt(value); return *this;}

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
    inline void SetLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline void SetLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline Layer& WithLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { SetLifecycleEventConfiguration(value); return *this;}

    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline Layer& WithLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { SetLifecycleEventConfiguration(value); return *this;}

  private:
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
