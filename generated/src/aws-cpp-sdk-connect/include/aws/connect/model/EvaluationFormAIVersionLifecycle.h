/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAIVersionStatus.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains the status and availability dates for an AI version, indicating when
 * the version became active and when it reaches end of life.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormAIVersionLifecycle">AWS
 * API Reference</a></p>
 */
class EvaluationFormAIVersionLifecycle {
 public:
  AWS_CONNECT_API EvaluationFormAIVersionLifecycle() = default;
  AWS_CONNECT_API EvaluationFormAIVersionLifecycle(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormAIVersionLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the AI version. Valid values:</p> <ul> <li> <p>
   * <code>Latest</code> - The most recent AI version.</p> </li> <li> <p>
   * <code>Preview</code> - An AI version available for preview.</p> </li> <li> <p>
   * <code>Active</code> - An AI version that is currently available.</p> </li> <li>
   * <p> <code>Deprecated</code> - An AI version that is no longer recommended for
   * use.</p> </li> <li> <p> <code>Removed</code> - An AI version that is no longer
   * available.</p> </li> </ul>
   */
  inline EvaluationFormAIVersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationFormAIVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationFormAIVersionLifecycle& WithStatus(EvaluationFormAIVersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when this AI version became available.</p>
   */
  inline const Aws::Utils::DateTime& GetStartOfLifeTime() const { return m_startOfLifeTime; }
  inline bool StartOfLifeTimeHasBeenSet() const { return m_startOfLifeTimeHasBeenSet; }
  template <typename StartOfLifeTimeT = Aws::Utils::DateTime>
  void SetStartOfLifeTime(StartOfLifeTimeT&& value) {
    m_startOfLifeTimeHasBeenSet = true;
    m_startOfLifeTime = std::forward<StartOfLifeTimeT>(value);
  }
  template <typename StartOfLifeTimeT = Aws::Utils::DateTime>
  EvaluationFormAIVersionLifecycle& WithStartOfLifeTime(StartOfLifeTimeT&& value) {
    SetStartOfLifeTime(std::forward<StartOfLifeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this AI version reaches or reached end of life.</p>
   */
  inline const Aws::Utils::DateTime& GetEndOfLifeTime() const { return m_endOfLifeTime; }
  inline bool EndOfLifeTimeHasBeenSet() const { return m_endOfLifeTimeHasBeenSet; }
  template <typename EndOfLifeTimeT = Aws::Utils::DateTime>
  void SetEndOfLifeTime(EndOfLifeTimeT&& value) {
    m_endOfLifeTimeHasBeenSet = true;
    m_endOfLifeTime = std::forward<EndOfLifeTimeT>(value);
  }
  template <typename EndOfLifeTimeT = Aws::Utils::DateTime>
  EvaluationFormAIVersionLifecycle& WithEndOfLifeTime(EndOfLifeTimeT&& value) {
    SetEndOfLifeTime(std::forward<EndOfLifeTimeT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormAIVersionStatus m_status{EvaluationFormAIVersionStatus::NOT_SET};

  Aws::Utils::DateTime m_startOfLifeTime{};

  Aws::Utils::DateTime m_endOfLifeTime{};
  bool m_statusHasBeenSet = false;
  bool m_startOfLifeTimeHasBeenSet = false;
  bool m_endOfLifeTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
