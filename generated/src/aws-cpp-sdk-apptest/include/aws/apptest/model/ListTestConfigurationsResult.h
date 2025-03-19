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
    AWS_APPTEST_API ListTestConfigurationsResult() = default;
    AWS_APPTEST_API ListTestConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test configurations.</p>
     */
    inline const Aws::Vector<TestConfigurationSummary>& GetTestConfigurations() const { return m_testConfigurations; }
    template<typename TestConfigurationsT = Aws::Vector<TestConfigurationSummary>>
    void SetTestConfigurations(TestConfigurationsT&& value) { m_testConfigurationsHasBeenSet = true; m_testConfigurations = std::forward<TestConfigurationsT>(value); }
    template<typename TestConfigurationsT = Aws::Vector<TestConfigurationSummary>>
    ListTestConfigurationsResult& WithTestConfigurations(TestConfigurationsT&& value) { SetTestConfigurations(std::forward<TestConfigurationsT>(value)); return *this;}
    template<typename TestConfigurationsT = TestConfigurationSummary>
    ListTestConfigurationsResult& AddTestConfigurations(TestConfigurationsT&& value) { m_testConfigurationsHasBeenSet = true; m_testConfigurations.emplace_back(std::forward<TestConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token in the test configurations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestConfigurationSummary> m_testConfigurations;
    bool m_testConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
