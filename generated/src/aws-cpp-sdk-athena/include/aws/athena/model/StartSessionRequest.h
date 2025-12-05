/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaRequest.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/EngineConfiguration.h>
#include <aws/athena/model/MonitoringConfiguration.h>
#include <aws/athena/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Athena {
namespace Model {

/**
 */
class StartSessionRequest : public AthenaRequest {
 public:
  AWS_ATHENA_API StartSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

  AWS_ATHENA_API Aws::String SerializePayload() const override;

  AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The session description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartSessionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workgroup to which the session belongs.</p>
   */
  inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
  inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
  template <typename WorkGroupT = Aws::String>
  void SetWorkGroup(WorkGroupT&& value) {
    m_workGroupHasBeenSet = true;
    m_workGroup = std::forward<WorkGroupT>(value);
  }
  template <typename WorkGroupT = Aws::String>
  StartSessionRequest& WithWorkGroup(WorkGroupT&& value) {
    SetWorkGroup(std::forward<WorkGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains engine data processing unit (DPU) configuration settings and
   * parameter mappings.</p>
   */
  inline const EngineConfiguration& GetEngineConfiguration() const { return m_engineConfiguration; }
  inline bool EngineConfigurationHasBeenSet() const { return m_engineConfigurationHasBeenSet; }
  template <typename EngineConfigurationT = EngineConfiguration>
  void SetEngineConfiguration(EngineConfigurationT&& value) {
    m_engineConfigurationHasBeenSet = true;
    m_engineConfiguration = std::forward<EngineConfigurationT>(value);
  }
  template <typename EngineConfigurationT = EngineConfiguration>
  StartSessionRequest& WithEngineConfiguration(EngineConfigurationT&& value) {
    SetEngineConfiguration(std::forward<EngineConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the execution role used to access user resources for Spark
   * sessions and Identity Center enabled workgroups. This property applies only to
   * Spark enabled workgroups and Identity Center enabled workgroups.</p>
   */
  inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
  inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
  template <typename ExecutionRoleT = Aws::String>
  void SetExecutionRole(ExecutionRoleT&& value) {
    m_executionRoleHasBeenSet = true;
    m_executionRole = std::forward<ExecutionRoleT>(value);
  }
  template <typename ExecutionRoleT = Aws::String>
  StartSessionRequest& WithExecutionRole(ExecutionRoleT&& value) {
    SetExecutionRole(std::forward<ExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the configuration settings for managed log persistence, delivering
   * logs to Amazon S3 buckets, Amazon CloudWatch log groups etc.</p>
   */
  inline const MonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
  inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
  template <typename MonitoringConfigurationT = MonitoringConfiguration>
  void SetMonitoringConfiguration(MonitoringConfigurationT&& value) {
    m_monitoringConfigurationHasBeenSet = true;
    m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value);
  }
  template <typename MonitoringConfigurationT = MonitoringConfiguration>
  StartSessionRequest& WithMonitoringConfiguration(MonitoringConfigurationT&& value) {
    SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The notebook version. This value is supplied automatically for notebook
   * sessions in the Athena console and is not required for programmatic session
   * access. The only valid notebook version is <code>Athena notebook version
   * 1</code>. If you specify a value for <code>NotebookVersion</code>, you must also
   * specify a value for <code>NotebookId</code>. See
   * <a>EngineConfiguration$AdditionalConfigs</a>.</p>
   */
  inline const Aws::String& GetNotebookVersion() const { return m_notebookVersion; }
  inline bool NotebookVersionHasBeenSet() const { return m_notebookVersionHasBeenSet; }
  template <typename NotebookVersionT = Aws::String>
  void SetNotebookVersion(NotebookVersionT&& value) {
    m_notebookVersionHasBeenSet = true;
    m_notebookVersion = std::forward<NotebookVersionT>(value);
  }
  template <typename NotebookVersionT = Aws::String>
  StartSessionRequest& WithNotebookVersion(NotebookVersionT&& value) {
    SetNotebookVersion(std::forward<NotebookVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle timeout in minutes for the session.</p>
   */
  inline int GetSessionIdleTimeoutInMinutes() const { return m_sessionIdleTimeoutInMinutes; }
  inline bool SessionIdleTimeoutInMinutesHasBeenSet() const { return m_sessionIdleTimeoutInMinutesHasBeenSet; }
  inline void SetSessionIdleTimeoutInMinutes(int value) {
    m_sessionIdleTimeoutInMinutesHasBeenSet = true;
    m_sessionIdleTimeoutInMinutes = value;
  }
  inline StartSessionRequest& WithSessionIdleTimeoutInMinutes(int value) {
    SetSessionIdleTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique case-sensitive string used to ensure the request to create the
   * session is idempotent (executes only once). If another
   * <code>StartSessionRequest</code> is received, the same response is returned and
   * another session is not created. If a parameter has changed, an error is
   * returned.</p>  <p>This token is listed as not required because Amazon
   * Web Services SDKs (for example the Amazon Web Services SDK for Java)
   * auto-generate the token for users. If you are not using the Amazon Web Services
   * SDK or the Amazon Web Services CLI, you must provide this token or the action
   * will fail.</p>
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
   * <p>A list of comma separated tags to add to the session that is created.</p>
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

  ///@{
  /**
   * <p>Copies the tags from the Workgroup to the Session when.</p>
   */
  inline bool GetCopyWorkGroupTags() const { return m_copyWorkGroupTags; }
  inline bool CopyWorkGroupTagsHasBeenSet() const { return m_copyWorkGroupTagsHasBeenSet; }
  inline void SetCopyWorkGroupTags(bool value) {
    m_copyWorkGroupTagsHasBeenSet = true;
    m_copyWorkGroupTags = value;
  }
  inline StartSessionRequest& WithCopyWorkGroupTags(bool value) {
    SetCopyWorkGroupTags(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_workGroup;

  EngineConfiguration m_engineConfiguration;

  Aws::String m_executionRole;

  MonitoringConfiguration m_monitoringConfiguration;

  Aws::String m_notebookVersion;

  int m_sessionIdleTimeoutInMinutes{0};

  Aws::String m_clientRequestToken;

  Aws::Vector<Tag> m_tags;

  bool m_copyWorkGroupTags{false};
  bool m_descriptionHasBeenSet = false;
  bool m_workGroupHasBeenSet = false;
  bool m_engineConfigurationHasBeenSet = false;
  bool m_executionRoleHasBeenSet = false;
  bool m_monitoringConfigurationHasBeenSet = false;
  bool m_notebookVersionHasBeenSet = false;
  bool m_sessionIdleTimeoutInMinutesHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_copyWorkGroupTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
