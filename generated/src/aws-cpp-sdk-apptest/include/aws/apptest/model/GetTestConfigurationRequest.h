/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppTest
{
namespace Model
{

  /**
   */
  class GetTestConfigurationRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API GetTestConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestConfiguration"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The request test configuration ID.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const { return m_testConfigurationId; }
    inline bool TestConfigurationIdHasBeenSet() const { return m_testConfigurationIdHasBeenSet; }
    template<typename TestConfigurationIdT = Aws::String>
    void SetTestConfigurationId(TestConfigurationIdT&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::forward<TestConfigurationIdT>(value); }
    template<typename TestConfigurationIdT = Aws::String>
    GetTestConfigurationRequest& WithTestConfigurationId(TestConfigurationIdT&& value) { SetTestConfigurationId(std::forward<TestConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration version.</p>
     */
    inline int GetTestConfigurationVersion() const { return m_testConfigurationVersion; }
    inline bool TestConfigurationVersionHasBeenSet() const { return m_testConfigurationVersionHasBeenSet; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersionHasBeenSet = true; m_testConfigurationVersion = value; }
    inline GetTestConfigurationRequest& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;

    int m_testConfigurationVersion{0};
    bool m_testConfigurationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
