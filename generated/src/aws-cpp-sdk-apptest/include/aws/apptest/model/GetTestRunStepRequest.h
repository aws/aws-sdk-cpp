/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppTest
{
namespace Model
{

  /**
   */
  class GetTestRunStepRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API GetTestRunStepRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestRunStep"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The test run ID of the test run step.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    GetTestRunStepRequest& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name of the test run step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    GetTestRunStepRequest& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of a test run step.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    GetTestRunStepRequest& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of a test run step.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    GetTestRunStepRequest& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
