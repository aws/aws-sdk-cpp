/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/DeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/DeploymentPolicies.h>
#include <aws/greengrassv2/model/DeploymentIoTJobConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/greengrassv2/model/ComponentDeploymentSpecification.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{
  class GetDeploymentResult
  {
  public:
    AWS_GREENGRASSV2_API GetDeploymentResult() = default;
    AWS_GREENGRASSV2_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    GetDeploymentResult& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the deployment.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    GetDeploymentResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    GetDeploymentResult& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
    template<typename DeploymentNameT = Aws::String>
    void SetDeploymentName(DeploymentNameT&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::forward<DeploymentNameT>(value); }
    template<typename DeploymentNameT = Aws::String>
    GetDeploymentResult& WithDeploymentName(DeploymentNameT&& value) { SetDeploymentName(std::forward<DeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline GetDeploymentResult& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const { return m_iotJobId; }
    template<typename IotJobIdT = Aws::String>
    void SetIotJobId(IotJobIdT&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::forward<IotJobIdT>(value); }
    template<typename IotJobIdT = Aws::String>
    GetDeploymentResult& WithIotJobId(IotJobIdT&& value) { SetIotJobId(std::forward<IotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const { return m_iotJobArn; }
    template<typename IotJobArnT = Aws::String>
    void SetIotJobArn(IotJobArnT&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::forward<IotJobArnT>(value); }
    template<typename IotJobArnT = Aws::String>
    GetDeploymentResult& WithIotJobArn(IotJobArnT&& value) { SetIotJobArn(std::forward<IotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDeploymentSpecification>& GetComponents() const { return m_components; }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentDeploymentSpecification>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentDeploymentSpecification>>
    GetDeploymentResult& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentDeploymentSpecification>
    GetDeploymentResult& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
      m_componentsHasBeenSet = true; m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline const DeploymentPolicies& GetDeploymentPolicies() const { return m_deploymentPolicies; }
    template<typename DeploymentPoliciesT = DeploymentPolicies>
    void SetDeploymentPolicies(DeploymentPoliciesT&& value) { m_deploymentPoliciesHasBeenSet = true; m_deploymentPolicies = std::forward<DeploymentPoliciesT>(value); }
    template<typename DeploymentPoliciesT = DeploymentPolicies>
    GetDeploymentResult& WithDeploymentPolicies(DeploymentPoliciesT&& value) { SetDeploymentPolicies(std::forward<DeploymentPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline const DeploymentIoTJobConfiguration& GetIotJobConfiguration() const { return m_iotJobConfiguration; }
    template<typename IotJobConfigurationT = DeploymentIoTJobConfiguration>
    void SetIotJobConfiguration(IotJobConfigurationT&& value) { m_iotJobConfigurationHasBeenSet = true; m_iotJobConfiguration = std::forward<IotJobConfigurationT>(value); }
    template<typename IotJobConfigurationT = DeploymentIoTJobConfiguration>
    GetDeploymentResult& WithIotJobConfiguration(IotJobConfigurationT&& value) { SetIotJobConfiguration(std::forward<IotJobConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    GetDeploymentResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline bool GetIsLatestForTarget() const { return m_isLatestForTarget; }
    inline void SetIsLatestForTarget(bool value) { m_isLatestForTargetHasBeenSet = true; m_isLatestForTarget = value; }
    inline GetDeploymentResult& WithIsLatestForTarget(bool value) { SetIsLatestForTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const { return m_parentTargetArn; }
    template<typename ParentTargetArnT = Aws::String>
    void SetParentTargetArn(ParentTargetArnT&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::forward<ParentTargetArnT>(value); }
    template<typename ParentTargetArnT = Aws::String>
    GetDeploymentResult& WithParentTargetArn(ParentTargetArnT&& value) { SetParentTargetArn(std::forward<ParentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDeploymentResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDeploymentResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_iotJobId;
    bool m_iotJobIdHasBeenSet = false;

    Aws::String m_iotJobArn;
    bool m_iotJobArnHasBeenSet = false;

    Aws::Map<Aws::String, ComponentDeploymentSpecification> m_components;
    bool m_componentsHasBeenSet = false;

    DeploymentPolicies m_deploymentPolicies;
    bool m_deploymentPoliciesHasBeenSet = false;

    DeploymentIoTJobConfiguration m_iotJobConfiguration;
    bool m_iotJobConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    bool m_isLatestForTarget{false};
    bool m_isLatestForTargetHasBeenSet = false;

    Aws::String m_parentTargetArn;
    bool m_parentTargetArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
