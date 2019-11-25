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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/WebACL.h>
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
  class AWS_WAFV2_API GetWebACLForResourceResult
  {
  public:
    GetWebACLForResourceResult();
    GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Web ACL that is associated with the resource. If there is no associated
     * resource, AWS WAF returns a null Web ACL.</p>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }

    /**
     * <p>The Web ACL that is associated with the resource. If there is no associated
     * resource, AWS WAF returns a null Web ACL.</p>
     */
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }

    /**
     * <p>The Web ACL that is associated with the resource. If there is no associated
     * resource, AWS WAF returns a null Web ACL.</p>
     */
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }

    /**
     * <p>The Web ACL that is associated with the resource. If there is no associated
     * resource, AWS WAF returns a null Web ACL.</p>
     */
    inline GetWebACLForResourceResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}

    /**
     * <p>The Web ACL that is associated with the resource. If there is no associated
     * resource, AWS WAF returns a null Web ACL.</p>
     */
    inline GetWebACLForResourceResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}

  private:

    WebACL m_webACL;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
