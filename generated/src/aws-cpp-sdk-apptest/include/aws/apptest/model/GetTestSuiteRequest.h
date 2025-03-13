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
  class GetTestSuiteRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API GetTestSuiteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestSuite"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    GetTestSuiteRequest& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the test suite.</p>
     */
    inline int GetTestSuiteVersion() const { return m_testSuiteVersion; }
    inline bool TestSuiteVersionHasBeenSet() const { return m_testSuiteVersionHasBeenSet; }
    inline void SetTestSuiteVersion(int value) { m_testSuiteVersionHasBeenSet = true; m_testSuiteVersion = value; }
    inline GetTestSuiteRequest& WithTestSuiteVersion(int value) { SetTestSuiteVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    int m_testSuiteVersion{0};
    bool m_testSuiteVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
