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
  class AWS_LAMBDA_API DeleteAliasRequest : public LambdaRequest
  {
  public:
    DeleteAliasRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline DeleteAliasRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline DeleteAliasRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function name for which the alias is created. Deleting an alias
     * does not delete the function version to which it is pointing.</p>
     */
    inline DeleteAliasRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline DeleteAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline DeleteAliasRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the alias to delete.</p>
     */
    inline DeleteAliasRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
