/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CustomRequestHandling.h>
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
   * <p>Specifies that WAF should allow the request and optionally defines additional
   * custom handling for the request.</p> <p>This is used in the context of other
   * settings, for example to specify values for <a>RuleAction</a> and web ACL
   * <a>DefaultAction</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AllowAction">AWS
   * API Reference</a></p>
   */
  class AllowAction
  {
  public:
    AWS_WAFV2_API AllowAction();
    AWS_WAFV2_API AllowAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AllowAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const CustomRequestHandling& GetCustomRequestHandling() const{ return m_customRequestHandling; }

    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool CustomRequestHandlingHasBeenSet() const { return m_customRequestHandlingHasBeenSet; }

    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomRequestHandling(const CustomRequestHandling& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = value; }

    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomRequestHandling(CustomRequestHandling&& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = std::move(value); }

    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline AllowAction& WithCustomRequestHandling(const CustomRequestHandling& value) { SetCustomRequestHandling(value); return *this;}

    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline AllowAction& WithCustomRequestHandling(CustomRequestHandling&& value) { SetCustomRequestHandling(std::move(value)); return *this;}

  private:

    CustomRequestHandling m_customRequestHandling;
    bool m_customRequestHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
