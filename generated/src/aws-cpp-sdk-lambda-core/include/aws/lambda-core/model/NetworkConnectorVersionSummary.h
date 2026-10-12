/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>
#include <aws/lambda-core/model/NetworkConnectorStateReasonCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>Summary information about a single version of a network connector returned by
 * <code>ListNetworkConnectorVersions</code>. Each configuration update creates a
 * new immutable version; this shape describes one such version. To retrieve the
 * full configuration of a version, call <code>GetNetworkConnector</code> with a
 * version-qualified identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/NetworkConnectorVersionSummary">AWS
 * API Reference</a></p>
 */
class NetworkConnectorVersionSummary {
 public:
  AWS_LAMBDACORE_API NetworkConnectorVersionSummary() = default;
  AWS_LAMBDACORE_API NetworkConnectorVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API NetworkConnectorVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unqualified ARN of the network connector that this version belongs
   * to.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  NetworkConnectorVersionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The qualified ARN of this connector version, including the immutable version
   * suffix.</p>
   */
  inline const Aws::String& GetVersionArn() const { return m_versionArn; }
  inline bool VersionArnHasBeenSet() const { return m_versionArnHasBeenSet; }
  template <typename VersionArnT = Aws::String>
  void SetVersionArn(VersionArnT&& value) {
    m_versionArnHasBeenSet = true;
    m_versionArn = std::forward<VersionArnT>(value);
  }
  template <typename VersionArnT = Aws::String>
  NetworkConnectorVersionSummary& WithVersionArn(VersionArnT&& value) {
    SetVersionArn(std::forward<VersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the network connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NetworkConnectorVersionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network connector.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NetworkConnectorVersionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of this connector version.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline NetworkConnectorVersionSummary& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of this connector version.</p>
   */
  inline NetworkConnectorState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(NetworkConnectorState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline NetworkConnectorVersionSummary& WithState(NetworkConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current state, populated when the state
   * is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  NetworkConnectorVersionSummary& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A machine-readable code indicating the reason for the current state. Use this
   * for programmatic error handling.</p>
   */
  inline NetworkConnectorStateReasonCode GetStateReasonCode() const { return m_stateReasonCode; }
  inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }
  inline void SetStateReasonCode(NetworkConnectorStateReasonCode value) {
    m_stateReasonCodeHasBeenSet = true;
    m_stateReasonCode = value;
  }
  inline NetworkConnectorVersionSummary& WithStateReasonCode(NetworkConnectorStateReasonCode value) {
    SetStateReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this connector version was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  NetworkConnectorVersionSummary& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_versionArn;

  Aws::String m_name;

  Aws::String m_id;

  long long m_version{0};

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  Aws::String m_stateReason;

  NetworkConnectorStateReasonCode m_stateReasonCode{NetworkConnectorStateReasonCode::NOT_SET};

  Aws::Utils::DateTime m_lastModified{};
  bool m_arnHasBeenSet = false;
  bool m_versionArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_stateReasonCodeHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
