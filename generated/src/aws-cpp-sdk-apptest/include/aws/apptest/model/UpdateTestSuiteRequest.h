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
    AWS_APPTEST_API UpdateTestSuiteRequest() = default;

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
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    UpdateTestSuiteRequest& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test suite.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateTestSuiteRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps for the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const { return m_beforeSteps; }
    inline bool BeforeStepsHasBeenSet() const { return m_beforeStepsHasBeenSet; }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    void SetBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = std::forward<BeforeStepsT>(value); }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    UpdateTestSuiteRequest& WithBeforeSteps(BeforeStepsT&& value) { SetBeforeSteps(std::forward<BeforeStepsT>(value)); return *this;}
    template<typename BeforeStepsT = Step>
    UpdateTestSuiteRequest& AddBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.emplace_back(std::forward<BeforeStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The after steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetAfterSteps() const { return m_afterSteps; }
    inline bool AfterStepsHasBeenSet() const { return m_afterStepsHasBeenSet; }
    template<typename AfterStepsT = Aws::Vector<Step>>
    void SetAfterSteps(AfterStepsT&& value) { m_afterStepsHasBeenSet = true; m_afterSteps = std::forward<AfterStepsT>(value); }
    template<typename AfterStepsT = Aws::Vector<Step>>
    UpdateTestSuiteRequest& WithAfterSteps(AfterStepsT&& value) { SetAfterSteps(std::forward<AfterStepsT>(value)); return *this;}
    template<typename AfterStepsT = Step>
    UpdateTestSuiteRequest& AddAfterSteps(AfterStepsT&& value) { m_afterStepsHasBeenSet = true; m_afterSteps.emplace_back(std::forward<AfterStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The test cases in the test suite.</p>
     */
    inline const TestCases& GetTestCases() const { return m_testCases; }
    inline bool TestCasesHasBeenSet() const { return m_testCasesHasBeenSet; }
    template<typename TestCasesT = TestCases>
    void SetTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases = std::forward<TestCasesT>(value); }
    template<typename TestCasesT = TestCases>
    UpdateTestSuiteRequest& WithTestCases(TestCasesT&& value) { SetTestCases(std::forward<TestCasesT>(value)); return *this;}
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
