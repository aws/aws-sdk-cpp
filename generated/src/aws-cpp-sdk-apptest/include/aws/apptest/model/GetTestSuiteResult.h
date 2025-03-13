/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestSuiteLatestVersion.h>
#include <aws/apptest/model/TestSuiteLifecycle.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/TestCases.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apptest/model/Step.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppTest
{
namespace Model
{
  class GetTestSuiteResult
  {
  public:
    AWS_APPTEST_API GetTestSuiteResult() = default;
    AWS_APPTEST_API GetTestSuiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestSuiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    GetTestSuiteResult& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test suite.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTestSuiteResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test suite.</p>
     */
    inline const TestSuiteLatestVersion& GetLatestVersion() const { return m_latestVersion; }
    template<typename LatestVersionT = TestSuiteLatestVersion>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = TestSuiteLatestVersion>
    GetTestSuiteResult& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the test suite.</p>
     */
    inline int GetTestSuiteVersion() const { return m_testSuiteVersion; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline GetTestSuiteResult& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test suite.</p>
     */
    inline TestSuiteLifecycle GetStatus() const { return m_status; }
    inline void SetStatus(TestSuiteLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTestSuiteResult& WithStatus(TestSuiteLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test suite.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetTestSuiteResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetTestSuiteArn() const { return m_testSuiteArn; }
    template<typename TestSuiteArnT = Aws::String>
    void SetTestSuiteArn(TestSuiteArnT&& value) { m_testSuiteArnHasBeenSet = true; m_testSuiteArn = std::forward<TestSuiteArnT>(value); }
    template<typename TestSuiteArnT = Aws::String>
    GetTestSuiteResult& WithTestSuiteArn(TestSuiteArnT&& value) { SetTestSuiteArn(std::forward<TestSuiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test suite.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetTestSuiteResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test suite.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    GetTestSuiteResult& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test suite.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetTestSuiteResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before steps of the test suite.</p>
     */
    inline const Aws::Vector<Step>& GetBeforeSteps() const { return m_beforeSteps; }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    void SetBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps = std::forward<BeforeStepsT>(value); }
    template<typename BeforeStepsT = Aws::Vector<Step>>
    GetTestSuiteResult& WithBeforeSteps(BeforeStepsT&& value) { SetBeforeSteps(std::forward<BeforeStepsT>(value)); return *this;}
    template<typename BeforeStepsT = Step>
    GetTestSuiteResult& AddBeforeSteps(BeforeStepsT&& value) { m_beforeStepsHasBeenSet = true; m_beforeSteps.emplace_back(std::forward<BeforeStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The after steps of the test suite. </p>
     */
    inline const Aws::Vector<Step>& GetAfterSteps() const { return m_afterSteps; }
    template<typename AfterStepsT = Aws::Vector<Step>>
    void SetAfterSteps(AfterStepsT&& value) { m_afterStepsHasBeenSet = true; m_afterSteps = std::forward<AfterStepsT>(value); }
    template<typename AfterStepsT = Aws::Vector<Step>>
    GetTestSuiteResult& WithAfterSteps(AfterStepsT&& value) { SetAfterSteps(std::forward<AfterStepsT>(value)); return *this;}
    template<typename AfterStepsT = Step>
    GetTestSuiteResult& AddAfterSteps(AfterStepsT&& value) { m_afterStepsHasBeenSet = true; m_afterSteps.emplace_back(std::forward<AfterStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The test cases of the test suite.</p>
     */
    inline const TestCases& GetTestCases() const { return m_testCases; }
    template<typename TestCasesT = TestCases>
    void SetTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases = std::forward<TestCasesT>(value); }
    template<typename TestCasesT = TestCases>
    GetTestSuiteResult& WithTestCases(TestCasesT&& value) { SetTestCases(std::forward<TestCasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the test suite.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetTestSuiteResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetTestSuiteResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTestSuiteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TestSuiteLatestVersion m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    int m_testSuiteVersion{0};
    bool m_testSuiteVersionHasBeenSet = false;

    TestSuiteLifecycle m_status{TestSuiteLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_testSuiteArn;
    bool m_testSuiteArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Step> m_beforeSteps;
    bool m_beforeStepsHasBeenSet = false;

    Aws::Vector<Step> m_afterSteps;
    bool m_afterStepsHasBeenSet = false;

    TestCases m_testCases;
    bool m_testCasesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
