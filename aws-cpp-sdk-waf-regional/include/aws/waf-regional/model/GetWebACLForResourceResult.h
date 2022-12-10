/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WebACLSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetWebACLForResourceResult
  {
  public:
    AWS_WAFREGIONAL_API GetWebACLForResourceResult();
    AWS_WAFREGIONAL_API GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline const WebACLSummary& GetWebACLSummary() const{ return m_webACLSummary; }

    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline void SetWebACLSummary(const WebACLSummary& value) { m_webACLSummary = value; }

    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline void SetWebACLSummary(WebACLSummary&& value) { m_webACLSummary = std::move(value); }

    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline GetWebACLForResourceResult& WithWebACLSummary(const WebACLSummary& value) { SetWebACLSummary(value); return *this;}

    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline GetWebACLForResourceResult& WithWebACLSummary(WebACLSummary&& value) { SetWebACLSummary(std::move(value)); return *this;}

  private:

    WebACLSummary m_webACLSummary;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
