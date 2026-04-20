/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/CheckType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {

/**
 * <p>A check on a connector to identify connectivity health.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ConnectorCheck">AWS
 * API Reference</a></p>
 */
class ConnectorCheck {
 public:
  AWS_EVS_API ConnectorCheck() = default;
  AWS_EVS_API ConnectorCheck(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API ConnectorCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The check type.</p>
   */
  inline CheckType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CheckType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ConnectorCheck& WithType(CheckType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The check result.</p>
   */
  inline CheckResult GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  inline void SetResult(CheckResult value) {
    m_resultHasBeenSet = true;
    m_result = value;
  }
  inline ConnectorCheck& WithResult(CheckResult value) {
    SetResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last check attempt.</p>
   */
  inline const Aws::Utils::DateTime& GetLastCheckAttempt() const { return m_lastCheckAttempt; }
  inline bool LastCheckAttemptHasBeenSet() const { return m_lastCheckAttemptHasBeenSet; }
  template <typename LastCheckAttemptT = Aws::Utils::DateTime>
  void SetLastCheckAttempt(LastCheckAttemptT&& value) {
    m_lastCheckAttemptHasBeenSet = true;
    m_lastCheckAttempt = std::forward<LastCheckAttemptT>(value);
  }
  template <typename LastCheckAttemptT = Aws::Utils::DateTime>
  ConnectorCheck& WithLastCheckAttempt(LastCheckAttemptT&& value) {
    SetLastCheckAttempt(std::forward<LastCheckAttemptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when connector health began to be impaired.</p>
   */
  inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
  inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  void SetImpairedSince(ImpairedSinceT&& value) {
    m_impairedSinceHasBeenSet = true;
    m_impairedSince = std::forward<ImpairedSinceT>(value);
  }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  ConnectorCheck& WithImpairedSince(ImpairedSinceT&& value) {
    SetImpairedSince(std::forward<ImpairedSinceT>(value));
    return *this;
  }
  ///@}
 private:
  CheckType m_type{CheckType::NOT_SET};

  CheckResult m_result{CheckResult::NOT_SET};

  Aws::Utils::DateTime m_lastCheckAttempt{};

  Aws::Utils::DateTime m_impairedSince{};
  bool m_typeHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_lastCheckAttemptHasBeenSet = false;
  bool m_impairedSinceHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
