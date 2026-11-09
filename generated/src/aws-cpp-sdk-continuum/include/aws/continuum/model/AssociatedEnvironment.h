/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/EnvironmentStatus.h>
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
 * <p>A summary of one Environment associated with a Collector. This shape
 * intentionally remains distinct from EnvironmentSummary so the two list
 * operations can evolve independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/AssociatedEnvironment">AWS
 * API Reference</a></p>
 */
class AssociatedEnvironment {
 public:
  AWS_CONTINUUM_API AssociatedEnvironment() = default;
  AWS_CONTINUUM_API AssociatedEnvironment(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API AssociatedEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the associated Environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  AssociatedEnvironment& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the associated Environment. The account encoded in this ARN
   * identifies cross-account associations; association mutations require its Region
   * to match the Collector's Region.</p>
   */
  inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
  inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
  template <typename EnvironmentArnT = Aws::String>
  void SetEnvironmentArn(EnvironmentArnT&& value) {
    m_environmentArnHasBeenSet = true;
    m_environmentArn = std::forward<EnvironmentArnT>(value);
  }
  template <typename EnvironmentArnT = Aws::String>
  AssociatedEnvironment& WithEnvironmentArn(EnvironmentArnT&& value) {
    SetEnvironmentArn(std::forward<EnvironmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-visible name of the associated Environment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AssociatedEnvironment& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current operational status of the associated Environment.</p>
   */
  inline EnvironmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnvironmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AssociatedEnvironment& WithStatus(EnvironmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the associated Environment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AssociatedEnvironment& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_environmentArn;

  Aws::String m_name;

  EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_environmentIdHasBeenSet = false;
  bool m_environmentArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
