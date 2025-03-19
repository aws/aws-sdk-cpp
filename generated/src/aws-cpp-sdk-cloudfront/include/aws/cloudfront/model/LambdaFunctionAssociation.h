/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A complex type that contains a Lambda@Edge function
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/LambdaFunctionAssociation">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAssociation
  {
  public:
    AWS_CLOUDFRONT_API LambdaFunctionAssociation() = default;
    AWS_CLOUDFRONT_API LambdaFunctionAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API LambdaFunctionAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ARN of the Lambda@Edge function. You must specify the ARN of a function
     * version; you can't specify an alias or $LATEST.</p>
     */
    inline const Aws::String& GetLambdaFunctionARN() const { return m_lambdaFunctionARN; }
    inline bool LambdaFunctionARNHasBeenSet() const { return m_lambdaFunctionARNHasBeenSet; }
    template<typename LambdaFunctionARNT = Aws::String>
    void SetLambdaFunctionARN(LambdaFunctionARNT&& value) { m_lambdaFunctionARNHasBeenSet = true; m_lambdaFunctionARN = std::forward<LambdaFunctionARNT>(value); }
    template<typename LambdaFunctionARNT = Aws::String>
    LambdaFunctionAssociation& WithLambdaFunctionARN(LambdaFunctionARNT&& value) { SetLambdaFunctionARN(std::forward<LambdaFunctionARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the event type that triggers a Lambda@Edge function invocation. You
     * can specify the following values:</p> <ul> <li> <p> <code>viewer-request</code>:
     * The function executes when CloudFront receives a request from a viewer and
     * before it checks to see whether the requested object is in the edge cache.</p>
     * </li> <li> <p> <code>origin-request</code>: The function executes only when
     * CloudFront sends a request to your origin. When the requested object is in the
     * edge cache, the function doesn't execute.</p> </li> <li> <p>
     * <code>origin-response</code>: The function executes after CloudFront receives a
     * response from the origin and before it caches the object in the response. When
     * the requested object is in the edge cache, the function doesn't execute.</p>
     * </li> <li> <p> <code>viewer-response</code>: The function executes before
     * CloudFront returns the requested object to the viewer. The function executes
     * regardless of whether the object was already in the edge cache.</p> <p>If the
     * origin returns an HTTP status code other than HTTP 200 (OK), the function
     * doesn't execute.</p> </li> </ul>
     */
    inline EventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline LambdaFunctionAssociation& WithEventType(EventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that allows a Lambda@Edge function to have read access to the body
     * content. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-include-body-access.html">Accessing
     * the Request Body by Choosing the Include Body Option</a> in the Amazon
     * CloudFront Developer Guide.</p>
     */
    inline bool GetIncludeBody() const { return m_includeBody; }
    inline bool IncludeBodyHasBeenSet() const { return m_includeBodyHasBeenSet; }
    inline void SetIncludeBody(bool value) { m_includeBodyHasBeenSet = true; m_includeBody = value; }
    inline LambdaFunctionAssociation& WithIncludeBody(bool value) { SetIncludeBody(value); return *this;}
    ///@}
  private:

    Aws::String m_lambdaFunctionARN;
    bool m_lambdaFunctionARNHasBeenSet = false;

    EventType m_eventType{EventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    bool m_includeBody{false};
    bool m_includeBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
