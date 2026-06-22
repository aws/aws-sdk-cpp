/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>
#include <aws/lambda-core/model/NetworkConnectorType.h>

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
 * <p>Summary information about a network connector returned by
 * <code>ListNetworkConnectors</code>. Contains identifying fields and current
 * state. To retrieve full configuration details, use
 * <code>GetNetworkConnector</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/NetworkConnectorSummary">AWS
 * API Reference</a></p>
 */
class NetworkConnectorSummary {
 public:
  AWS_LAMBDACORE_API NetworkConnectorSummary() = default;
  AWS_LAMBDACORE_API NetworkConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API NetworkConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the network connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  NetworkConnectorSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  NetworkConnectorSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NetworkConnectorSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the network connector (<code>VPC_EGRESS</code>).</p>
   */
  inline NetworkConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(NetworkConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline NetworkConnectorSummary& WithType(NetworkConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the network connector.</p>
   */
  inline NetworkConnectorState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(NetworkConnectorState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline NetworkConnectorSummary& WithState(NetworkConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the connector was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  NetworkConnectorSummary& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  NetworkConnectorType m_type{NetworkConnectorType::NOT_SET};

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  Aws::Utils::DateTime m_lastModified{};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
