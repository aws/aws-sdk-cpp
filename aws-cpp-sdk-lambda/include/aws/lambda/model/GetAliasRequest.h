/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API GetAliasRequest : public LambdaRequest
  {
  public:
    GetAliasRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline GetAliasRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline GetAliasRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name for which the alias is created. An alias is a subresource that
     * exists only in the context of an existing Lambda function so you must specify
     * the function name.</p>
     */
    inline GetAliasRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline GetAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline GetAliasRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the alias for which you want to retrieve information.</p>
     */
    inline GetAliasRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
