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
namespace AppTest
{
namespace Model
{

  /**
   */
  class DeleteTestSuiteRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API DeleteTestSuiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTestSuite"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test ID of the test suite.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline DeleteTestSuiteRequest& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline DeleteTestSuiteRequest& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline DeleteTestSuiteRequest& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
