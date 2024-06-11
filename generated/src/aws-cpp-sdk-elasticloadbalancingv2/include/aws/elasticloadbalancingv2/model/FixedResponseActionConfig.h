﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about an action that returns a custom HTTP
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/FixedResponseActionConfig">AWS
   * API Reference</a></p>
   */
  class FixedResponseActionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API FixedResponseActionConfig();
    AWS_ELASTICLOADBALANCINGV2_API FixedResponseActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API FixedResponseActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }
    inline FixedResponseActionConfig& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}
    inline FixedResponseActionConfig& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}
    inline FixedResponseActionConfig& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline FixedResponseActionConfig& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline FixedResponseActionConfig& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline FixedResponseActionConfig& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline FixedResponseActionConfig& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline FixedResponseActionConfig& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline FixedResponseActionConfig& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}
  private:

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
