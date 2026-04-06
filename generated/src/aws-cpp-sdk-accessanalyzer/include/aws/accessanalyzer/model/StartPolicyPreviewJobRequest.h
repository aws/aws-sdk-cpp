/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

/**
 */
class StartPolicyPreviewJobRequest : public AccessAnalyzerRequest {
 public:
  AWS_ACCESSANALYZER_API StartPolicyPreviewJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartPolicyPreviewJob"; }

  AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A list of policy configurations to analyze. Currently limited to one
   * configuration per request. Each configuration specifies the job type, target ID,
   * and policy documents to test.</p>
   */
  inline const Aws::Vector<PolicyConfiguration>& GetPolicyConfigurations() const { return m_policyConfigurations; }
  inline bool PolicyConfigurationsHasBeenSet() const { return m_policyConfigurationsHasBeenSet; }
  template <typename PolicyConfigurationsT = Aws::Vector<PolicyConfiguration>>
  void SetPolicyConfigurations(PolicyConfigurationsT&& value) {
    m_policyConfigurationsHasBeenSet = true;
    m_policyConfigurations = std::forward<PolicyConfigurationsT>(value);
  }
  template <typename PolicyConfigurationsT = Aws::Vector<PolicyConfiguration>>
  StartPolicyPreviewJobRequest& WithPolicyConfigurations(PolicyConfigurationsT&& value) {
    SetPolicyConfigurations(std::forward<PolicyConfigurationsT>(value));
    return *this;
  }
  template <typename PolicyConfigurationsT = PolicyConfiguration>
  StartPolicyPreviewJobRequest& AddPolicyConfigurations(PolicyConfigurationsT&& value) {
    m_policyConfigurationsHasBeenSet = true;
    m_policyConfigurations.emplace_back(std::forward<PolicyConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the CloudTrail event analysis window. The analysis will evaluate
   * events from this time forward.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  StartPolicyPreviewJobRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the analysis window. If not specified, defaults to the time of the
   * request. The analysis will evaluate CloudTrail events up to this time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  StartPolicyPreviewJobRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI where the completed analysis report will be stored. The
   * Amazon S3 bucket must grant access to the IAM Access Analyzer service principal
   * in its resource policy. The report will be stored at the path:
   * <code>outputS3Uri/jobId/timestamp/</code>.</p>
   */
  inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
  inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
  template <typename OutputS3UriT = Aws::String>
  void SetOutputS3Uri(OutputS3UriT&& value) {
    m_outputS3UriHasBeenSet = true;
    m_outputS3Uri = std::forward<OutputS3UriT>(value);
  }
  template <typename OutputS3UriT = Aws::String>
  StartPolicyPreviewJobRequest& WithOutputS3Uri(OutputS3UriT&& value) {
    SetOutputS3Uri(std::forward<OutputS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, subsequent retries with the same client token return the result
   * from the original successful request and have no additional effect.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartPolicyPreviewJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PolicyConfiguration> m_policyConfigurations;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_outputS3Uri;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_policyConfigurationsHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_outputS3UriHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
