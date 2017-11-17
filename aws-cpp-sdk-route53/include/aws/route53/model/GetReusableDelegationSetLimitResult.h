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
#include <aws/route53/model/ReusableDelegationSetLimit.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimitResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetReusableDelegationSetLimitResult
  {
  public:
    GetReusableDelegationSetLimitResult();
    GetReusableDelegationSetLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetReusableDelegationSetLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline const ReusableDelegationSetLimit& GetLimit() const{ return m_limit; }

    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline void SetLimit(const ReusableDelegationSetLimit& value) { m_limit = value; }

    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline void SetLimit(ReusableDelegationSetLimit&& value) { m_limit = std::move(value); }

    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline GetReusableDelegationSetLimitResult& WithLimit(const ReusableDelegationSetLimit& value) { SetLimit(value); return *this;}

    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline GetReusableDelegationSetLimitResult& WithLimit(ReusableDelegationSetLimit&& value) { SetLimit(std::move(value)); return *this;}


    /**
     * <p>The current number of hosted zones that you can associate with the specified
     * reusable delegation set.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The current number of hosted zones that you can associate with the specified
     * reusable delegation set.</p>
     */
    inline void SetCount(long long value) { m_count = value; }

    /**
     * <p>The current number of hosted zones that you can associate with the specified
     * reusable delegation set.</p>
     */
    inline GetReusableDelegationSetLimitResult& WithCount(long long value) { SetCount(value); return *this;}

  private:

    ReusableDelegationSetLimit m_limit;

    long long m_count;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
