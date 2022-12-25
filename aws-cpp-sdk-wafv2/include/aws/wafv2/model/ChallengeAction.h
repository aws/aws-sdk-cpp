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
   * <p>Specifies that WAF should run a <code>Challenge</code> check against the
   * request to verify that the request is coming from a legitimate client session:
   * </p> <ul> <li> <p>If the request includes a valid, unexpired challenge token,
   * WAF applies any custom request handling and labels that you've configured and
   * then allows the web request inspection to proceed to the next rule, similar to a
   * <code>CountAction</code>. </p> </li> <li> <p>If the request doesn't include a
   * valid, unexpired challenge token, WAF discontinues the web ACL evaluation of the
   * request and blocks it from going to its intended destination.</p> <p>WAF then
   * generates a challenge response that it sends back to the client, which includes
   * the following: </p> <ul> <li> <p>The header <code>x-amzn-waf-action</code> with
   * a value of <code>challenge</code>. </p> </li> <li> <p>The HTTP status code
   * <code>202 Request Accepted</code>. </p> </li> <li> <p>If the request contains an
   * <code>Accept</code> header with a value of <code>text/html</code>, the response
   * includes a JavaScript page interstitial with a challenge script. </p> </li>
   * </ul> <p>Challenges run silent browser interrogations in the background, and
   * don't generally affect the end user experience. </p> <p>A challenge enforces
   * token acquisition using an interstitial JavaScript challenge that inspects the
   * client session for legitimate behavior. The challenge blocks bots or at least
   * increases the cost of operating sophisticated bots. </p> <p>After the client
   * session successfully responds to the challenge, it receives a new token from
   * WAF, which the challenge script uses to resubmit the original request. </p>
   * </li> </ul> <p>You can configure the expiration time in the
   * <code>ChallengeConfig</code> <code>ImmunityTimeProperty</code> setting at the
   * rule and web ACL level. The rule setting overrides the web ACL setting. </p>
   * <p>This action option is available for rules. It isn't available for web ACL
   * default actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ChallengeAction">AWS
   * API Reference</a></p>
   */
  class ChallengeAction
  {
  public:
    AWS_WAFV2_API ChallengeAction();
    AWS_WAFV2_API ChallengeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ChallengeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const CustomRequestHandling& GetCustomRequestHandling() const{ return m_customRequestHandling; }

    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool CustomRequestHandlingHasBeenSet() const { return m_customRequestHandlingHasBeenSet; }

    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomRequestHandling(const CustomRequestHandling& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = value; }

    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomRequestHandling(CustomRequestHandling&& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = std::move(value); }

    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline ChallengeAction& WithCustomRequestHandling(const CustomRequestHandling& value) { SetCustomRequestHandling(value); return *this;}

    /**
     * <p>Defines custom handling for the web request, used when the challenge
     * inspection determines that the request's token is valid and unexpired.</p>
     * <p>For information about customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline ChallengeAction& WithCustomRequestHandling(CustomRequestHandling&& value) { SetCustomRequestHandling(std::move(value)); return *this;}

  private:

    CustomRequestHandling m_customRequestHandling;
    bool m_customRequestHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
