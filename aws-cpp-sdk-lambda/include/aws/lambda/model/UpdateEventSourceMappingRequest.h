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
   * <p/>
   */
  class AWS_LAMBDA_API UpdateEventSourceMappingRequest : public LambdaRequest
  {
  public:
    UpdateEventSourceMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline UpdateEventSourceMappingRequest& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline UpdateEventSourceMappingRequest& WithUUID(Aws::String&& value) { SetUUID(value); return *this;}

    /**
     * <p>The event source mapping identifier.</p>
     */
    inline UpdateEventSourceMappingRequest& WithUUID(const char* value) { SetUUID(value); return *this;}

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline UpdateEventSourceMappingRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline UpdateEventSourceMappingRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function to which you want the stream records sent.</p> <p> You
     * can specify a function name (for example, <code>Thumbnail</code>) or you can
     * specify Amazon Resource Name (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>If you are using versioning, you can
     * also provide a qualified function ARN (ARN that is qualified with function
     * version or alias name as suffix). For more information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>Note that the length
     * constraint applies only to the ARN. If you specify only the function name, it is
     * limited to 64 character in length.</p>
     */
    inline UpdateEventSourceMappingRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Specifies whether AWS Lambda should actively poll the stream or not. If
     * disabled, AWS Lambda will not poll the stream.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether AWS Lambda should actively poll the stream or not. If
     * disabled, AWS Lambda will not poll the stream.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether AWS Lambda should actively poll the stream or not. If
     * disabled, AWS Lambda will not poll the stream.</p>
     */
    inline UpdateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>The maximum number of stream records that can be sent to your Lambda function
     * for a single invocation.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of stream records that can be sent to your Lambda function
     * for a single invocation.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of stream records that can be sent to your Lambda function
     * for a single invocation.</p>
     */
    inline UpdateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}

  private:
    Aws::String m_uUID;
    bool m_uUIDHasBeenSet;
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    int m_batchSize;
    bool m_batchSizeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
