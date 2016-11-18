﻿/*
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
#include <aws/route53/model/TrafficPolicyInstance.h>

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
   * <p>A complex type that contains information about the resource record sets that
   * Amazon Route 53 created based on a specified traffic policy.</p>
   */
  class AWS_ROUTE53_API UpdateTrafficPolicyInstanceResult
  {
  public:
    UpdateTrafficPolicyInstanceResult();
    UpdateTrafficPolicyInstanceResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateTrafficPolicyInstanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline const TrafficPolicyInstance& GetTrafficPolicyInstance() const{ return m_trafficPolicyInstance; }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(const TrafficPolicyInstance& value) { m_trafficPolicyInstance = value; }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline void SetTrafficPolicyInstance(TrafficPolicyInstance&& value) { m_trafficPolicyInstance = value; }

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline UpdateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(const TrafficPolicyInstance& value) { SetTrafficPolicyInstance(value); return *this;}

    /**
     * <p>A complex type that contains settings for the updated traffic policy
     * instance.</p>
     */
    inline UpdateTrafficPolicyInstanceResult& WithTrafficPolicyInstance(TrafficPolicyInstance&& value) { SetTrafficPolicyInstance(value); return *this;}

  private:
    TrafficPolicyInstance m_trafficPolicyInstance;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws