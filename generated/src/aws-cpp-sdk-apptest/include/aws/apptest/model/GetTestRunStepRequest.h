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
    AWS_APPTEST_API GetTestRunStepRequest();

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
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunIdHasBeenSet = true; m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunIdHasBeenSet = true; m_testRunId.assign(value); }
    inline GetTestRunStepRequest& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline GetTestRunStepRequest& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline GetTestRunStepRequest& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name of the test run step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline GetTestRunStepRequest& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline GetTestRunStepRequest& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline GetTestRunStepRequest& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case ID of a test run step.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline GetTestRunStepRequest& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline GetTestRunStepRequest& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline GetTestRunStepRequest& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite ID of a test run step.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline GetTestRunStepRequest& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline GetTestRunStepRequest& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline GetTestRunStepRequest& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
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
