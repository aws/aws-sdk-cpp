/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/FoundationModelLifecycleStatus.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Details about whether a model version is available or
 * deprecated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/FoundationModelLifecycle">AWS
 * API Reference</a></p>
 */
class FoundationModelLifecycle {
 public:
  AWS_BEDROCK_API FoundationModelLifecycle() = default;
  AWS_BEDROCK_API FoundationModelLifecycle(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API FoundationModelLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
   * deprecated (<code>LEGACY</code>.</p>
   */
  inline FoundationModelLifecycleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FoundationModelLifecycleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FoundationModelLifecycle& WithStatus(FoundationModelLifecycleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Launch time when the model first becomes available</p>
   */
  inline const Aws::Utils::DateTime& GetStartOfLifeTime() const { return m_startOfLifeTime; }
  inline bool StartOfLifeTimeHasBeenSet() const { return m_startOfLifeTimeHasBeenSet; }
  template <typename StartOfLifeTimeT = Aws::Utils::DateTime>
  void SetStartOfLifeTime(StartOfLifeTimeT&& value) {
    m_startOfLifeTimeHasBeenSet = true;
    m_startOfLifeTime = std::forward<StartOfLifeTimeT>(value);
  }
  template <typename StartOfLifeTimeT = Aws::Utils::DateTime>
  FoundationModelLifecycle& WithStartOfLifeTime(StartOfLifeTimeT&& value) {
    SetStartOfLifeTime(std::forward<StartOfLifeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time when the model is no longer available for use</p>
   */
  inline const Aws::Utils::DateTime& GetEndOfLifeTime() const { return m_endOfLifeTime; }
  inline bool EndOfLifeTimeHasBeenSet() const { return m_endOfLifeTimeHasBeenSet; }
  template <typename EndOfLifeTimeT = Aws::Utils::DateTime>
  void SetEndOfLifeTime(EndOfLifeTimeT&& value) {
    m_endOfLifeTimeHasBeenSet = true;
    m_endOfLifeTime = std::forward<EndOfLifeTimeT>(value);
  }
  template <typename EndOfLifeTimeT = Aws::Utils::DateTime>
  FoundationModelLifecycle& WithEndOfLifeTime(EndOfLifeTimeT&& value) {
    SetEndOfLifeTime(std::forward<EndOfLifeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time when the model enters legacy state. Models in legacy state can still be
   * used, but users should plan to transition to an Active model before the end of
   * life time</p>
   */
  inline const Aws::Utils::DateTime& GetLegacyTime() const { return m_legacyTime; }
  inline bool LegacyTimeHasBeenSet() const { return m_legacyTimeHasBeenSet; }
  template <typename LegacyTimeT = Aws::Utils::DateTime>
  void SetLegacyTime(LegacyTimeT&& value) {
    m_legacyTimeHasBeenSet = true;
    m_legacyTime = std::forward<LegacyTimeT>(value);
  }
  template <typename LegacyTimeT = Aws::Utils::DateTime>
  FoundationModelLifecycle& WithLegacyTime(LegacyTimeT&& value) {
    SetLegacyTime(std::forward<LegacyTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Public extended access portion of the legacy period, when users should expect
   * higher pricing</p>
   */
  inline const Aws::Utils::DateTime& GetPublicExtendedAccessTime() const { return m_publicExtendedAccessTime; }
  inline bool PublicExtendedAccessTimeHasBeenSet() const { return m_publicExtendedAccessTimeHasBeenSet; }
  template <typename PublicExtendedAccessTimeT = Aws::Utils::DateTime>
  void SetPublicExtendedAccessTime(PublicExtendedAccessTimeT&& value) {
    m_publicExtendedAccessTimeHasBeenSet = true;
    m_publicExtendedAccessTime = std::forward<PublicExtendedAccessTimeT>(value);
  }
  template <typename PublicExtendedAccessTimeT = Aws::Utils::DateTime>
  FoundationModelLifecycle& WithPublicExtendedAccessTime(PublicExtendedAccessTimeT&& value) {
    SetPublicExtendedAccessTime(std::forward<PublicExtendedAccessTimeT>(value));
    return *this;
  }
  ///@}
 private:
  FoundationModelLifecycleStatus m_status{FoundationModelLifecycleStatus::NOT_SET};

  Aws::Utils::DateTime m_startOfLifeTime{};

  Aws::Utils::DateTime m_endOfLifeTime{};

  Aws::Utils::DateTime m_legacyTime{};

  Aws::Utils::DateTime m_publicExtendedAccessTime{};
  bool m_statusHasBeenSet = false;
  bool m_startOfLifeTimeHasBeenSet = false;
  bool m_endOfLifeTimeHasBeenSet = false;
  bool m_legacyTimeHasBeenSet = false;
  bool m_publicExtendedAccessTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
