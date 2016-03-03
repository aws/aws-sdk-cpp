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
   * <p>A complex type that contains information about the request to create a hosted
   * zone.</p>
   */
  class AWS_ROUTE53_API CreateHostedZoneRequest : public Route53Request
  {
  public:
    CreateHostedZoneRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline CreateHostedZoneRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted cannot be resolved anywhere other than
     * the given VPC.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted cannot be resolved anywhere other than
     * the given VPC.</p>
     */
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted cannot be resolved anywhere other than
     * the given VPC.</p>
     */
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted cannot be resolved anywhere other than
     * the given VPC.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}

    /**
     * <p>The VPC that you want your hosted zone to be associated with. By providing
     * this parameter, your newly created hosted cannot be resolved anywhere other than
     * the given VPC.</p>
     */
    inline CreateHostedZoneRequest& WithVPC(VPC&& value) { SetVPC(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a hosted zone.
     * <code>CallerReference</code> can be any unique string; you might choose to use a
     * string that identifies your project, such as <code>DNSMigration_01</code>.</p>
     * <p>Valid characters are any Unicode code points that are legal in an XML 1.0
     * document. The UTF-8 encoding of the value must be less than 128 bytes.</p>
     */
    inline CreateHostedZoneRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p>A complex type that contains an optional comment about your hosted zone.</p>
     */
    inline const HostedZoneConfig& GetHostedZoneConfig() const{ return m_hostedZoneConfig; }

    /**
     * <p>A complex type that contains an optional comment about your hosted zone.</p>
     */
    inline void SetHostedZoneConfig(const HostedZoneConfig& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = value; }

    /**
     * <p>A complex type that contains an optional comment about your hosted zone.</p>
     */
    inline void SetHostedZoneConfig(HostedZoneConfig&& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = value; }

    /**
     * <p>A complex type that contains an optional comment about your hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(const HostedZoneConfig& value) { SetHostedZoneConfig(value); return *this;}

    /**
     * <p>A complex type that contains an optional comment about your hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithHostedZoneConfig(HostedZoneConfig&& value) { SetHostedZoneConfig(value); return *this;}

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
     */
    inline CreateHostedZoneRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>The delegation set id of the reusable delgation set whose NS records you want
     * to assign to the new hosted zone.</p>
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
