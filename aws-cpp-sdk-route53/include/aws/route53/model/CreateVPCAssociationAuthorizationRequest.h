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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to authorize
   * associating a VPC with your private hosted zone. Authorization is only required
   * when a private hosted zone and a VPC were created by using different
   * accounts.</p>
   */
  class AWS_ROUTE53_API CreateVPCAssociationAuthorizationRequest : public Route53Request
  {
  public:
    CreateVPCAssociationAuthorizationRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline CreateVPCAssociationAuthorizationRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline CreateVPCAssociationAuthorizationRequest& WithVPC(VPC&& value) { SetVPC(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    VPC m_vPC;
    bool m_vPCHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
