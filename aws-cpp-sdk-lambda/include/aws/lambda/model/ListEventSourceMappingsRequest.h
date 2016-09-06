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
  class AWS_LAMBDA_API ListEventSourceMappingsRequest : public LambdaRequest
  {
  public:
    ListEventSourceMappingsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline ListEventSourceMappingsRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline ListEventSourceMappingsRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream. (This parameter
     * is optional.)</p>
     */
    inline ListEventSourceMappingsRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
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
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
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
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
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
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
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
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline ListEventSourceMappingsRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline ListEventSourceMappingsRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify the function name
     * (for example, <code>Thumbnail</code>) or you can specify Amazon Resource Name
     * (ARN) of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). If you are
     * using versioning, you can also provide a qualified function ARN (ARN that is
     * qualified with function version or alias name as suffix). AWS Lambda also allows
     * you to specify only the function name with the account ID qualifier (for
     * example, <code>account-id:Thumbnail</code>). Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length. </p>
     */
    inline ListEventSourceMappingsRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline ListEventSourceMappingsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline ListEventSourceMappingsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListEventSourceMappings</code> operation. If present, specifies to
     * continue the list from where the returning call left off. </p>
     */
    inline ListEventSourceMappingsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Optional integer. Specifies the maximum number of event sources to return in
     * response. This value must be greater than 0.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Optional integer. Specifies the maximum number of event sources to return in
     * response. This value must be greater than 0.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Optional integer. Specifies the maximum number of event sources to return in
     * response. This value must be greater than 0.</p>
     */
    inline ListEventSourceMappingsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
