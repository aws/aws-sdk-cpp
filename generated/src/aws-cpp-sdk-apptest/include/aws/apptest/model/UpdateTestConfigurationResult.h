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
  class UpdateTestConfigurationResult
  {
  public:
    AWS_APPTEST_API UpdateTestConfigurationResult();
    AWS_APPTEST_API UpdateTestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API UpdateTestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration ID of the test configuration.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const{ return m_testConfigurationId; }
    inline void SetTestConfigurationId(const Aws::String& value) { m_testConfigurationId = value; }
    inline void SetTestConfigurationId(Aws::String&& value) { m_testConfigurationId = std::move(value); }
    inline void SetTestConfigurationId(const char* value) { m_testConfigurationId.assign(value); }
    inline UpdateTestConfigurationResult& WithTestConfigurationId(const Aws::String& value) { SetTestConfigurationId(value); return *this;}
    inline UpdateTestConfigurationResult& WithTestConfigurationId(Aws::String&& value) { SetTestConfigurationId(std::move(value)); return *this;}
    inline UpdateTestConfigurationResult& WithTestConfigurationId(const char* value) { SetTestConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version of the test configuration.</p>
     */
    inline int GetTestConfigurationVersion() const{ return m_testConfigurationVersion; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersion = value; }
    inline UpdateTestConfigurationResult& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTestConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTestConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTestConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;

    int m_testConfigurationVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
