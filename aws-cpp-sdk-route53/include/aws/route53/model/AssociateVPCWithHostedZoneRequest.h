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
   * <p>A complex type that contains information about the request to associate a VPC
   * with a private hosted zone.</p>
   */
  class AWS_ROUTE53_API AssociateVPCWithHostedZoneRequest : public Route53Request
  {
  public:
    AssociateVPCWithHostedZoneRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the private hosted zone that you want to associate an Amazon VPC
     * with.</p> <p>Note that you can't associate a VPC with a hosted zone that doesn't
     * have an existing VPC association.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>A complex type that contains information about the VPC that you want to
     * associate with a private hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>A complex type that contains information about the VPC that you want to
     * associate with a private hosted zone.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>A complex type that contains information about the VPC that you want to
     * associate with a private hosted zone.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>A complex type that contains information about the VPC that you want to
     * associate with a private hosted zone.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>A complex type that contains information about the VPC that you want to
     * associate with a private hosted zone.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithVPC(VPC&& value) { SetVPC(value); return *this;}

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p> <i>Optional:</i> A comment about the association request.</p>
     */
    inline AssociateVPCWithHostedZoneRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    VPC m_vPC;
    bool m_vPCHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
