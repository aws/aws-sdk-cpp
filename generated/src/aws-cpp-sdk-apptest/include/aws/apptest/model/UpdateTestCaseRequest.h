/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateTestCaseRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API UpdateTestCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTestCase"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test case ID of the test case.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline UpdateTestCaseRequest& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline UpdateTestCaseRequest& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline UpdateTestCaseRequest& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test case.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateTestCaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateTestCaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateTestCaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The steps of the test case.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline UpdateTestCaseRequest& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}
    inline UpdateTestCaseRequest& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}
    inline UpdateTestCaseRequest& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline UpdateTestCaseRequest& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
