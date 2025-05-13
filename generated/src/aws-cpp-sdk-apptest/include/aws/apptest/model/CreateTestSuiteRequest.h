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
    AWS_APPTEST_API CreateTestSuiteRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTestSuiteRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateTestSuiteRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const { return m_beforeSteps; }
    inline bool BeforeStepsHasBeenSet() const { return m_beforeStepsHasBeenSet; }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    void SetBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = std::forward<BeforeStepsT>(value); }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    CreateTestSuiteRequest& WithBeforeSteps(BeforeStepsT&& value) { SetBeforeSteps(std::forward<BeforeStepsT>(value)); return *this;}
    template<typename BeforeStepsT = Step>
    CreateTestSuiteRequest& AddBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.emplace_back(std::forward<BeforeStepsT>(value)); return *this; }
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
    CreateTestSuiteRequest& WithAfterSteps(AfterStepsT&& value) { SetAfterSteps(std::forward<AfterStepsT>(value)); return *this;}
    template<typename AfterStepsT = Step>
    CreateTestSuiteRequest& AddAfterSteps(AfterStepsT&& value) { m_afterStepsHasBeenSet = true; m_afterSteps.emplace_back(std::forward<AfterStepsT>(value)); return *this; }
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
    CreateTestSuiteRequest& WithTestCases(TestCasesT&& value) { SetTestCases(std::forward<TestCasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token of the test suite.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTestSuiteRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the test suite.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateTestSuiteRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateTestSuiteRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
