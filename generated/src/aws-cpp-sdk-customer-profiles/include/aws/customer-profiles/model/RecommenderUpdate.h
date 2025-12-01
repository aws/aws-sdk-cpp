/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>
#include <aws/customer-profiles/model/RecommenderStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Contains information about an update operation performed on a
 * recommender.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderUpdate">AWS
 * API Reference</a></p>
 */
class RecommenderUpdate {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderUpdate() = default;
  AWS_CUSTOMERPROFILES_API RecommenderUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated configuration settings applied to the recommender during this
   * update.</p>
   */
  inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
  inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
  template <typename RecommenderConfigT = RecommenderConfig>
  void SetRecommenderConfig(RecommenderConfigT&& value) {
    m_recommenderConfigHasBeenSet = true;
    m_recommenderConfig = std::forward<RecommenderConfigT>(value);
  }
  template <typename RecommenderConfigT = RecommenderConfig>
  RecommenderUpdate& WithRecommenderConfig(RecommenderConfigT&& value) {
    SetRecommenderConfig(std::forward<RecommenderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommender update operation.</p>
   */
  inline RecommenderStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommenderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecommenderUpdate& WithStatus(RecommenderStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this recommender update was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RecommenderUpdate& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender was edited.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  RecommenderUpdate& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the update operation failed, provides the reason for the failure.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  RecommenderUpdate& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  RecommenderConfig m_recommenderConfig;
  bool m_recommenderConfigHasBeenSet = false;

  RecommenderStatus m_status{RecommenderStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_lastUpdatedAtHasBeenSet = false;

  Aws::String m_failureReason;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
