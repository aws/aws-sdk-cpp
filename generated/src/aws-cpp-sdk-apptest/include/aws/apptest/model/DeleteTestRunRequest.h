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
  class DeleteTestRunRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API DeleteTestRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTestRun"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The run ID of the test run.</p>
     */
    inline const Aws::String& GetTestRunId() const{ return m_testRunId; }
    inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
    inline void SetTestRunId(const Aws::String& value) { m_testRunIdHasBeenSet = true; m_testRunId = value; }
    inline void SetTestRunId(Aws::String&& value) { m_testRunIdHasBeenSet = true; m_testRunId = std::move(value); }
    inline void SetTestRunId(const char* value) { m_testRunIdHasBeenSet = true; m_testRunId.assign(value); }
    inline DeleteTestRunRequest& WithTestRunId(const Aws::String& value) { SetTestRunId(value); return *this;}
    inline DeleteTestRunRequest& WithTestRunId(Aws::String&& value) { SetTestRunId(std::move(value)); return *this;}
    inline DeleteTestRunRequest& WithTestRunId(const char* value) { SetTestRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_testRunId;
    bool m_testRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
