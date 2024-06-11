﻿/**
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
    AWS_GREENGRASSV2_API GetDeploymentResult();
    AWS_GREENGRASSV2_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline GetDeploymentResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline GetDeploymentResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline GetDeploymentResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the deployment.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline GetDeploymentResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline GetDeploymentResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline GetDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline GetDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentName = value; }
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentName = std::move(value); }
    inline void SetDeploymentName(const char* value) { m_deploymentName.assign(value); }
    inline GetDeploymentResult& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}
    inline GetDeploymentResult& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}
    inline GetDeploymentResult& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatus = std::move(value); }
    inline GetDeploymentResult& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline GetDeploymentResult& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const{ return m_iotJobId; }
    inline void SetIotJobId(const Aws::String& value) { m_iotJobId = value; }
    inline void SetIotJobId(Aws::String&& value) { m_iotJobId = std::move(value); }
    inline void SetIotJobId(const char* value) { m_iotJobId.assign(value); }
    inline GetDeploymentResult& WithIotJobId(const Aws::String& value) { SetIotJobId(value); return *this;}
    inline GetDeploymentResult& WithIotJobId(Aws::String&& value) { SetIotJobId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithIotJobId(const char* value) { SetIotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const{ return m_iotJobArn; }
    inline void SetIotJobArn(const Aws::String& value) { m_iotJobArn = value; }
    inline void SetIotJobArn(Aws::String&& value) { m_iotJobArn = std::move(value); }
    inline void SetIotJobArn(const char* value) { m_iotJobArn.assign(value); }
    inline GetDeploymentResult& WithIotJobArn(const Aws::String& value) { SetIotJobArn(value); return *this;}
    inline GetDeploymentResult& WithIotJobArn(Aws::String&& value) { SetIotJobArn(std::move(value)); return *this;}
    inline GetDeploymentResult& WithIotJobArn(const char* value) { SetIotJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The components to deploy. This is a dictionary, where each key is the name of
     * a component, and each key's value is the version and configuration to deploy for
     * that component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDeploymentSpecification>& GetComponents() const{ return m_components; }
    inline void SetComponents(const Aws::Map<Aws::String, ComponentDeploymentSpecification>& value) { m_components = value; }
    inline void SetComponents(Aws::Map<Aws::String, ComponentDeploymentSpecification>&& value) { m_components = std::move(value); }
    inline GetDeploymentResult& WithComponents(const Aws::Map<Aws::String, ComponentDeploymentSpecification>& value) { SetComponents(value); return *this;}
    inline GetDeploymentResult& WithComponents(Aws::Map<Aws::String, ComponentDeploymentSpecification>&& value) { SetComponents(std::move(value)); return *this;}
    inline GetDeploymentResult& AddComponents(const Aws::String& key, const ComponentDeploymentSpecification& value) { m_components.emplace(key, value); return *this; }
    inline GetDeploymentResult& AddComponents(Aws::String&& key, const ComponentDeploymentSpecification& value) { m_components.emplace(std::move(key), value); return *this; }
    inline GetDeploymentResult& AddComponents(const Aws::String& key, ComponentDeploymentSpecification&& value) { m_components.emplace(key, std::move(value)); return *this; }
    inline GetDeploymentResult& AddComponents(Aws::String&& key, ComponentDeploymentSpecification&& value) { m_components.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDeploymentResult& AddComponents(const char* key, ComponentDeploymentSpecification&& value) { m_components.emplace(key, std::move(value)); return *this; }
    inline GetDeploymentResult& AddComponents(const char* key, const ComponentDeploymentSpecification& value) { m_components.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The deployment policies for the deployment. These policies define how the
     * deployment updates components and handles failure.</p>
     */
    inline const DeploymentPolicies& GetDeploymentPolicies() const{ return m_deploymentPolicies; }
    inline void SetDeploymentPolicies(const DeploymentPolicies& value) { m_deploymentPolicies = value; }
    inline void SetDeploymentPolicies(DeploymentPolicies&& value) { m_deploymentPolicies = std::move(value); }
    inline GetDeploymentResult& WithDeploymentPolicies(const DeploymentPolicies& value) { SetDeploymentPolicies(value); return *this;}
    inline GetDeploymentResult& WithDeploymentPolicies(DeploymentPolicies&& value) { SetDeploymentPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job configuration for the deployment configuration. The job configuration
     * specifies the rollout, timeout, and stop configurations for the deployment
     * configuration.</p>
     */
    inline const DeploymentIoTJobConfiguration& GetIotJobConfiguration() const{ return m_iotJobConfiguration; }
    inline void SetIotJobConfiguration(const DeploymentIoTJobConfiguration& value) { m_iotJobConfiguration = value; }
    inline void SetIotJobConfiguration(DeploymentIoTJobConfiguration&& value) { m_iotJobConfiguration = std::move(value); }
    inline GetDeploymentResult& WithIotJobConfiguration(const DeploymentIoTJobConfiguration& value) { SetIotJobConfiguration(value); return *this;}
    inline GetDeploymentResult& WithIotJobConfiguration(DeploymentIoTJobConfiguration&& value) { SetIotJobConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }
    inline GetDeploymentResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline GetDeploymentResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline bool GetIsLatestForTarget() const{ return m_isLatestForTarget; }
    inline void SetIsLatestForTarget(bool value) { m_isLatestForTarget = value; }
    inline GetDeploymentResult& WithIsLatestForTarget(bool value) { SetIsLatestForTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const{ return m_parentTargetArn; }
    inline void SetParentTargetArn(const Aws::String& value) { m_parentTargetArn = value; }
    inline void SetParentTargetArn(Aws::String&& value) { m_parentTargetArn = std::move(value); }
    inline void SetParentTargetArn(const char* value) { m_parentTargetArn.assign(value); }
    inline GetDeploymentResult& WithParentTargetArn(const Aws::String& value) { SetParentTargetArn(value); return *this;}
    inline GetDeploymentResult& WithParentTargetArn(Aws::String&& value) { SetParentTargetArn(std::move(value)); return *this;}
    inline GetDeploymentResult& WithParentTargetArn(const char* value) { SetParentTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDeploymentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDeploymentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDeploymentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDeploymentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDeploymentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDeploymentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDeploymentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDeploymentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDeploymentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;

    Aws::String m_revisionId;

    Aws::String m_deploymentId;

    Aws::String m_deploymentName;

    DeploymentStatus m_deploymentStatus;

    Aws::String m_iotJobId;

    Aws::String m_iotJobArn;

    Aws::Map<Aws::String, ComponentDeploymentSpecification> m_components;

    DeploymentPolicies m_deploymentPolicies;

    DeploymentIoTJobConfiguration m_iotJobConfiguration;

    Aws::Utils::DateTime m_creationTimestamp;

    bool m_isLatestForTarget;

    Aws::String m_parentTargetArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
