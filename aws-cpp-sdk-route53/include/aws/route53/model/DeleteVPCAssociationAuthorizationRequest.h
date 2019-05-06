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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to remove
   * authorization to associate a VPC that was created by one AWS account with a
   * hosted zone that was created with a different AWS account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteVPCAssociationAuthorizationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DeleteVPCAssociationAuthorizationRequest : public Route53Request
  {
  public:
    DeleteVPCAssociationAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVPCAssociationAuthorization"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline DeleteVPCAssociationAuthorizationRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline DeleteVPCAssociationAuthorizationRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, the ID
     * of the hosted zone.</p>
     */
    inline DeleteVPCAssociationAuthorizationRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline DeleteVPCAssociationAuthorizationRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>When removing authorization to associate a VPC that was created by one AWS
     * account with a hosted zone that was created with a different AWS account, a
     * complex type that includes the ID and region of the VPC.</p>
     */
    inline DeleteVPCAssociationAuthorizationRequest& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    VPC m_vPC;
    bool m_vPCHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
