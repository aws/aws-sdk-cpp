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
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API UpdateLayerRequest : public OpsWorksRequest
  {
  public:
    UpdateLayerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLayer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateLayerRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline UpdateLayerRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline UpdateLayerRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline UpdateLayerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline UpdateLayerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The layer name, which is used by the console.</p>
     */
    inline UpdateLayerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline const Aws::String& GetShortname() const{ return m_shortname; }

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline UpdateLayerRequest& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline UpdateLayerRequest& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}

    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by AWS OpsWorks Stacks and by Chef. The short name is
     * also used as the name for the directory where your app files are installed. It
     * can have a maximum of 200 characters and must be in the following format:
     * /\A[a-z0-9\-\_\.]+\Z/.</p> <p>The built-in layers' short names are defined by
     * AWS OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a> </p>
     */
    inline UpdateLayerRequest& WithShortname(const char* value) { SetShortname(value); return *this;}


    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline void SetAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& WithAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& WithAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(const LayerAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(LayerAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(const LayerAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(LayerAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(LayerAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline UpdateLayerRequest& AddAttributes(const LayerAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }

    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }

    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }

    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }

    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline UpdateLayerRequest& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { SetCloudWatchLogsConfiguration(value); return *this;}

    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline UpdateLayerRequest& WithCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const{ return m_customInstanceProfileArn; }

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const Aws::String& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(Aws::String&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::move(value); }

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline void SetCustomInstanceProfileArn(const char* value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn.assign(value); }

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateLayerRequest& WithCustomInstanceProfileArn(const Aws::String& value) { SetCustomInstanceProfileArn(value); return *this;}

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateLayerRequest& WithCustomInstanceProfileArn(Aws::String&& value) { SetCustomInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM profile to be used for all of the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline UpdateLayerRequest& WithCustomInstanceProfileArn(const char* value) { SetCustomInstanceProfileArn(value); return *this;}


    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline UpdateLayerRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline UpdateLayerRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. </p>
     */
    inline UpdateLayerRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}


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
    inline UpdateLayerRequest& WithCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetCustomSecurityGroupIds(value); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline UpdateLayerRequest& WithCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetCustomSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline UpdateLayerRequest& AddCustomSecurityGroupIds(const Aws::String& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline UpdateLayerRequest& AddCustomSecurityGroupIds(Aws::String&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline UpdateLayerRequest& AddCustomSecurityGroupIds(const char* value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }


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
    inline UpdateLayerRequest& WithPackages(const Aws::Vector<Aws::String>& value) { SetPackages(value); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline UpdateLayerRequest& WithPackages(Aws::Vector<Aws::String>&& value) { SetPackages(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline UpdateLayerRequest& AddPackages(const Aws::String& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline UpdateLayerRequest& AddPackages(Aws::String&& value) { m_packagesHasBeenSet = true; m_packages.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline UpdateLayerRequest& AddPackages(const char* value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }


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
    inline UpdateLayerRequest& WithVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline UpdateLayerRequest& WithVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline UpdateLayerRequest& AddVolumeConfigurations(const VolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }

    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline UpdateLayerRequest& AddVolumeConfigurations(VolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const{ return m_enableAutoHealing; }

    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline bool EnableAutoHealingHasBeenSet() const { return m_enableAutoHealingHasBeenSet; }

    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline void SetEnableAutoHealing(bool value) { m_enableAutoHealingHasBeenSet = true; m_enableAutoHealing = value; }

    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline UpdateLayerRequest& WithEnableAutoHealing(bool value) { SetEnableAutoHealing(value); return *this;}


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
    inline UpdateLayerRequest& WithAutoAssignElasticIps(bool value) { SetAutoAssignElasticIps(value); return *this;}


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
    inline UpdateLayerRequest& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}


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
    inline UpdateLayerRequest& WithCustomRecipes(const Recipes& value) { SetCustomRecipes(value); return *this;}

    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline UpdateLayerRequest& WithCustomRecipes(Recipes&& value) { SetCustomRecipes(std::move(value)); return *this;}


    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }

    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p> <note> <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> </note>
     */
    inline UpdateLayerRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}


    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const{ return m_useEbsOptimizedInstances; }

    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline bool UseEbsOptimizedInstancesHasBeenSet() const { return m_useEbsOptimizedInstancesHasBeenSet; }

    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline void SetUseEbsOptimizedInstances(bool value) { m_useEbsOptimizedInstancesHasBeenSet = true; m_useEbsOptimizedInstances = value; }

    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline UpdateLayerRequest& WithUseEbsOptimizedInstances(bool value) { SetUseEbsOptimizedInstances(value); return *this;}


    /**
     * <p/>
     */
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const{ return m_lifecycleEventConfiguration; }

    /**
     * <p/>
     */
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }

    /**
     * <p/>
     */
    inline void SetLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateLayerRequest& WithLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { SetLifecycleEventConfiguration(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateLayerRequest& WithLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { SetLifecycleEventConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;

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

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet;

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
