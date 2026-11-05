/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpgradeConsent.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class StartJobUpgradeAnalysisRequest : public GlueRequest {
 public:
  AWS_GLUE_API StartJobUpgradeAnalysisRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartJobUpgradeAnalysis"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the job associated with the analysis to resume.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  StartJobUpgradeAnalysisRequest& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the upgrade analysis. The analysis must be in
   * <code>WAITING_FOR_CONSENT</code> status.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  StartJobUpgradeAnalysisRequest& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer's decision on whether to proceed with the upgrade.</p>
   */
  inline UpgradeConsent GetUpgradeConsent() const { return m_upgradeConsent; }
  inline bool UpgradeConsentHasBeenSet() const { return m_upgradeConsentHasBeenSet; }
  inline void SetUpgradeConsent(UpgradeConsent value) {
    m_upgradeConsentHasBeenSet = true;
    m_upgradeConsent = value;
  }
  inline StartJobUpgradeAnalysisRequest& WithUpgradeConsent(UpgradeConsent value) {
    SetUpgradeConsent(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobName;

  Aws::String m_analysisId;

  UpgradeConsent m_upgradeConsent{UpgradeConsent::NOT_SET};
  bool m_jobNameHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_upgradeConsentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
