/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/RiskLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains a representative finding for an affected resource. GuardDuty selects
 * one finding for each affected resource, based on severity.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RepresentativeFinding">AWS
 * API Reference</a></p>
 */
class RepresentativeFinding {
 public:
  AWS_GUARDDUTY_API RepresentativeFinding() = default;
  AWS_GUARDDUTY_API RepresentativeFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RepresentativeFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the affected resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  RepresentativeFinding& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the affected resource.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  RepresentativeFinding& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the representative finding.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  RepresentativeFinding& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings for the resource.</p>
   */
  inline long long GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(long long value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline RepresentativeFinding& WithFindingCount(long long value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assessed risk level of the resource. Possible values are
   * <code>Info</code>, <code>Low</code>, <code>Medium</code>, <code>High</code>, and
   * <code>Critical</code>.</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline RepresentativeFinding& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the assessed risk level.</p>
   */
  inline const Aws::String& GetRiskRationale() const { return m_riskRationale; }
  inline bool RiskRationaleHasBeenSet() const { return m_riskRationaleHasBeenSet; }
  template <typename RiskRationaleT = Aws::String>
  void SetRiskRationale(RiskRationaleT&& value) {
    m_riskRationaleHasBeenSet = true;
    m_riskRationale = std::forward<RiskRationaleT>(value);
  }
  template <typename RiskRationaleT = Aws::String>
  RepresentativeFinding& WithRiskRationale(RiskRationaleT&& value) {
    SetRiskRationale(std::forward<RiskRationaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;

  Aws::String m_identifier;

  Aws::String m_findingId;

  long long m_findingCount{0};

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Aws::String m_riskRationale;
  bool m_resourceTypeHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_riskRationaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
