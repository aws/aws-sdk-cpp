/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccessAnalyzer {
namespace Model {

/**
 * <p>Contains the parameters used to create a policy preview job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyPreviewJobParameters">AWS
 * API Reference</a></p>
 */
class PolicyPreviewJobParameters {
 public:
  AWS_ACCESSANALYZER_API PolicyPreviewJobParameters() = default;
  AWS_ACCESSANALYZER_API PolicyPreviewJobParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API PolicyPreviewJobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start of the CloudTrail event analysis window.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  PolicyPreviewJobParameters& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the CloudTrail event analysis window.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  PolicyPreviewJobParameters& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of policy configurations that were analyzed.</p>
   */
  inline const Aws::Vector<PolicyConfiguration>& GetPolicyConfigurations() const { return m_policyConfigurations; }
  inline bool PolicyConfigurationsHasBeenSet() const { return m_policyConfigurationsHasBeenSet; }
  template <typename PolicyConfigurationsT = Aws::Vector<PolicyConfiguration>>
  void SetPolicyConfigurations(PolicyConfigurationsT&& value) {
    m_policyConfigurationsHasBeenSet = true;
    m_policyConfigurations = std::forward<PolicyConfigurationsT>(value);
  }
  template <typename PolicyConfigurationsT = Aws::Vector<PolicyConfiguration>>
  PolicyPreviewJobParameters& WithPolicyConfigurations(PolicyConfigurationsT&& value) {
    SetPolicyConfigurations(std::forward<PolicyConfigurationsT>(value));
    return *this;
  }
  template <typename PolicyConfigurationsT = PolicyConfiguration>
  PolicyPreviewJobParameters& AddPolicyConfigurations(PolicyConfigurationsT&& value) {
    m_policyConfigurationsHasBeenSet = true;
    m_policyConfigurations.emplace_back(std::forward<PolicyConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<PolicyConfiguration> m_policyConfigurations;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_policyConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
