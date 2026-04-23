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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverRuleAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In the response to an <a>AssociateResolverRule</a>,
   * <a>DisassociateResolverRule</a>, or <a>ListResolverRuleAssociations</a> request,
   * information about an association between a resolver rule and a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverRuleAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API ResolverRuleAssociation
  {
  public:
    ResolverRuleAssociation();
    ResolverRuleAssociation(Aws::Utils::Json::JsonView jsonValue);
    ResolverRuleAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline ResolverRuleAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline ResolverRuleAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association between a resolver rule and a VPC. Resolver assigns
     * this value when you submit an <a>AssociateResolverRule</a> request.</p>
     */
    inline ResolverRuleAssociation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline const Aws::String& GetResolverRuleId() const{ return m_resolverRuleId; }

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline void SetResolverRuleId(const Aws::String& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = value; }

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline void SetResolverRuleId(Aws::String&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::move(value); }

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline void SetResolverRuleId(const char* value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId.assign(value); }

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline ResolverRuleAssociation& WithResolverRuleId(const Aws::String& value) { SetResolverRuleId(value); return *this;}

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline ResolverRuleAssociation& WithResolverRuleId(Aws::String&& value) { SetResolverRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resolver rule that you associated with the VPC that is
     * specified by <code>VPCId</code>.</p>
     */
    inline ResolverRuleAssociation& WithResolverRuleId(const char* value) { SetResolverRuleId(value); return *this;}


    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an association between a resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline ResolverRuleAssociation& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline ResolverRuleAssociation& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that you associated the resolver rule with.</p>
     */
    inline ResolverRuleAssociation& WithVPCId(const char* value) { SetVPCId(value); return *this;}


    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline const ResolverRuleAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline void SetStatus(const ResolverRuleAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline void SetStatus(ResolverRuleAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithStatus(const ResolverRuleAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A code that specifies the current status of the association between a
     * resolver rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithStatus(ResolverRuleAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the status of the association between a resolver
     * rule and a VPC.</p>
     */
    inline ResolverRuleAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet;

    ResolverRuleAssociationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
