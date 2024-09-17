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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apptest/model/Step.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{

  /**
   */
  class CreateTestSuiteRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API CreateTestSuiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTestSuite"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the test suite.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTestSuiteRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTestSuiteRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateTestSuiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTestSuiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const{ return m_beforeSteps; }
    inline bool BeforeStepsHasBeenSet() const { return m_beforeStepsHasBeenSet; }
    inline void SetBeforeSteps(const Aws::Vector<Step>& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = value; }
    inline void SetBeforeSteps(Aws::Vector<Step>&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = std::move(value); }
    inline CreateTestSuiteRequest& WithBeforeSteps(const Aws::Vector<Step>& value) { SetBeforeSteps(value); return *this;}
    inline CreateTestSuiteRequest& WithBeforeSteps(Aws::Vector<Step>&& value) { SetBeforeSteps(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& AddBeforeSteps(const Step& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.push_back(value); return *this; }
    inline CreateTestSuiteRequest& AddBeforeSteps(Step&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The after steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetAfterSteps() const{ return m_afterSteps; }
    inline bool AfterStepsHasBeenSet() const { return m_afterStepsHasBeenSet; }
    inline void SetAfterSteps(const Aws::Vector<Step>& value) { m_afterStepsHasBeenSet = true; m_afterSteps = value; }
    inline void SetAfterSteps(Aws::Vector<Step>&& value) { m_afterStepsHasBeenSet = true; m_afterSteps = std::move(value); }
    inline CreateTestSuiteRequest& WithAfterSteps(const Aws::Vector<Step>& value) { SetAfterSteps(value); return *this;}
    inline CreateTestSuiteRequest& WithAfterSteps(Aws::Vector<Step>&& value) { SetAfterSteps(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& AddAfterSteps(const Step& value) { m_afterStepsHasBeenSet = true; m_afterSteps.push_back(value); return *this; }
    inline CreateTestSuiteRequest& AddAfterSteps(Step&& value) { m_afterStepsHasBeenSet = true; m_afterSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The test cases in the test suite.</p>
     */
    inline const TestCases& GetTestCases() const{ return m_testCases; }
    inline bool TestCasesHasBeenSet() const { return m_testCasesHasBeenSet; }
    inline void SetTestCases(const TestCases& value) { m_testCasesHasBeenSet = true; m_testCases = value; }
    inline void SetTestCases(TestCases&& value) { m_testCasesHasBeenSet = true; m_testCases = std::move(value); }
    inline CreateTestSuiteRequest& WithTestCases(const TestCases& value) { SetTestCases(value); return *this;}
    inline CreateTestSuiteRequest& WithTestCases(TestCases&& value) { SetTestCases(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token of the test suite.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTestSuiteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTestSuiteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the test suite.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTestSuiteRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateTestSuiteRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTestSuiteRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateTestSuiteRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTestSuiteRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTestSuiteRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTestSuiteRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTestSuiteRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTestSuiteRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Step> m_beforeSteps;
    bool m_beforeStepsHasBeenSet = false;

    Aws::Vector<Step> m_afterSteps;
    bool m_afterStepsHasBeenSet = false;

    TestCases m_testCases;
    bool m_testCasesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
