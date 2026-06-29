/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>The result of an experiment run, including the executive summary and launch
 * decision rationale.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentRunResult">AWS
 * API Reference</a></p>
 */
class ExperimentRunResult {
 public:
  AWS_APPCONFIG_API ExperimentRunResult() = default;
  AWS_APPCONFIG_API ExperimentRunResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API ExperimentRunResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summary of the experiment outcome and key findings.</p>
   */
  inline const Aws::String& GetExecutiveSummary() const { return m_executiveSummary; }
  inline bool ExecutiveSummaryHasBeenSet() const { return m_executiveSummaryHasBeenSet; }
  template <typename ExecutiveSummaryT = Aws::String>
  void SetExecutiveSummary(ExecutiveSummaryT&& value) {
    m_executiveSummaryHasBeenSet = true;
    m_executiveSummary = std::forward<ExecutiveSummaryT>(value);
  }
  template <typename ExecutiveSummaryT = Aws::String>
  ExperimentRunResult& WithExecutiveSummary(ExecutiveSummaryT&& value) {
    SetExecutiveSummary(std::forward<ExecutiveSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evidence in favor of launching the winning treatment.</p>
   */
  inline const Aws::String& GetReasonsToLaunch() const { return m_reasonsToLaunch; }
  inline bool ReasonsToLaunchHasBeenSet() const { return m_reasonsToLaunchHasBeenSet; }
  template <typename ReasonsToLaunchT = Aws::String>
  void SetReasonsToLaunch(ReasonsToLaunchT&& value) {
    m_reasonsToLaunchHasBeenSet = true;
    m_reasonsToLaunch = std::forward<ReasonsToLaunchT>(value);
  }
  template <typename ReasonsToLaunchT = Aws::String>
  ExperimentRunResult& WithReasonsToLaunch(ReasonsToLaunchT&& value) {
    SetReasonsToLaunch(std::forward<ReasonsToLaunchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evidence against launching the treatment.</p>
   */
  inline const Aws::String& GetReasonsNotToLaunch() const { return m_reasonsNotToLaunch; }
  inline bool ReasonsNotToLaunchHasBeenSet() const { return m_reasonsNotToLaunchHasBeenSet; }
  template <typename ReasonsNotToLaunchT = Aws::String>
  void SetReasonsNotToLaunch(ReasonsNotToLaunchT&& value) {
    m_reasonsNotToLaunchHasBeenSet = true;
    m_reasonsNotToLaunch = std::forward<ReasonsNotToLaunchT>(value);
  }
  template <typename ReasonsNotToLaunchT = Aws::String>
  ExperimentRunResult& WithReasonsNotToLaunch(ReasonsNotToLaunchT&& value) {
    SetReasonsNotToLaunch(std::forward<ReasonsNotToLaunchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_executiveSummary;

  Aws::String m_reasonsToLaunch;

  Aws::String m_reasonsNotToLaunch;
  bool m_executiveSummaryHasBeenSet = false;
  bool m_reasonsToLaunchHasBeenSet = false;
  bool m_reasonsNotToLaunchHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
