/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/MutationProtectionStatus.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociationStatus.h>
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
   * <p>An association between a firewall rule group and a VPC, which enables DNS
   * filtering for the VPC. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleGroupAssociation">AWS
   * API Reference</a></p>
   */
  class FirewallRuleGroupAssociation
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupAssociation();
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the association.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the association.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the association.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the association.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline FirewallRuleGroupAssociation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline FirewallRuleGroupAssociation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall rule group association.</p>
     */
    inline FirewallRuleGroupAssociation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC that is associated with the rule group. </p>
     */
    inline FirewallRuleGroupAssociation& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The name of the association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from rule group with the lowest numeric priority setting. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from rule group with the lowest numeric priority setting. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from rule group with the lowest numeric priority setting. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from rule group with the lowest numeric priority setting. </p>
     */
    inline FirewallRuleGroupAssociation& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline const MutationProtectionStatus& GetMutationProtection() const{ return m_mutationProtection; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline bool MutationProtectionHasBeenSet() const { return m_mutationProtectionHasBeenSet; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline void SetMutationProtection(const MutationProtectionStatus& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = value; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline void SetMutationProtection(MutationProtectionStatus&& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = std::move(value); }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline FirewallRuleGroupAssociation& WithMutationProtection(const MutationProtectionStatus& value) { SetMutationProtection(value); return *this;}

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline FirewallRuleGroupAssociation& WithMutationProtection(MutationProtectionStatus&& value) { SetMutationProtection(std::move(value)); return *this;}


    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline const Aws::String& GetManagedOwnerName() const{ return m_managedOwnerName; }

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline bool ManagedOwnerNameHasBeenSet() const { return m_managedOwnerNameHasBeenSet; }

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline void SetManagedOwnerName(const Aws::String& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = value; }

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline void SetManagedOwnerName(Aws::String&& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = std::move(value); }

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline void SetManagedOwnerName(const char* value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName.assign(value); }

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline FirewallRuleGroupAssociation& WithManagedOwnerName(const Aws::String& value) { SetManagedOwnerName(value); return *this;}

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline FirewallRuleGroupAssociation& WithManagedOwnerName(Aws::String&& value) { SetManagedOwnerName(std::move(value)); return *this;}

    /**
     * <p>The owner of the association, used only for associations that are not managed
     * by you. If you use Firewall Manager to manage your DNS Firewalls, then this
     * reports Firewall Manager as the managed owner.</p>
     */
    inline FirewallRuleGroupAssociation& WithManagedOwnerName(const char* value) { SetManagedOwnerName(value); return *this;}


    /**
     * <p>The current status of the association.</p>
     */
    inline const FirewallRuleGroupAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the association.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the association.</p>
     */
    inline void SetStatus(const FirewallRuleGroupAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the association.</p>
     */
    inline void SetStatus(FirewallRuleGroupAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithStatus(const FirewallRuleGroupAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the association.</p>
     */
    inline FirewallRuleGroupAssociation& WithStatus(FirewallRuleGroupAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline FirewallRuleGroupAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline FirewallRuleGroupAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the status of the response, if available.</p>
     */
    inline FirewallRuleGroupAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupAssociation& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupAssociation& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupAssociation& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRuleGroupAssociation& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRuleGroupAssociation& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the association was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRuleGroupAssociation& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRuleGroupAssociation& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRuleGroupAssociation& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the association was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRuleGroupAssociation& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    MutationProtectionStatus m_mutationProtection;
    bool m_mutationProtectionHasBeenSet = false;

    Aws::String m_managedOwnerName;
    bool m_managedOwnerNameHasBeenSet = false;

    FirewallRuleGroupAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
