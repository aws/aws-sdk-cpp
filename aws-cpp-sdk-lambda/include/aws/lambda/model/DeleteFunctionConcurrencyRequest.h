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
  class AWS_LAMBDA_API DeleteFunctionConcurrencyRequest : public LambdaRequest
  {
  public:
    DeleteFunctionConcurrencyRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFunctionConcurrency"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline DeleteFunctionConcurrencyRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline DeleteFunctionConcurrencyRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function you are removing concurrent execution limits from.
     * For more information, see <a>concurrent-executions</a>.</p>
     */
    inline DeleteFunctionConcurrencyRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
