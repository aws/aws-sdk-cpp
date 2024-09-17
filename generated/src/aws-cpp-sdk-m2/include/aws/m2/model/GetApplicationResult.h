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
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult();
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline GetApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline GetApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetApplicationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetApplicationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application that is deployed.</p>
     */
    inline const DeployedVersionSummary& GetDeployedVersion() const{ return m_deployedVersion; }
    inline void SetDeployedVersion(const DeployedVersionSummary& value) { m_deployedVersion = value; }
    inline void SetDeployedVersion(DeployedVersionSummary&& value) { m_deployedVersion = std::move(value); }
    inline GetApplicationResult& WithDeployedVersion(const DeployedVersionSummary& value) { SetDeployedVersion(value); return *this;}
    inline GetApplicationResult& WithDeployedVersion(DeployedVersionSummary&& value) { SetDeployedVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the target platform for the application.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }
    inline GetApplicationResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline GetApplicationResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the runtime environment where you want to deploy the
     * application.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetApplicationResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetApplicationResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetApplicationResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetApplicationResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetApplicationResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetApplicationResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }
    inline GetApplicationResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}
    inline GetApplicationResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the application.</p>
     */
    inline const ApplicationVersionSummary& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const ApplicationVersionSummary& value) { m_latestVersion = value; }
    inline void SetLatestVersion(ApplicationVersionSummary&& value) { m_latestVersion = std::move(value); }
    inline GetApplicationResult& WithLatestVersion(const ApplicationVersionSummary& value) { SetLatestVersion(value); return *this;}
    inline GetApplicationResult& WithLatestVersion(ApplicationVersionSummary&& value) { SetLatestVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the network load balancer listener created
     * in your Amazon Web Services account. Amazon Web Services Mainframe Modernization
     * creates this listener for you the first time you deploy an application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListenerArns() const{ return m_listenerArns; }
    inline void SetListenerArns(const Aws::Vector<Aws::String>& value) { m_listenerArns = value; }
    inline void SetListenerArns(Aws::Vector<Aws::String>&& value) { m_listenerArns = std::move(value); }
    inline GetApplicationResult& WithListenerArns(const Aws::Vector<Aws::String>& value) { SetListenerArns(value); return *this;}
    inline GetApplicationResult& WithListenerArns(Aws::Vector<Aws::String>&& value) { SetListenerArns(std::move(value)); return *this;}
    inline GetApplicationResult& AddListenerArns(const Aws::String& value) { m_listenerArns.push_back(value); return *this; }
    inline GetApplicationResult& AddListenerArns(Aws::String&& value) { m_listenerArns.push_back(std::move(value)); return *this; }
    inline GetApplicationResult& AddListenerArns(const char* value) { m_listenerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port associated with the network load balancer listener created in your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<int>& GetListenerPorts() const{ return m_listenerPorts; }
    inline void SetListenerPorts(const Aws::Vector<int>& value) { m_listenerPorts = value; }
    inline void SetListenerPorts(Aws::Vector<int>&& value) { m_listenerPorts = std::move(value); }
    inline GetApplicationResult& WithListenerPorts(const Aws::Vector<int>& value) { SetListenerPorts(value); return *this;}
    inline GetApplicationResult& WithListenerPorts(Aws::Vector<int>&& value) { SetListenerPorts(std::move(value)); return *this;}
    inline GetApplicationResult& AddListenerPorts(int value) { m_listenerPorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the load balancer created in your Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetLoadBalancerDnsName() const{ return m_loadBalancerDnsName; }
    inline void SetLoadBalancerDnsName(const Aws::String& value) { m_loadBalancerDnsName = value; }
    inline void SetLoadBalancerDnsName(Aws::String&& value) { m_loadBalancerDnsName = std::move(value); }
    inline void SetLoadBalancerDnsName(const char* value) { m_loadBalancerDnsName.assign(value); }
    inline GetApplicationResult& WithLoadBalancerDnsName(const Aws::String& value) { SetLoadBalancerDnsName(value); return *this;}
    inline GetApplicationResult& WithLoadBalancerDnsName(Aws::String&& value) { SetLoadBalancerDnsName(std::move(value)); return *this;}
    inline GetApplicationResult& WithLoadBalancerDnsName(const char* value) { SetLoadBalancerDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log summaries. Each log summary includes the log type as well as
     * the log group identifier. These are CloudWatch logs. Amazon Web Services
     * Mainframe Modernization pushes the application log to CloudWatch under the
     * customer's account.</p>
     */
    inline const Aws::Vector<LogGroupSummary>& GetLogGroups() const{ return m_logGroups; }
    inline void SetLogGroups(const Aws::Vector<LogGroupSummary>& value) { m_logGroups = value; }
    inline void SetLogGroups(Aws::Vector<LogGroupSummary>&& value) { m_logGroups = std::move(value); }
    inline GetApplicationResult& WithLogGroups(const Aws::Vector<LogGroupSummary>& value) { SetLogGroups(value); return *this;}
    inline GetApplicationResult& WithLogGroups(Aws::Vector<LogGroupSummary>&& value) { SetLogGroups(std::move(value)); return *this;}
    inline GetApplicationResult& AddLogGroups(const LogGroupSummary& value) { m_logGroups.push_back(value); return *this; }
    inline GetApplicationResult& AddLogGroups(LogGroupSummary&& value) { m_logGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role associated with the
     * application.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetApplicationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetApplicationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const ApplicationLifecycle& value) { m_status = value; }
    inline void SetStatus(ApplicationLifecycle&& value) { m_status = std::move(value); }
    inline GetApplicationResult& WithStatus(const ApplicationLifecycle& value) { SetStatus(value); return *this;}
    inline GetApplicationResult& WithStatus(ApplicationLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetApplicationResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetApplicationResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetApplicationResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the Amazon Resource Names (ARNs) of the target groups that are
     * attached to the network load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupArns() const{ return m_targetGroupArns; }
    inline void SetTargetGroupArns(const Aws::Vector<Aws::String>& value) { m_targetGroupArns = value; }
    inline void SetTargetGroupArns(Aws::Vector<Aws::String>&& value) { m_targetGroupArns = std::move(value); }
    inline GetApplicationResult& WithTargetGroupArns(const Aws::Vector<Aws::String>& value) { SetTargetGroupArns(value); return *this;}
    inline GetApplicationResult& WithTargetGroupArns(Aws::Vector<Aws::String>&& value) { SetTargetGroupArns(std::move(value)); return *this;}
    inline GetApplicationResult& AddTargetGroupArns(const Aws::String& value) { m_targetGroupArns.push_back(value); return *this; }
    inline GetApplicationResult& AddTargetGroupArns(Aws::String&& value) { m_targetGroupArns.push_back(std::move(value)); return *this; }
    inline GetApplicationResult& AddTargetGroupArns(const char* value) { m_targetGroupArns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;

    Aws::String m_applicationId;

    Aws::Utils::DateTime m_creationTime;

    DeployedVersionSummary m_deployedVersion;

    Aws::String m_description;

    EngineType m_engineType;

    Aws::String m_environmentId;

    Aws::String m_kmsKeyId;

    Aws::Utils::DateTime m_lastStartTime;

    ApplicationVersionSummary m_latestVersion;

    Aws::Vector<Aws::String> m_listenerArns;

    Aws::Vector<int> m_listenerPorts;

    Aws::String m_loadBalancerDnsName;

    Aws::Vector<LogGroupSummary> m_logGroups;

    Aws::String m_name;

    Aws::String m_roleArn;

    ApplicationLifecycle m_status;

    Aws::String m_statusReason;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Aws::String> m_targetGroupArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
