/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/CustomHTTPHeader.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Custom request handling behavior that inserts custom headers into a web
   * request. You can add custom request handling for WAF to use when the rule action
   * doesn't block the request. For example, <code>CaptchaAction</code> for requests
   * with valid t okens, and <code>AllowAction</code>. </p> <p>For information about
   * customizing web requests and responses, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
   * web requests and responses in WAF</a> in the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
   * Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CustomRequestHandling">AWS
   * API Reference</a></p>
   */
  class CustomRequestHandling
  {
  public:
    AWS_WAFV2_API CustomRequestHandling();
    AWS_WAFV2_API CustomRequestHandling(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CustomRequestHandling& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const Aws::Vector<CustomHTTPHeader>& GetInsertHeaders() const{ return m_insertHeaders; }

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool InsertHeadersHasBeenSet() const { return m_insertHeadersHasBeenSet; }

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetInsertHeaders(const Aws::Vector<CustomHTTPHeader>& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = value; }

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetInsertHeaders(Aws::Vector<CustomHTTPHeader>&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = std::move(value); }

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CustomRequestHandling& WithInsertHeaders(const Aws::Vector<CustomHTTPHeader>& value) { SetInsertHeaders(value); return *this;}

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CustomRequestHandling& WithInsertHeaders(Aws::Vector<CustomHTTPHeader>&& value) { SetInsertHeaders(std::move(value)); return *this;}

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CustomRequestHandling& AddInsertHeaders(const CustomHTTPHeader& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.push_back(value); return *this; }

    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CustomRequestHandling& AddInsertHeaders(CustomHTTPHeader&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CustomHTTPHeader> m_insertHeaders;
    bool m_insertHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
