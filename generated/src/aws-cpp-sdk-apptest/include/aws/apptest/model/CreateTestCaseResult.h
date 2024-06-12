/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateTestCaseResult
  {
  public:
    AWS_APPTEST_API CreateTestCaseResult();
    AWS_APPTEST_API CreateTestCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API CreateTestCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test case ID of the test case.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseId.assign(value); }
    inline CreateTestCaseResult& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline CreateTestCaseResult& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline CreateTestCaseResult& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test case.</p>
     */
    inline int GetTestCaseVersion() const{ return m_testCaseVersion; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersion = value; }
    inline CreateTestCaseResult& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTestCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTestCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTestCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;

    int m_testCaseVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
