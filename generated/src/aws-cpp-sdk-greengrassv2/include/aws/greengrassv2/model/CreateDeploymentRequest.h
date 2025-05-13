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
    AWS_GREENGRASSV2_API CreateDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    CreateDeploymentRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
    template<typename DeploymentNameT = Aws::String>
    void SetDeploymentName(DeploymentNameT&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::forward<DeploymentNameT>(value); }
    template<typename DeploymentNameT = Aws::String>
    CreateDeploymentRequest& WithDeploymentName(DeploymentNameT&& value) { SetDeploymentName(std::forward<DeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDeploymentSpecification>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentDeploymentSpecification>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentDeploymentSpecification>>
    CreateDeploymentRequest& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentDeploymentSpecification>
    CreateDeploymentRequest& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
      m_componentsHasBeenSet = true; m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline const DeploymentIoTJobConfiguration& GetIotJobConfiguration() const { return m_iotJobConfiguration; }
    inline bool IotJobConfigurationHasBeenSet() const { return m_iotJobConfigurationHasBeenSet; }
    template<typename IotJobConfigurationT = DeploymentIoTJobConfiguration>
    void SetIotJobConfiguration(IotJobConfigurationT&& value) { m_iotJobConfigurationHasBeenSet = true; m_iotJobConfiguration = std::forward<IotJobConfigurationT>(value); }
    template<typename IotJobConfigurationT = DeploymentIoTJobConfiguration>
    CreateDeploymentRequest& WithIotJobConfiguration(IotJobConfigurationT&& value) { SetIotJobConfiguration(std::forward<IotJobConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline const DeploymentPolicies& GetDeploymentPolicies() const { return m_deploymentPolicies; }
    inline bool DeploymentPoliciesHasBeenSet() const { return m_deploymentPoliciesHasBeenSet; }
    template<typename DeploymentPoliciesT = DeploymentPolicies>
    void SetDeploymentPolicies(DeploymentPoliciesT&& value) { m_deploymentPoliciesHasBeenSet = true; m_deploymentPolicies = std::forward<DeploymentPoliciesT>(value); }
    template<typename DeploymentPoliciesT = DeploymentPolicies>
    CreateDeploymentRequest& WithDeploymentPolicies(DeploymentPoliciesT&& value) { SetDeploymentPolicies(std::forward<DeploymentPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const { return m_parentTargetArn; }
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }
    template<typename ParentTargetArnT = Aws::String>
    void SetParentTargetArn(ParentTargetArnT&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::forward<ParentTargetArnT>(value); }
    template<typename ParentTargetArnT = Aws::String>
    CreateDeploymentRequest& WithParentTargetArn(ParentTargetArnT&& value) { SetParentTargetArn(std::forward<ParentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDeploymentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDeploymentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDeploymentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
