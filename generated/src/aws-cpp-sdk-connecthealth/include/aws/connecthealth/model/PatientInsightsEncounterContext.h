/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Details for an encounter</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/PatientInsightsEncounterContext">AWS
 * API Reference</a></p>
 */
class PatientInsightsEncounterContext {
 public:
  AWS_CONNECTHEALTH_API PatientInsightsEncounterContext() = default;
  AWS_CONNECTHEALTH_API PatientInsightsEncounterContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API PatientInsightsEncounterContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Chief complaint for the visit</p>
   */
  inline const Aws::String& GetEncounterReason() const { return m_encounterReason; }
  inline bool EncounterReasonHasBeenSet() const { return m_encounterReasonHasBeenSet; }
  template <typename EncounterReasonT = Aws::String>
  void SetEncounterReason(EncounterReasonT&& value) {
    m_encounterReasonHasBeenSet = true;
    m_encounterReason = std::forward<EncounterReasonT>(value);
  }
  template <typename EncounterReasonT = Aws::String>
  PatientInsightsEncounterContext& WithEncounterReason(EncounterReasonT&& value) {
    SetEncounterReason(std::forward<EncounterReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_encounterReason;
  bool m_encounterReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
