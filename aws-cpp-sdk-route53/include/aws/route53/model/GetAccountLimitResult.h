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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AccountLimit.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the requested limit. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetAccountLimitResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetAccountLimitResult
  {
  public:
    GetAccountLimitResult();
    GetAccountLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the value of <code>Type</code> in
     * the request, the value of <code>Limit</code> is the maximum number of health
     * checks that you can create using the current account.</p>
     */
    inline const AccountLimit& GetLimit() const{ return m_limit; }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the value of <code>Type</code> in
     * the request, the value of <code>Limit</code> is the maximum number of health
     * checks that you can create using the current account.</p>
     */
    inline void SetLimit(const AccountLimit& value) { m_limit = value; }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the value of <code>Type</code> in
     * the request, the value of <code>Limit</code> is the maximum number of health
     * checks that you can create using the current account.</p>
     */
    inline void SetLimit(AccountLimit&& value) { m_limit = std::move(value); }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the value of <code>Type</code> in
     * the request, the value of <code>Limit</code> is the maximum number of health
     * checks that you can create using the current account.</p>
     */
    inline GetAccountLimitResult& WithLimit(const AccountLimit& value) { SetLimit(value); return *this;}

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the value of <code>Type</code> in
     * the request, the value of <code>Limit</code> is the maximum number of health
     * checks that you can create using the current account.</p>
     */
    inline GetAccountLimitResult& WithLimit(AccountLimit&& value) { SetLimit(std::move(value)); return *this;}


    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the
     * value of <code>Type</code> in the request, the value of <code>Count</code> is
     * the current number of health checks that you have created using the current
     * account.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the
     * value of <code>Type</code> in the request, the value of <code>Count</code> is
     * the current number of health checks that you have created using the current
     * account.</p>
     */
    inline void SetCount(long long value) { m_count = value; }

    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_HEALTH_CHECKS_BY_OWNER</code> for the
     * value of <code>Type</code> in the request, the value of <code>Count</code> is
     * the current number of health checks that you have created using the current
     * account.</p>
     */
    inline GetAccountLimitResult& WithCount(long long value) { SetCount(value); return *this;}

  private:

    AccountLimit m_limit;

    long long m_count;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
