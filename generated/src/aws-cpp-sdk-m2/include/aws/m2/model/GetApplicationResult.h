/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/DeployedVersionSummary.h>
#include <aws/m2/model/EngineType.h>
#include <aws/m2/model/ApplicationVersionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/m2/model/ApplicationLifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/m2/model/LogGroupSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    GetApplicationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetApplicationResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetApplicationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application that is deployed.</p>
     */
    inline const DeployedVersionSummary& GetDeployedVersion() const { return m_deployedVersion; }
    template<typename DeployedVersionT = DeployedVersionSummary>
    void SetDeployedVersion(DeployedVersionT&& value) { m_deployedVersionHasBeenSet = true; m_deployedVersion = std::forward<DeployedVersionT>(value); }
    template<typename DeployedVersionT = DeployedVersionSummary>
    GetApplicationResult& WithDeployedVersion(DeployedVersionT&& value) { SetDeployedVersion(std::forward<DeployedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetApplicationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the target platform for the application.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline GetApplicationResult& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the runtime environment where you want to deploy the
     * application.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetApplicationResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetApplicationResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const { return m_lastStartTime; }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    void SetLastStartTime(LastStartTimeT&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::forward<LastStartTimeT>(value); }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    GetApplicationResult& WithLastStartTime(LastStartTimeT&& value) { SetLastStartTime(std::forward<LastStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the application.</p>
     */
    inline const ApplicationVersionSummary& GetLatestVersion() const { return m_latestVersion; }
    template<typename LatestVersionT = ApplicationVersionSummary>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = ApplicationVersionSummary>
    GetApplicationResult& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the network load balancer listener created
     * in your Amazon Web Services account. Amazon Web Services Mainframe Modernization
     * creates this listener for you the first time you deploy an application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListenerArns() const { return m_listenerArns; }
    template<typename ListenerArnsT = Aws::Vector<Aws::String>>
    void SetListenerArns(ListenerArnsT&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = std::forward<ListenerArnsT>(value); }
    template<typename ListenerArnsT = Aws::Vector<Aws::String>>
    GetApplicationResult& WithListenerArns(ListenerArnsT&& value) { SetListenerArns(std::forward<ListenerArnsT>(value)); return *this;}
    template<typename ListenerArnsT = Aws::String>
    GetApplicationResult& AddListenerArns(ListenerArnsT&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.emplace_back(std::forward<ListenerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port associated with the network load balancer listener created in your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<int>& GetListenerPorts() const { return m_listenerPorts; }
    template<typename ListenerPortsT = Aws::Vector<int>>
    void SetListenerPorts(ListenerPortsT&& value) { m_listenerPortsHasBeenSet = true; m_listenerPorts = std::forward<ListenerPortsT>(value); }
    template<typename ListenerPortsT = Aws::Vector<int>>
    GetApplicationResult& WithListenerPorts(ListenerPortsT&& value) { SetListenerPorts(std::forward<ListenerPortsT>(value)); return *this;}
    inline GetApplicationResult& AddListenerPorts(int value) { m_listenerPortsHasBeenSet = true; m_listenerPorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the load balancer created in your Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetLoadBalancerDnsName() const { return m_loadBalancerDnsName; }
    template<typename LoadBalancerDnsNameT = Aws::String>
    void SetLoadBalancerDnsName(LoadBalancerDnsNameT&& value) { m_loadBalancerDnsNameHasBeenSet = true; m_loadBalancerDnsName = std::forward<LoadBalancerDnsNameT>(value); }
    template<typename LoadBalancerDnsNameT = Aws::String>
    GetApplicationResult& WithLoadBalancerDnsName(LoadBalancerDnsNameT&& value) { SetLoadBalancerDnsName(std::forward<LoadBalancerDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log summaries. Each log summary includes the log type as well as
     * the log group identifier. These are CloudWatch logs. Amazon Web Services
     * Mainframe Modernization pushes the application log to CloudWatch under the
     * customer's account.</p>
     */
    inline const Aws::Vector<LogGroupSummary>& GetLogGroups() const { return m_logGroups; }
    template<typename LogGroupsT = Aws::Vector<LogGroupSummary>>
    void SetLogGroups(LogGroupsT&& value) { m_logGroupsHasBeenSet = true; m_logGroups = std::forward<LogGroupsT>(value); }
    template<typename LogGroupsT = Aws::Vector<LogGroupSummary>>
    GetApplicationResult& WithLogGroups(LogGroupsT&& value) { SetLogGroups(std::forward<LogGroupsT>(value)); return *this;}
    template<typename LogGroupsT = LogGroupSummary>
    GetApplicationResult& AddLogGroups(LogGroupsT&& value) { m_logGroupsHasBeenSet = true; m_logGroups.emplace_back(std::forward<LogGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role associated with the
     * application.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetApplicationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationLifecycle GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetApplicationResult& WithStatus(ApplicationLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetApplicationResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetApplicationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetApplicationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returns the Amazon Resource Names (ARNs) of the target groups that are
     * attached to the network load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupArns() const { return m_targetGroupArns; }
    template<typename TargetGroupArnsT = Aws::Vector<Aws::String>>
    void SetTargetGroupArns(TargetGroupArnsT&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns = std::forward<TargetGroupArnsT>(value); }
    template<typename TargetGroupArnsT = Aws::Vector<Aws::String>>
    GetApplicationResult& WithTargetGroupArns(TargetGroupArnsT&& value) { SetTargetGroupArns(std::forward<TargetGroupArnsT>(value)); return *this;}
    template<typename TargetGroupArnsT = Aws::String>
    GetApplicationResult& AddTargetGroupArns(TargetGroupArnsT&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.emplace_back(std::forward<TargetGroupArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    DeployedVersionSummary m_deployedVersion;
    bool m_deployedVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime{};
    bool m_lastStartTimeHasBeenSet = false;

    ApplicationVersionSummary m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_listenerArns;
    bool m_listenerArnsHasBeenSet = false;

    Aws::Vector<int> m_listenerPorts;
    bool m_listenerPortsHasBeenSet = false;

    Aws::String m_loadBalancerDnsName;
    bool m_loadBalancerDnsNameHasBeenSet = false;

    Aws::Vector<LogGroupSummary> m_logGroups;
    bool m_logGroupsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ApplicationLifecycle m_status{ApplicationLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetGroupArns;
    bool m_targetGroupArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
