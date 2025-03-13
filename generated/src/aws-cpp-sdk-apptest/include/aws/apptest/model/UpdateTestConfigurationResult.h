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
    AWS_APPTEST_API UpdateTestConfigurationResult() = default;
    AWS_APPTEST_API UpdateTestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API UpdateTestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration ID of the test configuration.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const { return m_testConfigurationId; }
    template<typename TestConfigurationIdT = Aws::String>
    void SetTestConfigurationId(TestConfigurationIdT&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::forward<TestConfigurationIdT>(value); }
    template<typename TestConfigurationIdT = Aws::String>
    UpdateTestConfigurationResult& WithTestConfigurationId(TestConfigurationIdT&& value) { SetTestConfigurationId(std::forward<TestConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version of the test configuration.</p>
     */
    inline int GetTestConfigurationVersion() const { return m_testConfigurationVersion; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersionHasBeenSet = true; m_testConfigurationVersion = value; }
    inline UpdateTestConfigurationResult& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTestConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
