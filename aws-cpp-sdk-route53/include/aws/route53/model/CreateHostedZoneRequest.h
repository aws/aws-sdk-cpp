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
#include <aws/route53/model/HostedZoneConfig.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to create a public
   * or private hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHostedZoneRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CreateHostedZoneRequest : public Route53Request
  {
  public:
    CreateHostedZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHostedZone"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }

    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }

    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. To associate
     * additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline const HostedZoneConfig& GetHostedZoneConfig() const{ return m_hostedZoneConfig; }

    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline bool HostedZoneConfigHasBeenSet() const { return m_hostedZoneConfigHasBeenSet; }

    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline void SetHostedZoneConfig(const HostedZoneConfig& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = value; }

    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline void SetHostedZoneConfig(HostedZoneConfig&& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = std::move(value); }

    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(const HostedZoneConfig& value) { SetHostedZoneConfig(value); return *this;}

    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(HostedZoneConfig&& value) { SetHostedZoneConfig(std::move(value)); return *this;}


    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::move(value); }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(std::move(value)); return *this;}

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(const char* value) { SetDelegationSetId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    VPC m_vPC;
    bool m_vPCHasBeenSet;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    HostedZoneConfig m_hostedZoneConfig;
    bool m_hostedZoneConfigHasBeenSet;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
