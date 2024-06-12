/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestConfigurationSummary.h>
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
  class ListTestConfigurationsResult
  {
  public:
    AWS_APPTEST_API ListTestConfigurationsResult();
    AWS_APPTEST_API ListTestConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test configurations.</p>
     */
    inline const Aws::Vector<TestConfigurationSummary>& GetTestConfigurations() const{ return m_testConfigurations; }
    inline void SetTestConfigurations(const Aws::Vector<TestConfigurationSummary>& value) { m_testConfigurations = value; }
    inline void SetTestConfigurations(Aws::Vector<TestConfigurationSummary>&& value) { m_testConfigurations = std::move(value); }
    inline ListTestConfigurationsResult& WithTestConfigurations(const Aws::Vector<TestConfigurationSummary>& value) { SetTestConfigurations(value); return *this;}
    inline ListTestConfigurationsResult& WithTestConfigurations(Aws::Vector<TestConfigurationSummary>&& value) { SetTestConfigurations(std::move(value)); return *this;}
    inline ListTestConfigurationsResult& AddTestConfigurations(const TestConfigurationSummary& value) { m_testConfigurations.push_back(value); return *this; }
    inline ListTestConfigurationsResult& AddTestConfigurations(TestConfigurationSummary&& value) { m_testConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token in the test configurations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestConfigurationSummary> m_testConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
