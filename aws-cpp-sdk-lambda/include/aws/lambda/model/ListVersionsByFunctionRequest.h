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
  class AWS_LAMBDA_API ListVersionsByFunctionRequest : public LambdaRequest
  {
  public:
    ListVersionsByFunctionRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline ListVersionsByFunctionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline ListVersionsByFunctionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Function name whose versions to list. You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline ListVersionsByFunctionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline ListVersionsByFunctionRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline ListVersionsByFunctionRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> Optional string. An opaque pagination token returned from a previous
     * <code>ListVersionsByFunction</code> operation. If present, indicates where to
     * continue the listing. </p>
     */
    inline ListVersionsByFunctionRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda function
     * versions to return in response. This parameter value must be greater than 0.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda function
     * versions to return in response. This parameter value must be greater than 0.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda function
     * versions to return in response. This parameter value must be greater than 0.</p>
     */
    inline ListVersionsByFunctionRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
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
