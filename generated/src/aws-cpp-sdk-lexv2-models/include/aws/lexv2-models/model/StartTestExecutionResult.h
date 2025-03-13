/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestExecutionTarget.h>
#include <aws/lexv2-models/model/TestExecutionApiMode.h>
#include <aws/lexv2-models/model/TestExecutionModality.h>
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
namespace LexModelsV2
{
namespace Model
{
  class StartTestExecutionResult
  {
  public:
    AWS_LEXMODELSV2_API StartTestExecutionResult() = default;
    AWS_LEXMODELSV2_API StartTestExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartTestExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const { return m_testExecutionId; }
    template<typename TestExecutionIdT = Aws::String>
    void SetTestExecutionId(TestExecutionIdT&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::forward<TestExecutionIdT>(value); }
    template<typename TestExecutionIdT = Aws::String>
    StartTestExecutionResult& WithTestExecutionId(TestExecutionIdT&& value) { SetTestExecutionId(std::forward<TestExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    StartTestExecutionResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    StartTestExecutionResult& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline const TestExecutionTarget& GetTarget() const { return m_target; }
    template<typename TargetT = TestExecutionTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TestExecutionTarget>
    StartTestExecutionResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline TestExecutionApiMode GetApiMode() const { return m_apiMode; }
    inline void SetApiMode(TestExecutionApiMode value) { m_apiModeHasBeenSet = true; m_apiMode = value; }
    inline StartTestExecutionResult& WithApiMode(TestExecutionApiMode value) { SetApiMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline TestExecutionModality GetTestExecutionModality() const { return m_testExecutionModality; }
    inline void SetTestExecutionModality(TestExecutionModality value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }
    inline StartTestExecutionResult& WithTestExecutionModality(TestExecutionModality value) { SetTestExecutionModality(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTestExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    TestExecutionTarget m_target;
    bool m_targetHasBeenSet = false;

    TestExecutionApiMode m_apiMode{TestExecutionApiMode::NOT_SET};
    bool m_apiModeHasBeenSet = false;

    TestExecutionModality m_testExecutionModality{TestExecutionModality::NOT_SET};
    bool m_testExecutionModalityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
