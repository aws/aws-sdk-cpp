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
  class CreateTestSuiteResult
  {
  public:
    AWS_APPTEST_API CreateTestSuiteResult();
    AWS_APPTEST_API CreateTestSuiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API CreateTestSuiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The suite ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteId.assign(value); }
    inline CreateTestSuiteResult& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline CreateTestSuiteResult& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline CreateTestSuiteResult& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suite version of the test suite.</p>
     */
    inline int GetTestSuiteVersion() const{ return m_testSuiteVersion; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersion = value; }
    inline CreateTestSuiteResult& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTestSuiteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTestSuiteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTestSuiteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;

    int m_testSuiteVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
