/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CollectorStatus.h>
#include <aws/continuum/model/CollectorType.h>
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
namespace Continuum {
namespace Model {

/**
 * <p>A summary of a Collector returned in list responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CollectorSummary">AWS
 * API Reference</a></p>
 */
class CollectorSummary {
 public:
  AWS_CONTINUUM_API CollectorSummary() = default;
  AWS_CONTINUUM_API CollectorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API CollectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Collector.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  CollectorSummary& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Collector.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  inline bool CollectorArnHasBeenSet() const { return m_collectorArnHasBeenSet; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  CollectorSummary& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source collected by this Collector.</p>
   */
  inline CollectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CollectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CollectorSummary& WithType(CollectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status.</p>
   */
  inline CollectorStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CollectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CollectorSummary& WithStatus(CollectorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Collector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CollectorSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectorId;

  Aws::String m_collectorArn;

  CollectorType m_type{CollectorType::NOT_SET};

  CollectorStatus m_status{CollectorStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_collectorIdHasBeenSet = false;
  bool m_collectorArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
