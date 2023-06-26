/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DescribeTestExecutionRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTestExecution"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = value; }

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::move(value); }

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline void SetTestExecutionId(const char* value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId.assign(value); }

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline DescribeTestExecutionRequest& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline DescribeTestExecutionRequest& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution Id of the test set execution.</p>
     */
    inline DescribeTestExecutionRequest& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}

  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
