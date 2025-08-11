/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestCase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestRunStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestRunResult.h>
#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/AutomatedReasoningCheckFinding.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains the results of testing an Automated Reasoning policy against various
   * scenarios and validation checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyTestResult">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyTestResult
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyTestResult() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyTestResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyTestResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test case that was executed, including the input content, expected
     * results, and configuration parameters used during validation.</p>
     */
    inline const AutomatedReasoningPolicyTestCase& GetTestCase() const { return m_testCase; }
    inline bool TestCaseHasBeenSet() const { return m_testCaseHasBeenSet; }
    template<typename TestCaseT = AutomatedReasoningPolicyTestCase>
    void SetTestCase(TestCaseT&& value) { m_testCaseHasBeenSet = true; m_testCase = std::forward<TestCaseT>(value); }
    template<typename TestCaseT = AutomatedReasoningPolicyTestCase>
    AutomatedReasoningPolicyTestResult& WithTestCase(TestCaseT&& value) { SetTestCase(std::forward<TestCaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy that was
     * tested.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    AutomatedReasoningPolicyTestResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the test run (e.g., COMPLETED, FAILED,
     * IN_PROGRESS).</p>
     */
    inline AutomatedReasoningPolicyTestRunStatus GetTestRunStatus() const { return m_testRunStatus; }
    inline bool TestRunStatusHasBeenSet() const { return m_testRunStatusHasBeenSet; }
    inline void SetTestRunStatus(AutomatedReasoningPolicyTestRunStatus value) { m_testRunStatusHasBeenSet = true; m_testRunStatus = value; }
    inline AutomatedReasoningPolicyTestResult& WithTestRunStatus(AutomatedReasoningPolicyTestRunStatus value) { SetTestRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed findings from the test run, including any issues, violations, or
     * unexpected behaviors discovered.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckFinding>& GetTestFindings() const { return m_testFindings; }
    inline bool TestFindingsHasBeenSet() const { return m_testFindingsHasBeenSet; }
    template<typename TestFindingsT = Aws::Vector<AutomatedReasoningCheckFinding>>
    void SetTestFindings(TestFindingsT&& value) { m_testFindingsHasBeenSet = true; m_testFindings = std::forward<TestFindingsT>(value); }
    template<typename TestFindingsT = Aws::Vector<AutomatedReasoningCheckFinding>>
    AutomatedReasoningPolicyTestResult& WithTestFindings(TestFindingsT&& value) { SetTestFindings(std::forward<TestFindingsT>(value)); return *this;}
    template<typename TestFindingsT = AutomatedReasoningCheckFinding>
    AutomatedReasoningPolicyTestResult& AddTestFindings(TestFindingsT&& value) { m_testFindingsHasBeenSet = true; m_testFindings.emplace_back(std::forward<TestFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The overall result of the test run, indicating whether the policy passed or
     * failed validation.</p>
     */
    inline AutomatedReasoningPolicyTestRunResult GetTestRunResult() const { return m_testRunResult; }
    inline bool TestRunResultHasBeenSet() const { return m_testRunResultHasBeenSet; }
    inline void SetTestRunResult(AutomatedReasoningPolicyTestRunResult value) { m_testRunResultHasBeenSet = true; m_testRunResult = value; }
    inline AutomatedReasoningPolicyTestResult& WithTestRunResult(AutomatedReasoningPolicyTestRunResult value) { SetTestRunResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of all test findings, aggregated to provide an overall assessment
     * of policy quality and correctness.</p>
     */
    inline AutomatedReasoningCheckResult GetAggregatedTestFindingsResult() const { return m_aggregatedTestFindingsResult; }
    inline bool AggregatedTestFindingsResultHasBeenSet() const { return m_aggregatedTestFindingsResultHasBeenSet; }
    inline void SetAggregatedTestFindingsResult(AutomatedReasoningCheckResult value) { m_aggregatedTestFindingsResultHasBeenSet = true; m_aggregatedTestFindingsResult = value; }
    inline AutomatedReasoningPolicyTestResult& WithAggregatedTestFindingsResult(AutomatedReasoningCheckResult value) { SetAggregatedTestFindingsResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the test results were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AutomatedReasoningPolicyTestResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyTestCase m_testCase;
    bool m_testCaseHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AutomatedReasoningPolicyTestRunStatus m_testRunStatus{AutomatedReasoningPolicyTestRunStatus::NOT_SET};
    bool m_testRunStatusHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckFinding> m_testFindings;
    bool m_testFindingsHasBeenSet = false;

    AutomatedReasoningPolicyTestRunResult m_testRunResult{AutomatedReasoningPolicyTestRunResult::NOT_SET};
    bool m_testRunResultHasBeenSet = false;

    AutomatedReasoningCheckResult m_aggregatedTestFindingsResult{AutomatedReasoningCheckResult::NOT_SET};
    bool m_aggregatedTestFindingsResultHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
