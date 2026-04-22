/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/SessionConfigurationOverrides.h>

#include <utility>

namespace Aws {
namespace EMRServerless {
namespace Model {

/**
 */
class StartSessionRequest : public EMRServerlessRequest {
 public:
  AWS_EMRSERVERLESS_API StartSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

  AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the application on which to start the session.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  StartSessionRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request that completed successfully
   * using the same client token, the server returns the successful response without
   * performing the operation again.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartSessionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role ARN for the session. Amazon EMR Serverless uses this role
   * to access Amazon Web Services resources on your behalf during session
   * execution.</p>
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
  inline const SessionConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
  inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
  template <typename ConfigurationOverridesT = SessionConfigurationOverrides>
  void SetConfigurationOverrides(ConfigurationOverridesT&& value) {
    m_configurationOverridesHasBeenSet = true;
    m_configurationOverrides = std::forward<ConfigurationOverridesT>(value);
  }
  template <typename ConfigurationOverridesT = SessionConfigurationOverrides>
  StartSessionRequest& WithConfigurationOverrides(ConfigurationOverridesT&& value) {
    SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the session.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartSessionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartSessionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle timeout in minutes for the session. After the session remains idle
   * for this duration, Amazon EMR Serverless automatically terminates it.</p>
   */
  inline long long GetIdleTimeoutMinutes() const { return m_idleTimeoutMinutes; }
  inline bool IdleTimeoutMinutesHasBeenSet() const { return m_idleTimeoutMinutesHasBeenSet; }
  inline void SetIdleTimeoutMinutes(long long value) {
    m_idleTimeoutMinutesHasBeenSet = true;
    m_idleTimeoutMinutes = value;
  }
  inline StartSessionRequest& WithIdleTimeoutMinutes(long long value) {
    SetIdleTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional name for the session.</p>
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
 private:
  Aws::String m_applicationId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_executionRoleArn;

  SessionConfigurationOverrides m_configurationOverrides;

  Aws::Map<Aws::String, Aws::String> m_tags;

  long long m_idleTimeoutMinutes{0};

  Aws::String m_name;
  bool m_applicationIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_configurationOverridesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_idleTimeoutMinutesHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
