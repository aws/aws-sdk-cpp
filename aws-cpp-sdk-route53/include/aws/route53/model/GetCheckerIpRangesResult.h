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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains the <code>CheckerIpRanges</code>
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetCheckerIpRangesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetCheckerIpRangesResult
  {
  public:
    GetCheckerIpRangesResult();
    GetCheckerIpRangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCheckerIpRangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCheckerIpRanges() const{ return m_checkerIpRanges; }

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline void SetCheckerIpRanges(const Aws::Vector<Aws::String>& value) { m_checkerIpRanges = value; }

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline void SetCheckerIpRanges(Aws::Vector<Aws::String>&& value) { m_checkerIpRanges = std::move(value); }

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline GetCheckerIpRangesResult& WithCheckerIpRanges(const Aws::Vector<Aws::String>& value) { SetCheckerIpRanges(value); return *this;}

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline GetCheckerIpRangesResult& WithCheckerIpRanges(Aws::Vector<Aws::String>&& value) { SetCheckerIpRanges(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline GetCheckerIpRangesResult& AddCheckerIpRanges(const Aws::String& value) { m_checkerIpRanges.push_back(value); return *this; }

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline GetCheckerIpRangesResult& AddCheckerIpRanges(Aws::String&& value) { m_checkerIpRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline GetCheckerIpRangesResult& AddCheckerIpRanges(const char* value) { m_checkerIpRanges.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_checkerIpRanges;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
