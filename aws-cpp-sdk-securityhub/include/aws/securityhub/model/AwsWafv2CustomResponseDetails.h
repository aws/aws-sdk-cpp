/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafv2CustomHttpHeader.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A custom response to send to the client. You can define a custom response
   * for rule actions and default web ACL actions that are set to block.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2CustomResponseDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2CustomResponseDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2CustomResponseDetails();
    AWS_SECURITYHUB_API AwsWafv2CustomResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2CustomResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline const Aws::String& GetCustomResponseBodyKey() const{ return m_customResponseBodyKey; }

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline bool CustomResponseBodyKeyHasBeenSet() const { return m_customResponseBodyKeyHasBeenSet; }

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline void SetCustomResponseBodyKey(const Aws::String& value) { m_customResponseBodyKeyHasBeenSet = true; m_customResponseBodyKey = value; }

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline void SetCustomResponseBodyKey(Aws::String&& value) { m_customResponseBodyKeyHasBeenSet = true; m_customResponseBodyKey = std::move(value); }

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline void SetCustomResponseBodyKey(const char* value) { m_customResponseBodyKeyHasBeenSet = true; m_customResponseBodyKey.assign(value); }

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline AwsWafv2CustomResponseDetails& WithCustomResponseBodyKey(const Aws::String& value) { SetCustomResponseBodyKey(value); return *this;}

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline AwsWafv2CustomResponseDetails& WithCustomResponseBodyKey(Aws::String&& value) { SetCustomResponseBodyKey(std::move(value)); return *this;}

    /**
     * <p> References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. </p>
     */
    inline AwsWafv2CustomResponseDetails& WithCustomResponseBodyKey(const char* value) { SetCustomResponseBodyKey(value); return *this;}


    /**
     * <p> The HTTP status code to return to the client. For a list of status codes
     * that you can use in your custom responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/customizing-the-response-status-codes.html">Supported
     * status codes for custom response</a> in the <i>WAF Developer Guide.</i> </p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p> The HTTP status code to return to the client. For a list of status codes
     * that you can use in your custom responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/customizing-the-response-status-codes.html">Supported
     * status codes for custom response</a> in the <i>WAF Developer Guide.</i> </p>
     */
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }

    /**
     * <p> The HTTP status code to return to the client. For a list of status codes
     * that you can use in your custom responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/customizing-the-response-status-codes.html">Supported
     * status codes for custom response</a> in the <i>WAF Developer Guide.</i> </p>
     */
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p> The HTTP status code to return to the client. For a list of status codes
     * that you can use in your custom responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/customizing-the-response-status-codes.html">Supported
     * status codes for custom response</a> in the <i>WAF Developer Guide.</i> </p>
     */
    inline AwsWafv2CustomResponseDetails& WithResponseCode(int value) { SetResponseCode(value); return *this;}


    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline const Aws::Vector<AwsWafv2CustomHttpHeader>& GetResponseHeaders() const{ return m_responseHeaders; }

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline bool ResponseHeadersHasBeenSet() const { return m_responseHeadersHasBeenSet; }

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline void SetResponseHeaders(const Aws::Vector<AwsWafv2CustomHttpHeader>& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders = value; }

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline void SetResponseHeaders(Aws::Vector<AwsWafv2CustomHttpHeader>&& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders = std::move(value); }

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline AwsWafv2CustomResponseDetails& WithResponseHeaders(const Aws::Vector<AwsWafv2CustomHttpHeader>& value) { SetResponseHeaders(value); return *this;}

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline AwsWafv2CustomResponseDetails& WithResponseHeaders(Aws::Vector<AwsWafv2CustomHttpHeader>&& value) { SetResponseHeaders(std::move(value)); return *this;}

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline AwsWafv2CustomResponseDetails& AddResponseHeaders(const AwsWafv2CustomHttpHeader& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders.push_back(value); return *this; }

    /**
     * <p> The HTTP headers to use in the response. </p>
     */
    inline AwsWafv2CustomResponseDetails& AddResponseHeaders(AwsWafv2CustomHttpHeader&& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customResponseBodyKey;
    bool m_customResponseBodyKeyHasBeenSet = false;

    int m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    Aws::Vector<AwsWafv2CustomHttpHeader> m_responseHeaders;
    bool m_responseHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
