/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/SessionMonitoringConfiguration.h>
#include <aws/elasticmapreduce/model/Tag.h>

#include <utility>

namespace Aws {
namespace EMR {
namespace Model {

/**
 * <p>Input to the <code>StartSession</code> operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartSessionInput">AWS
 * API Reference</a></p>
 */
class StartSessionRequest : public EMRRequest {
 public:
  AWS_EMR_API StartSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

  AWS_EMR_API Aws::String SerializePayload() const override;

  AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An optional name for the session.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartSessionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the cluster on which to start the session.</p>
   */
  inline const Aws::String& GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  template <typename ClusterIdT = Aws::String>
  void SetClusterId(ClusterIdT&& value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = std::forward<ClusterIdT>(value);
  }
  template <typename ClusterIdT = Aws::String>
  StartSessionRequest& WithClusterId(ClusterIdT&& value) {
    SetClusterId(std::forward<ClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role ARN for the session. Amazon EMR uses this role to access
   * Amazon Web Services resources on your behalf during session execution.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  StartSessionRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration overrides for the session. Only runtime configuration
   * overrides are supported.</p>
   */
  inline const Aws::Vector<Configuration>& GetEngineConfigurations() const { return m_engineConfigurations; }
  inline bool EngineConfigurationsHasBeenSet() const { return m_engineConfigurationsHasBeenSet; }
  template <typename EngineConfigurationsT = Aws::Vector<Configuration>>
  void SetEngineConfigurations(EngineConfigurationsT&& value) {
    m_engineConfigurationsHasBeenSet = true;
    m_engineConfigurations = std::forward<EngineConfigurationsT>(value);
  }
  template <typename EngineConfigurationsT = Aws::Vector<Configuration>>
  StartSessionRequest& WithEngineConfigurations(EngineConfigurationsT&& value) {
    SetEngineConfigurations(std::forward<EngineConfigurationsT>(value));
    return *this;
  }
  template <typename EngineConfigurationsT = Configuration>
  StartSessionRequest& AddEngineConfigurations(EngineConfigurationsT&& value) {
    m_engineConfigurationsHasBeenSet = true;
    m_engineConfigurations.emplace_back(std::forward<EngineConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monitoring configuration that controls where session logs are published,
   * such as Amazon S3, CloudWatch, or managed logging.</p>
   */
  inline const SessionMonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
  inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
  template <typename MonitoringConfigurationT = SessionMonitoringConfiguration>
  void SetMonitoringConfiguration(MonitoringConfigurationT&& value) {
    m_monitoringConfigurationHasBeenSet = true;
    m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value);
  }
  template <typename MonitoringConfigurationT = SessionMonitoringConfiguration>
  StartSessionRequest& WithMonitoringConfiguration(MonitoringConfigurationT&& value) {
    SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle timeout, in minutes. If the session is idle for this duration,
   * Amazon EMR EC2 automatically terminates it.</p>
   */
  inline long long GetSessionIdleTimeoutInMinutes() const { return m_sessionIdleTimeoutInMinutes; }
  inline bool SessionIdleTimeoutInMinutesHasBeenSet() const { return m_sessionIdleTimeoutInMinutesHasBeenSet; }
  inline void SetSessionIdleTimeoutInMinutes(long long value) {
    m_sessionIdleTimeoutInMinutesHasBeenSet = true;
    m_sessionIdleTimeoutInMinutes = value;
  }
  inline StartSessionRequest& WithSessionIdleTimeoutInMinutes(long long value) {
    SetSessionIdleTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request that completed successfully
   * using the same client request token, the service returns the original response
   * without performing the operation again.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  StartSessionRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the session.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  StartSessionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  StartSessionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_clusterId;

  Aws::String m_executionRoleArn;

  Aws::Vector<Configuration> m_engineConfigurations;

  SessionMonitoringConfiguration m_monitoringConfiguration;

  long long m_sessionIdleTimeoutInMinutes{0};

  Aws::String m_clientRequestToken;

  Aws::Vector<Tag> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_clusterIdHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_engineConfigurationsHasBeenSet = false;
  bool m_monitoringConfigurationHasBeenSet = false;
  bool m_sessionIdleTimeoutInMinutesHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
