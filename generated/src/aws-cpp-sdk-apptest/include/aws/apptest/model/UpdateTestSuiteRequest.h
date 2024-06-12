/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/TestCases.h>
#include <aws/apptest/model/Step.h>
#include <utility>

namespace Aws
{
namespace AppTest
{
namespace Model
{

  /**
   */
  class UpdateTestSuiteRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API UpdateTestSuiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTestSuite"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test suite ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline UpdateTestSuiteRequest& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline UpdateTestSuiteRequest& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline UpdateTestSuiteRequest& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test suite.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateTestSuiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateTestSuiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateTestSuiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps for the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const{ return m_beforeSteps; }
    inline bool BeforeStepsHasBeenSet() const { return m_beforeStepsHasBeenSet; }
    inline void SetBeforeSteps(const Aws::Vector<Step>& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = value; }
    inline void SetBeforeSteps(Aws::Vector<Step>&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = std::move(value); }
    inline UpdateTestSuiteRequest& WithBeforeSteps(const Aws::Vector<Step>& value) { SetBeforeSteps(value); return *this;}
    inline UpdateTestSuiteRequest& WithBeforeSteps(Aws::Vector<Step>&& value) { SetBeforeSteps(std::move(value)); return *this;}
    inline UpdateTestSuiteRequest& AddBeforeSteps(const Step& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.push_back(value); return *this; }
    inline UpdateTestSuiteRequest& AddBeforeSteps(Step&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The after steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetAfterSteps() const{ return m_afterSteps; }
    inline bool AfterStepsHasBeenSet() const { return m_afterStepsHasBeenSet; }
    inline void SetAfterSteps(const Aws::Vector<Step>& value) { m_afterStepsHasBeenSet = true; m_afterSteps = value; }
    inline void SetAfterSteps(Aws::Vector<Step>&& value) { m_afterStepsHasBeenSet = true; m_afterSteps = std::move(value); }
    inline UpdateTestSuiteRequest& WithAfterSteps(const Aws::Vector<Step>& value) { SetAfterSteps(value); return *this;}
    inline UpdateTestSuiteRequest& WithAfterSteps(Aws::Vector<Step>&& value) { SetAfterSteps(std::move(value)); return *this;}
    inline UpdateTestSuiteRequest& AddAfterSteps(const Step& value) { m_afterStepsHasBeenSet = true; m_afterSteps.push_back(value); return *this; }
    inline UpdateTestSuiteRequest& AddAfterSteps(Step&& value) { m_afterStepsHasBeenSet = true; m_afterSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The test cases in the test suite.</p>
     */
    inline const TestCases& GetTestCases() const{ return m_testCases; }
    inline bool TestCasesHasBeenSet() const { return m_testCasesHasBeenSet; }
    inline void SetTestCases(const TestCases& value) { m_testCasesHasBeenSet = true; m_testCases = value; }
    inline void SetTestCases(TestCases&& value) { m_testCasesHasBeenSet = true; m_testCases = std::move(value); }
    inline UpdateTestSuiteRequest& WithTestCases(const TestCases& value) { SetTestCases(value); return *this;}
    inline UpdateTestSuiteRequest& WithTestCases(TestCases&& value) { SetTestCases(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Step> m_beforeSteps;
    bool m_beforeStepsHasBeenSet = false;

    Aws::Vector<Step> m_afterSteps;
    bool m_afterStepsHasBeenSet = false;

    TestCases m_testCases;
    bool m_testCasesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
