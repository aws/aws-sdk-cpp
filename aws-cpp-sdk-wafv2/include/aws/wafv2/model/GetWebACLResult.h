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
  class AWS_WAFV2_API GetWebACLResult
  {
  public:
    GetWebACLResult();
    GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Web ACL specification. You can modify the settings in this Web ACL and
     * use it to update this Web ACL or create a new one.</p>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }

    /**
     * <p>The Web ACL specification. You can modify the settings in this Web ACL and
     * use it to update this Web ACL or create a new one.</p>
     */
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }

    /**
     * <p>The Web ACL specification. You can modify the settings in this Web ACL and
     * use it to update this Web ACL or create a new one.</p>
     */
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }

    /**
     * <p>The Web ACL specification. You can modify the settings in this Web ACL and
     * use it to update this Web ACL or create a new one.</p>
     */
    inline GetWebACLResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}

    /**
     * <p>The Web ACL specification. You can modify the settings in this Web ACL and
     * use it to update this Web ACL or create a new one.</p>
     */
    inline GetWebACLResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}


    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const char* value) { m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline GetWebACLResult& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline GetWebACLResult& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline GetWebACLResult& WithLockToken(const char* value) { SetLockToken(value); return *this;}

  private:

    WebACL m_webACL;

    Aws::String m_lockToken;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
