/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CapacityProviderStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A summary of a capacity provider, as returned by
 * <code>ListCapacityProviders</code>. Each summary includes the capacity provider
 * identifier, Amazon Resource Name (ARN), name, status, and last-updated
 * timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CapacityProviderSummary">AWS
 * API Reference</a></p>
 */
class CapacityProviderSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderId() const { return m_capacityProviderId; }
  inline bool CapacityProviderIdHasBeenSet() const { return m_capacityProviderIdHasBeenSet; }
  template <typename CapacityProviderIdT = Aws::String>
  void SetCapacityProviderId(CapacityProviderIdT&& value) {
    m_capacityProviderIdHasBeenSet = true;
    m_capacityProviderId = std::forward<CapacityProviderIdT>(value);
  }
  template <typename CapacityProviderIdT = Aws::String>
  CapacityProviderSummary& WithCapacityProviderId(CapacityProviderIdT&& value) {
    SetCapacityProviderId(std::forward<CapacityProviderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  CapacityProviderSummary& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the capacity provider.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CapacityProviderSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capacity provider. For possible values, see
   * <code>CapacityProviderStatus</code>.</p>
   */
  inline CapacityProviderStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapacityProviderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CapacityProviderSummary& WithStatus(CapacityProviderStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the capacity provider was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  CapacityProviderSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderId;

  Aws::String m_capacityProviderArn;

  Aws::String m_name;

  CapacityProviderStatus m_status{CapacityProviderStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_capacityProviderIdHasBeenSet = false;
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
