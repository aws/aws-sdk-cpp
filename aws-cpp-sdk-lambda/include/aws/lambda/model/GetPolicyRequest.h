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
  class AWS_LAMBDA_API GetPolicyRequest : public LambdaRequest
  {
  public:
    GetPolicyRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline GetPolicyRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline GetPolicyRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name whose resource policy you want to retrieve.</p> <p> You can
     * specify the function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline GetPolicyRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline GetPolicyRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline GetPolicyRequest& WithQualifier(Aws::String&& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can specify this optional query parameter to specify a function version
     * or an alias name in which case this API will return all permissions associated
     * with the specific qualified ARN. If you don't provide this parameter, the API
     * will return permissions that apply to the unqualified function ARN.</p>
     */
    inline GetPolicyRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
