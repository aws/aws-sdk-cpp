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
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_LAMBDA_API GetFunctionConfigurationRequest : public LambdaRequest
  {
  public:
    GetFunctionConfigurationRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline GetFunctionConfigurationRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline GetFunctionConfigurationRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function for which you want to retrieve the
     * configuration information.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline GetFunctionConfigurationRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline GetFunctionConfigurationRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline GetFunctionConfigurationRequest& WithQualifier(Aws::String&& value) { SetQualifier(value); return *this;}

    /**
     * <p>Using this optional parameter you can specify a function version or an alias
     * name. If you specify function version, the API uses qualified function ARN and
     * returns information about the specific function version. If you specify an alias
     * name, the API uses the alias ARN and returns information about the function
     * version to which the alias points.</p> <p>If you don't specify this parameter,
     * the API uses unqualified function ARN, and returns information about the
     * <code>$LATEST</code> function version.</p>
     */
    inline GetFunctionConfigurationRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
