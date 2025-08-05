/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents a test for validating an Automated Reasoning policy. tests contain
   * sample inputs and expected outcomes to verify policy behavior.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyTestCase">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyTestCase
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyTestCase() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyTestCase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyTestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the test.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    AutomatedReasoningPolicyTestCase& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output content to be validated by the policy, typically representing a
     * foundation model response.</p>
     */
    inline const Aws::String& GetGuardContent() const { return m_guardContent; }
    inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
    template<typename GuardContentT = Aws::String>
    void SetGuardContent(GuardContentT&& value) { m_guardContentHasBeenSet = true; m_guardContent = std::forward<GuardContentT>(value); }
    template<typename GuardContentT = Aws::String>
    AutomatedReasoningPolicyTestCase& WithGuardContent(GuardContentT&& value) { SetGuardContent(std::forward<GuardContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input query or prompt that generated the content. This provides context
     * for the validation.</p>
     */
    inline const Aws::String& GetQueryContent() const { return m_queryContent; }
    inline bool QueryContentHasBeenSet() const { return m_queryContentHasBeenSet; }
    template<typename QueryContentT = Aws::String>
    void SetQueryContent(QueryContentT&& value) { m_queryContentHasBeenSet = true; m_queryContent = std::forward<QueryContentT>(value); }
    template<typename QueryContentT = Aws::String>
    AutomatedReasoningPolicyTestCase& WithQueryContent(QueryContentT&& value) { SetQueryContent(std::forward<QueryContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected result of the Automated Reasoning check for this test.</p>
     */
    inline AutomatedReasoningCheckResult GetExpectedAggregatedFindingsResult() const { return m_expectedAggregatedFindingsResult; }
    inline bool ExpectedAggregatedFindingsResultHasBeenSet() const { return m_expectedAggregatedFindingsResultHasBeenSet; }
    inline void SetExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { m_expectedAggregatedFindingsResultHasBeenSet = true; m_expectedAggregatedFindingsResult = value; }
    inline AutomatedReasoningPolicyTestCase& WithExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { SetExpectedAggregatedFindingsResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the test was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AutomatedReasoningPolicyTestCase& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the test was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AutomatedReasoningPolicyTestCase& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum confidence level for logic validation. Content meeting this
     * threshold is considered high-confidence and can be validated.</p>
     */
    inline double GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline AutomatedReasoningPolicyTestCase& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    Aws::String m_guardContent;
    bool m_guardContentHasBeenSet = false;

    Aws::String m_queryContent;
    bool m_queryContentHasBeenSet = false;

    AutomatedReasoningCheckResult m_expectedAggregatedFindingsResult{AutomatedReasoningCheckResult::NOT_SET};
    bool m_expectedAggregatedFindingsResultHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    double m_confidenceThreshold{0.0};
    bool m_confidenceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
