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
#include <aws/route53/model/HostedZone.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/VPC.h>

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
   * <p>A complex type containing the response information for the hosted zone.</p>
   */
  class AWS_ROUTE53_API GetHostedZoneResult
  {
  public:
    GetHostedZoneResult();
    GetHostedZoneResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetHostedZoneResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const HostedZone& GetHostedZone() const{ return m_hostedZone; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline void SetHostedZone(const HostedZone& value) { m_hostedZone = value; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = value; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline GetHostedZoneResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline GetHostedZoneResult& WithHostedZone(HostedZone&& value) { SetHostedZone(value); return *this;}

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline GetHostedZoneResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline GetHostedZoneResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline const Aws::Vector<VPC>& GetVPCs() const{ return m_vPCs; }

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline void SetVPCs(const Aws::Vector<VPC>& value) { m_vPCs = value; }

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline void SetVPCs(Aws::Vector<VPC>&& value) { m_vPCs = value; }

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline GetHostedZoneResult& WithVPCs(const Aws::Vector<VPC>& value) { SetVPCs(value); return *this;}

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline GetHostedZoneResult& WithVPCs(Aws::Vector<VPC>&& value) { SetVPCs(value); return *this;}

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline GetHostedZoneResult& AddVPCs(const VPC& value) { m_vPCs.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about VPCs associated with the
     * specified hosted zone.</p>
     */
    inline GetHostedZoneResult& AddVPCs(VPC&& value) { m_vPCs.push_back(value); return *this; }

  private:
    HostedZone m_hostedZone;
    DelegationSet m_delegationSet;
    Aws::Vector<VPC> m_vPCs;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws