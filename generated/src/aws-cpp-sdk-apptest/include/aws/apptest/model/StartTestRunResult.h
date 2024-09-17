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
    AWS_APPTEST_API StartTestRunResult();
    AWS_APPTEST_API StartTestRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API StartTestRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test run ID of the test run.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunId.assign(value); }
    inline StartTestRunResult& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline StartTestRunResult& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline StartTestRunResult& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run status of the test run.</p>
     */
    inline const TestRunStatus& GetTestRunStatus() const{ return m_testRunStatus; }
    inline void SetTestRunStatus(const TestRunStatus& value) { m_testRunStatus = value; }
    inline void SetTestRunStatus(TestRunStatus&& value) { m_testRunStatus = std::move(value); }
    inline StartTestRunResult& WithTestRunStatus(const TestRunStatus& value) { SetTestRunStatus(value); return *this;}
    inline StartTestRunResult& WithTestRunStatus(TestRunStatus&& value) { SetTestRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartTestRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartTestRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartTestRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;

    TestRunStatus m_testRunStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
