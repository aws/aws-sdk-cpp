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
  class GetTestCaseRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API GetTestCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestCase"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The request test ID of the test case.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    GetTestCaseRequest& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case version of the test case.</p>
     */
    inline int GetTestCaseVersion() const { return m_testCaseVersion; }
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }
    inline void SetTestCaseVersion(int value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }
    inline GetTestCaseRequest& WithTestCaseVersion(int value) { SetTestCaseVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    int m_testCaseVersion{0};
    bool m_testCaseVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
