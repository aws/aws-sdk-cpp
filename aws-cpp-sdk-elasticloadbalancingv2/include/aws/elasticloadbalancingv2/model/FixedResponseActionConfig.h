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
  class AWS_ELASTICLOADBALANCINGV2_API FixedResponseActionConfig
  {
  public:
    FixedResponseActionConfig();
    FixedResponseActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    FixedResponseActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>The message.</p>
     */
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    /**
     * <p>The message.</p>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The message.</p>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    /**
     * <p>The message.</p>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>The message.</p>
     */
    inline FixedResponseActionConfig& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The message.</p>
     */
    inline FixedResponseActionConfig& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    /**
     * <p>The message.</p>
     */
    inline FixedResponseActionConfig& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline FixedResponseActionConfig& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline FixedResponseActionConfig& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP response code (2XX, 4XX, or 5XX).</p>
     */
    inline FixedResponseActionConfig& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline FixedResponseActionConfig& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline FixedResponseActionConfig& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type.</p> <p>Valid Values: text/plain | text/css | text/html |
     * application/javascript | application/json</p>
     */
    inline FixedResponseActionConfig& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
