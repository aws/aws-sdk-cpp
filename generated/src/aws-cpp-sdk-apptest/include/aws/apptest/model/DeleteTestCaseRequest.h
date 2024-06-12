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
  class DeleteTestCaseRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API DeleteTestCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTestCase"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test case ID of the test case.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline DeleteTestCaseRequest& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline DeleteTestCaseRequest& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline DeleteTestCaseRequest& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
