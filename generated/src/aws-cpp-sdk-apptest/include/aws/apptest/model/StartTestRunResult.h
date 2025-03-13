/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestRunStatus.h>
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
  class StartTestRunResult
  {
  public:
    AWS_APPTEST_API StartTestRunResult() = default;
    AWS_APPTEST_API StartTestRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API StartTestRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test run ID of the test run.</p>
     */
    inline const Aws::String& GetTestRunId() const { return m_testRunId; }
    template<typename TestRunIdT = Aws::String>
    void SetTestRunId(TestRunIdT&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::forward<TestRunIdT>(value); }
    template<typename TestRunIdT = Aws::String>
    StartTestRunResult& WithTestRunId(TestRunIdT&& value) { SetTestRunId(std::forward<TestRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run status of the test run.</p>
     */
    inline TestRunStatus GetTestRunStatus() const { return m_testRunStatus; }
    inline void SetTestRunStatus(TestRunStatus value) { m_testRunStatusHasBeenSet = true; m_testRunStatus = value; }
    inline StartTestRunResult& WithTestRunStatus(TestRunStatus value) { SetTestRunStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTestRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;

    TestRunStatus m_testRunStatus{TestRunStatus::NOT_SET};
    bool m_testRunStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
