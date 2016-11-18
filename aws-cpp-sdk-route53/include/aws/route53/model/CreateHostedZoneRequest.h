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
#include <aws/route53/model/HostedZoneConfig.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type containing the hosted zone request information.</p>
   */
  class AWS_ROUTE53_API CreateHostedZoneRequest : public Route53Request
  {
  public:
    CreateHostedZoneRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline CreateHostedZoneRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline CreateHostedZoneRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. For resource record types that include a domain name,
     * specify a fully qualified domain name, for example, <i>www.example.com</i>. The
     * trailing dot is optional; Amazon Route 53 assumes that the domain name is fully
     * qualified. This means that Amazon Route 53 treats <i>www.example.com</i>
     * (without a trailing dot) and <i>www.example.com.</i> (with a trailing dot) as
     * identical.</p> <p>If you're creating a public hosted zone, this is the name you
     * have registered with your DNS registrar. If your domain name is registered with
     * a registrar other than Amazon Route 53, change the name servers for your domain
     * to the set of <code>NameServers</code> that <code>CreateHostedZone</code>
     * returns in the DelegationSet element.</p>
     */
    inline CreateHostedZoneRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted can't be resolved anywhere other than
     * the given VPC.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted can't be resolved anywhere other than
     * the given VPC.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted can't be resolved anywhere other than
     * the given VPC.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted can't be resolved anywhere other than
     * the given VPC.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted can't be resolved anywhere other than
     * the given VPC.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(VPC&& value) { SetVPC(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p> (Optional) A complex type that contains an optional comment about your
     * hosted zone. If you don't want to specify a comment, omit both the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements.</p>
     */
    inline const HostedZoneConfig& GetHostedZoneConfig() const{ return m_hostedZoneConfig; }

    /**
     * <p> (Optional) A complex type that contains an optional comment about your
     * hosted zone. If you don't want to specify a comment, omit both the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements.</p>
     */
    inline void SetHostedZoneConfig(const HostedZoneConfig& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = value; }

    /**
     * <p> (Optional) A complex type that contains an optional comment about your
     * hosted zone. If you don't want to specify a comment, omit both the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements.</p>
     */
    inline void SetHostedZoneConfig(HostedZoneConfig&& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = value; }

    /**
     * <p> (Optional) A complex type that contains an optional comment about your
     * hosted zone. If you don't want to specify a comment, omit both the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(const HostedZoneConfig& value) { SetHostedZoneConfig(value); return *this;}

    /**
     * <p> (Optional) A complex type that contains an optional comment about your
     * hosted zone. If you don't want to specify a comment, omit both the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(HostedZoneConfig&& value) { SetHostedZoneConfig(value); return *this;}

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see
     * <a>CreateReusableDelegationSet</a>.</p> <dl> <dt>Type</dt> <dd> <p>String</p>
     * </dd> <dt>Default</dt> <dd> <p>None</p> </dd> <dt>Parent</dt> <dd> <p>
     * <code>CreatedHostedZoneRequest</code> </p> </dd> </dl>
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
