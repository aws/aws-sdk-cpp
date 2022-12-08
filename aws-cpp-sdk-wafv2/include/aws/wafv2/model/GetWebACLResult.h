/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/WebACL.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class GetWebACLResult
  {
  public:
    AWS_WAFV2_API GetWebACLResult();
    AWS_WAFV2_API GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }

    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }

    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }

    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline GetWebACLResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}

    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline GetWebACLResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}


    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(const char* value) { m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline GetWebACLResult& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline GetWebACLResult& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline GetWebACLResult& WithLockToken(const char* value) { SetLockToken(value); return *this;}


    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetApplicationIntegrationURL() const{ return m_applicationIntegrationURL; }

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetApplicationIntegrationURL(const Aws::String& value) { m_applicationIntegrationURL = value; }

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetApplicationIntegrationURL(Aws::String&& value) { m_applicationIntegrationURL = std::move(value); }

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetApplicationIntegrationURL(const char* value) { m_applicationIntegrationURL.assign(value); }

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline GetWebACLResult& WithApplicationIntegrationURL(const Aws::String& value) { SetApplicationIntegrationURL(value); return *this;}

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline GetWebACLResult& WithApplicationIntegrationURL(Aws::String&& value) { SetApplicationIntegrationURL(std::move(value)); return *this;}

    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code>. This is
     * only populated if you are using a rule group in your web ACL that integrates
     * with your applications in this way. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline GetWebACLResult& WithApplicationIntegrationURL(const char* value) { SetApplicationIntegrationURL(value); return *this;}

  private:

    WebACL m_webACL;

    Aws::String m_lockToken;

    Aws::String m_applicationIntegrationURL;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
