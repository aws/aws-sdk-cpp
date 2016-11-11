/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/model/DelegationSet.h>

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
   * <p>A complex type that contains the response to the
   * <code>GetReusableDelegationSet</code> request.</p>
   */
  class AWS_ROUTE53_API GetReusableDelegationSetResult
  {
  public:
    GetReusableDelegationSetResult();
    GetReusableDelegationSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetReusableDelegationSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline GetReusableDelegationSetResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline GetReusableDelegationSetResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(value); return *this;}

  private:
    DelegationSet m_delegationSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws