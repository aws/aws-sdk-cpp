/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API PutFunctionConcurrencyRequest : public LambdaRequest
  {
  public:
    PutFunctionConcurrencyRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFunctionConcurrency"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline PutFunctionConcurrencyRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline PutFunctionConcurrencyRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function you are setting concurrent execution limits on. For
     * more information, see <a>concurrent-executions</a>.</p>
     */
    inline PutFunctionConcurrencyRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The concurrent execution limit reserved for this function. For more
     * information, see <a>concurrent-executions</a>.</p>
     */
    inline int GetReservedConcurrentExecutions() const{ return m_reservedConcurrentExecutions; }

    /**
     * <p>The concurrent execution limit reserved for this function. For more
     * information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetReservedConcurrentExecutions(int value) { m_reservedConcurrentExecutionsHasBeenSet = true; m_reservedConcurrentExecutions = value; }

    /**
     * <p>The concurrent execution limit reserved for this function. For more
     * information, see <a>concurrent-executions</a>.</p>
     */
    inline PutFunctionConcurrencyRequest& WithReservedConcurrentExecutions(int value) { SetReservedConcurrentExecutions(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    int m_reservedConcurrentExecutions;
    bool m_reservedConcurrentExecutionsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
