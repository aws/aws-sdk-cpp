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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/EventType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that contains a Lambda function association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/LambdaFunctionAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API LambdaFunctionAssociation
  {
  public:
    LambdaFunctionAssociation();
    LambdaFunctionAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    LambdaFunctionAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline const Aws::String& GetLambdaFunctionARN() const{ return m_lambdaFunctionARN; }

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline bool LambdaFunctionARNHasBeenSet() const { return m_lambdaFunctionARNHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline void SetLambdaFunctionARN(const Aws::String& value) { m_lambdaFunctionARNHasBeenSet = true; m_lambdaFunctionARN = value; }

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline void SetLambdaFunctionARN(Aws::String&& value) { m_lambdaFunctionARNHasBeenSet = true; m_lambdaFunctionARN = std::move(value); }

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline void SetLambdaFunctionARN(const char* value) { m_lambdaFunctionARNHasBeenSet = true; m_lambdaFunctionARN.assign(value); }

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline LambdaFunctionAssociation& WithLambdaFunctionARN(const Aws::String& value) { SetLambdaFunctionARN(value); return *this;}

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline LambdaFunctionAssociation& WithLambdaFunctionARN(Aws::String&& value) { SetLambdaFunctionARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function. You must specify the ARN of a function
     * version; you can't specify a Lambda alias or $LATEST.</p>
     */
    inline LambdaFunctionAssociation& WithLambdaFunctionARN(const char* value) { SetLambdaFunctionARN(value); return *this;}


    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline LambdaFunctionAssociation& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>Specifies the event type that triggers a Lambda function invocation. You can
     * specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>: The
     * function executes when CloudFront receives a request from a viewer and before it
     * checks to see whether the requested object is in the edge cache. </p> </li> <li>
     * <p> <code>origin-request</code>: The function executes only when CloudFront
     * forwards a request to your origin. When the requested object is in the edge
     * cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline LambdaFunctionAssociation& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>A flag that allows a Lambda function to have read access to the body content.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-include-body-access.html">Accessing
     * the Request Body by Choosing the Include Body Option</a> in the Amazon
     * CloudFront Developer Guide.</p>
     */
    inline bool GetIncludeBody() const{ return m_includeBody; }

    /**
     * <p>A flag that allows a Lambda function to have read access to the body content.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-include-body-access.html">Accessing
     * the Request Body by Choosing the Include Body Option</a> in the Amazon
     * CloudFront Developer Guide.</p>
     */
    inline bool IncludeBodyHasBeenSet() const { return m_includeBodyHasBeenSet; }

    /**
     * <p>A flag that allows a Lambda function to have read access to the body content.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-include-body-access.html">Accessing
     * the Request Body by Choosing the Include Body Option</a> in the Amazon
     * CloudFront Developer Guide.</p>
     */
    inline void SetIncludeBody(bool value) { m_includeBodyHasBeenSet = true; m_includeBody = value; }

    /**
     * <p>A flag that allows a Lambda function to have read access to the body content.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-include-body-access.html">Accessing
     * the Request Body by Choosing the Include Body Option</a> in the Amazon
     * CloudFront Developer Guide.</p>
     */
    inline LambdaFunctionAssociation& WithIncludeBody(bool value) { SetIncludeBody(value); return *this;}

  private:

    Aws::String m_lambdaFunctionARN;
    bool m_lambdaFunctionARNHasBeenSet;

    EventType m_eventType;
    bool m_eventTypeHasBeenSet;

    bool m_includeBody;
    bool m_includeBodyHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
