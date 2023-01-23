/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/DeploymentIoTJobConfiguration.h>
#include <aws/greengrassv2/model/DeploymentPolicies.h>
#include <aws/greengrassv2/model/ComponentDeploymentSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class CreateDeploymentRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline CreateDeploymentRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline CreateDeploymentRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline CreateDeploymentRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}


    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDeploymentSpecification>& GetComponents() const{ return m_components; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline void SetComponents(const Aws::Map<Aws::String, ComponentDeploymentSpecification>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline void SetComponents(Aws::Map<Aws::String, ComponentDeploymentSpecification>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& WithComponents(const Aws::Map<Aws::String, ComponentDeploymentSpecification>& value) { SetComponents(value); return *this;}

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& WithComponents(Aws::Map<Aws::String, ComponentDeploymentSpecification>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(const Aws::String& key, const ComponentDeploymentSpecification& value) { m_componentsHasBeenSet = true; m_components.emplace(key, value); return *this; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(Aws::String&& key, const ComponentDeploymentSpecification& value) { m_componentsHasBeenSet = true; m_components.emplace(std::move(key), value); return *this; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(const Aws::String& key, ComponentDeploymentSpecification&& value) { m_componentsHasBeenSet = true; m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(Aws::String&& key, ComponentDeploymentSpecification&& value) { m_componentsHasBeenSet = true; m_components.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(const char* key, ComponentDeploymentSpecification&& value) { m_componentsHasBeenSet = true; m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline CreateDeploymentRequest& AddComponents(const char* key, const ComponentDeploymentSpecification& value) { m_componentsHasBeenSet = true; m_components.emplace(key, value); return *this; }


    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline const DeploymentIoTJobConfiguration& GetIotJobConfiguration() const{ return m_iotJobConfiguration; }

    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline bool IotJobConfigurationHasBeenSet() const { return m_iotJobConfigurationHasBeenSet; }

    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline void SetIotJobConfiguration(const DeploymentIoTJobConfiguration& value) { m_iotJobConfigurationHasBeenSet = true; m_iotJobConfiguration = value; }

    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline void SetIotJobConfiguration(DeploymentIoTJobConfiguration&& value) { m_iotJobConfigurationHasBeenSet = true; m_iotJobConfiguration = std::move(value); }

    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline CreateDeploymentRequest& WithIotJobConfiguration(const DeploymentIoTJobConfiguration& value) { SetIotJobConfiguration(value); return *this;}

    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline CreateDeploymentRequest& WithIotJobConfiguration(DeploymentIoTJobConfiguration&& value) { SetIotJobConfiguration(std::move(value)); return *this;}


    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline const DeploymentPolicies& GetDeploymentPolicies() const{ return m_deploymentPolicies; }

    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline bool DeploymentPoliciesHasBeenSet() const { return m_deploymentPoliciesHasBeenSet; }

    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline void SetDeploymentPolicies(const DeploymentPolicies& value) { m_deploymentPoliciesHasBeenSet = true; m_deploymentPolicies = value; }

    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline void SetDeploymentPolicies(DeploymentPolicies&& value) { m_deploymentPoliciesHasBeenSet = true; m_deploymentPolicies = std::move(value); }

    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentPolicies(const DeploymentPolicies& value) { SetDeploymentPolicies(value); return *this;}

    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentPolicies(DeploymentPolicies&& value) { SetDeploymentPolicies(std::move(value)); return *this;}


    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const{ return m_parentTargetArn; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const Aws::String& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = value; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(Aws::String&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::move(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const char* value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn.assign(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline CreateDeploymentRequest& WithParentTargetArn(const Aws::String& value) { SetParentTargetArn(value); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline CreateDeploymentRequest& WithParentTargetArn(Aws::String&& value) { SetParentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline CreateDeploymentRequest& WithParentTargetArn(const char* value) { SetParentTargetArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline CreateDeploymentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline CreateDeploymentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline CreateDeploymentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline CreateDeploymentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    Aws::Map<Aws::String, ComponentDeploymentSpecification> m_components;
    bool m_componentsHasBeenSet = false;

    DeploymentIoTJobConfiguration m_iotJobConfiguration;
    bool m_iotJobConfigurationHasBeenSet = false;

    DeploymentPolicies m_deploymentPolicies;
    bool m_deploymentPoliciesHasBeenSet = false;

    Aws::String m_parentTargetArn;
    bool m_parentTargetArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
