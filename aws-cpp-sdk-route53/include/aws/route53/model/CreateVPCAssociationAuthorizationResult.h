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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>
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
   * <p>A complex type that contains the response information from a
   * <code>CreateVPCAssociationAuthorization</code> request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateVPCAssociationAuthorizationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CreateVPCAssociationAuthorizationResult
  {
  public:
    CreateVPCAssociationAuthorizationResult();
    CreateVPCAssociationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVPCAssociationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPC = value; }

    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPC = std::move(value); }

    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline CreateVPCAssociationAuthorizationResult& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline CreateVPCAssociationAuthorizationResult& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}

  private:

    Aws::String m_hostedZoneId;

    VPC m_vPC;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
