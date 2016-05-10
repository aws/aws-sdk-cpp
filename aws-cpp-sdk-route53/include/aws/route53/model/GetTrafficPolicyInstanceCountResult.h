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
   * <p>A complex type that contains information about the number of traffic policy
   * instances that are associated with the current AWS account.</p>
   */
  class AWS_ROUTE53_API GetTrafficPolicyInstanceCountResult
  {
  public:
    GetTrafficPolicyInstanceCountResult();
    GetTrafficPolicyInstanceCountResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetTrafficPolicyInstanceCountResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The number of traffic policy instances that are associated with the current
     * AWS account.</p>
     */
    inline long GetTrafficPolicyInstanceCount() const{ return m_trafficPolicyInstanceCount; }

    /**
     * <p>The number of traffic policy instances that are associated with the current
     * AWS account.</p>
     */
    inline void SetTrafficPolicyInstanceCount(long value) { m_trafficPolicyInstanceCount = value; }

    /**
     * <p>The number of traffic policy instances that are associated with the current
     * AWS account.</p>
     */
    inline GetTrafficPolicyInstanceCountResult& WithTrafficPolicyInstanceCount(long value) { SetTrafficPolicyInstanceCount(value); return *this;}

  private:
    long m_trafficPolicyInstanceCount;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws