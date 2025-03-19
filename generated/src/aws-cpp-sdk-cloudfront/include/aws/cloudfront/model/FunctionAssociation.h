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
   * <p>A CloudFront function that is associated with a cache behavior in a
   * CloudFront distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionAssociation">AWS
   * API Reference</a></p>
   */
  class FunctionAssociation
  {
  public:
    AWS_CLOUDFRONT_API FunctionAssociation() = default;
    AWS_CLOUDFRONT_API FunctionAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline const Aws::String& GetFunctionARN() const { return m_functionARN; }
    inline bool FunctionARNHasBeenSet() const { return m_functionARNHasBeenSet; }
    template<typename FunctionARNT = Aws::String>
    void SetFunctionARN(FunctionARNT&& value) { m_functionARNHasBeenSet = true; m_functionARN = std::forward<FunctionARNT>(value); }
    template<typename FunctionARNT = Aws::String>
    FunctionAssociation& WithFunctionARN(FunctionARNT&& value) { SetFunctionARN(std::forward<FunctionARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type of the function, either <code>viewer-request</code> or
     * <code>viewer-response</code>. You cannot use origin-facing event types
     * (<code>origin-request</code> and <code>origin-response</code>) with a CloudFront
     * function.</p>
     */
    inline EventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline FunctionAssociation& WithEventType(EventType value) { SetEventType(value); return *this;}
    ///@}
  private:

    Aws::String m_functionARN;
    bool m_functionARNHasBeenSet = false;

    EventType m_eventType{EventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
