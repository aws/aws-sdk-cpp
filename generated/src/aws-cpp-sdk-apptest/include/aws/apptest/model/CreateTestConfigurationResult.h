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
  class CreateTestConfigurationResult
  {
  public:
    AWS_APPTEST_API CreateTestConfigurationResult() = default;
    AWS_APPTEST_API CreateTestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API CreateTestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test configuration ID.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const { return m_testConfigurationId; }
    template<typename TestConfigurationIdT = Aws::String>
    void SetTestConfigurationId(TestConfigurationIdT&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::forward<TestConfigurationIdT>(value); }
    template<typename TestConfigurationIdT = Aws::String>
    CreateTestConfigurationResult& WithTestConfigurationId(TestConfigurationIdT&& value) { SetTestConfigurationId(std::forward<TestConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration version.</p>
     */
    inline int GetTestConfigurationVersion() const { return m_testConfigurationVersion; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersionHasBeenSet = true; m_testConfigurationVersion = value; }
    inline CreateTestConfigurationResult& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTestConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;

    int m_testConfigurationVersion{0};
    bool m_testConfigurationVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
