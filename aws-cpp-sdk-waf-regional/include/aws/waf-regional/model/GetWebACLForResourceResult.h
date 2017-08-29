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
  class AWS_WAFREGIONAL_API GetWebACLForResourceResult
  {
  public:
    GetWebACLForResourceResult();
    GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
