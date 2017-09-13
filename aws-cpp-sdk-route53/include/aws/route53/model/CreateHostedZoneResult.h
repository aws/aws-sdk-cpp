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
#include <aws/route53/model/HostedZone.h>
#include <aws/route53/model/ChangeInfo.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/route53/model/VPC.h>
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
   * <p>A complex type containing the response information for the hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CreateHostedZoneResult
  {
  public:
    CreateHostedZoneResult();
    CreateHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = std::move(value); }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithHostedZone(HostedZone&& value) { SetHostedZone(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }

    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline CreateHostedZoneResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline CreateHostedZoneResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}


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
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPC = value; }

    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPC = std::move(value); }

    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}


    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline CreateHostedZoneResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    HostedZone m_hostedZone;

    ChangeInfo m_changeInfo;

    DelegationSet m_delegationSet;

    VPC m_vPC;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
