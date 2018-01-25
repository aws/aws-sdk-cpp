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
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermissionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API RemovePermissionRequest : public LambdaRequest
  {
  public:
    RemovePermissionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemovePermission"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline RemovePermissionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline RemovePermissionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>Lambda function whose resource policy you want to remove a permission
     * from.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64
     * characters in length. </p>
     */
    inline RemovePermissionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline RemovePermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline RemovePermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>Statement ID of the permission to remove.</p>
     */
    inline RemovePermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline RemovePermissionRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline RemovePermissionRequest& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>You can specify this optional parameter to remove permission associated with
     * a specific function version or function alias. If you don't specify this
     * parameter, the API removes permission associated with the unqualified function
     * ARN.</p>
     */
    inline RemovePermissionRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}


    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline RemovePermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline RemovePermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either or .</p>
     */
    inline RemovePermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
