/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/NewRelicRegion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>API key authentication configuration for New Relic service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/NewRelicApiKeyConfig">AWS
 * API Reference</a></p>
 */
class NewRelicApiKeyConfig {
 public:
  AWS_DEVOPSAGENT_API NewRelicApiKeyConfig() = default;
  AWS_DEVOPSAGENT_API NewRelicApiKeyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API NewRelicApiKeyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>New Relic User API Key</p>
   */
  inline const Aws::String& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = Aws::String>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = Aws::String>
  NewRelicApiKeyConfig& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New Relic Account ID</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  NewRelicApiKeyConfig& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New Relic region (US or EU)</p>
   */
  inline NewRelicRegion GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  inline void SetRegion(NewRelicRegion value) {
    m_regionHasBeenSet = true;
    m_region = value;
  }
  inline NewRelicApiKeyConfig& WithRegion(NewRelicRegion value) {
    SetRegion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of monitored APM application IDs in New Relic</p>
   */
  inline const Aws::Vector<Aws::String>& GetApplicationIds() const { return m_applicationIds; }
  inline bool ApplicationIdsHasBeenSet() const { return m_applicationIdsHasBeenSet; }
  template <typename ApplicationIdsT = Aws::Vector<Aws::String>>
  void SetApplicationIds(ApplicationIdsT&& value) {
    m_applicationIdsHasBeenSet = true;
    m_applicationIds = std::forward<ApplicationIdsT>(value);
  }
  template <typename ApplicationIdsT = Aws::Vector<Aws::String>>
  NewRelicApiKeyConfig& WithApplicationIds(ApplicationIdsT&& value) {
    SetApplicationIds(std::forward<ApplicationIdsT>(value));
    return *this;
  }
  template <typename ApplicationIdsT = Aws::String>
  NewRelicApiKeyConfig& AddApplicationIds(ApplicationIdsT&& value) {
    m_applicationIdsHasBeenSet = true;
    m_applicationIds.emplace_back(std::forward<ApplicationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of globally unique IDs for New Relic resources (apps, hosts,
   * services)</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntityGuids() const { return m_entityGuids; }
  inline bool EntityGuidsHasBeenSet() const { return m_entityGuidsHasBeenSet; }
  template <typename EntityGuidsT = Aws::Vector<Aws::String>>
  void SetEntityGuids(EntityGuidsT&& value) {
    m_entityGuidsHasBeenSet = true;
    m_entityGuids = std::forward<EntityGuidsT>(value);
  }
  template <typename EntityGuidsT = Aws::Vector<Aws::String>>
  NewRelicApiKeyConfig& WithEntityGuids(EntityGuidsT&& value) {
    SetEntityGuids(std::forward<EntityGuidsT>(value));
    return *this;
  }
  template <typename EntityGuidsT = Aws::String>
  NewRelicApiKeyConfig& AddEntityGuids(EntityGuidsT&& value) {
    m_entityGuidsHasBeenSet = true;
    m_entityGuids.emplace_back(std::forward<EntityGuidsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of alert policy IDs grouping related conditions</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlertPolicyIds() const { return m_alertPolicyIds; }
  inline bool AlertPolicyIdsHasBeenSet() const { return m_alertPolicyIdsHasBeenSet; }
  template <typename AlertPolicyIdsT = Aws::Vector<Aws::String>>
  void SetAlertPolicyIds(AlertPolicyIdsT&& value) {
    m_alertPolicyIdsHasBeenSet = true;
    m_alertPolicyIds = std::forward<AlertPolicyIdsT>(value);
  }
  template <typename AlertPolicyIdsT = Aws::Vector<Aws::String>>
  NewRelicApiKeyConfig& WithAlertPolicyIds(AlertPolicyIdsT&& value) {
    SetAlertPolicyIds(std::forward<AlertPolicyIdsT>(value));
    return *this;
  }
  template <typename AlertPolicyIdsT = Aws::String>
  NewRelicApiKeyConfig& AddAlertPolicyIds(AlertPolicyIdsT&& value) {
    m_alertPolicyIdsHasBeenSet = true;
    m_alertPolicyIds.emplace_back(std::forward<AlertPolicyIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKey;

  Aws::String m_accountId;

  NewRelicRegion m_region{NewRelicRegion::NOT_SET};

  Aws::Vector<Aws::String> m_applicationIds;

  Aws::Vector<Aws::String> m_entityGuids;

  Aws::Vector<Aws::String> m_alertPolicyIds;
  bool m_apiKeyHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_applicationIdsHasBeenSet = false;
  bool m_entityGuidsHasBeenSet = false;
  bool m_alertPolicyIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
