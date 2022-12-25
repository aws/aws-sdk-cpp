/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/EC2CreateRouteAction.h>
#include <aws/fms/model/EC2ReplaceRouteAction.h>
#include <aws/fms/model/EC2DeleteRouteAction.h>
#include <aws/fms/model/EC2CopyRouteTableAction.h>
#include <aws/fms/model/EC2ReplaceRouteTableAssociationAction.h>
#include <aws/fms/model/EC2AssociateRouteTableAction.h>
#include <aws/fms/model/EC2CreateRouteTableAction.h>
#include <aws/fms/model/FMSPolicyUpdateFirewallCreationConfigAction.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Information about an individual action you can take to remediate a
   * violation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/RemediationAction">AWS
   * API Reference</a></p>
   */
  class RemediationAction
  {
  public:
    AWS_FMS_API RemediationAction();
    AWS_FMS_API RemediationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RemediationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of a remediation action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of a remediation action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of a remediation action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of a remediation action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of a remediation action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of a remediation action.</p>
     */
    inline RemediationAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of a remediation action.</p>
     */
    inline RemediationAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of a remediation action.</p>
     */
    inline RemediationAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2CreateRouteAction& GetEC2CreateRouteAction() const{ return m_eC2CreateRouteAction; }

    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline bool EC2CreateRouteActionHasBeenSet() const { return m_eC2CreateRouteActionHasBeenSet; }

    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CreateRouteAction(const EC2CreateRouteAction& value) { m_eC2CreateRouteActionHasBeenSet = true; m_eC2CreateRouteAction = value; }

    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CreateRouteAction(EC2CreateRouteAction&& value) { m_eC2CreateRouteActionHasBeenSet = true; m_eC2CreateRouteAction = std::move(value); }

    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CreateRouteAction(const EC2CreateRouteAction& value) { SetEC2CreateRouteAction(value); return *this;}

    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CreateRouteAction(EC2CreateRouteAction&& value) { SetEC2CreateRouteAction(std::move(value)); return *this;}


    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2ReplaceRouteAction& GetEC2ReplaceRouteAction() const{ return m_eC2ReplaceRouteAction; }

    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline bool EC2ReplaceRouteActionHasBeenSet() const { return m_eC2ReplaceRouteActionHasBeenSet; }

    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2ReplaceRouteAction(const EC2ReplaceRouteAction& value) { m_eC2ReplaceRouteActionHasBeenSet = true; m_eC2ReplaceRouteAction = value; }

    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2ReplaceRouteAction(EC2ReplaceRouteAction&& value) { m_eC2ReplaceRouteActionHasBeenSet = true; m_eC2ReplaceRouteAction = std::move(value); }

    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2ReplaceRouteAction(const EC2ReplaceRouteAction& value) { SetEC2ReplaceRouteAction(value); return *this;}

    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2ReplaceRouteAction(EC2ReplaceRouteAction&& value) { SetEC2ReplaceRouteAction(std::move(value)); return *this;}


    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2DeleteRouteAction& GetEC2DeleteRouteAction() const{ return m_eC2DeleteRouteAction; }

    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline bool EC2DeleteRouteActionHasBeenSet() const { return m_eC2DeleteRouteActionHasBeenSet; }

    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2DeleteRouteAction(const EC2DeleteRouteAction& value) { m_eC2DeleteRouteActionHasBeenSet = true; m_eC2DeleteRouteAction = value; }

    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline void SetEC2DeleteRouteAction(EC2DeleteRouteAction&& value) { m_eC2DeleteRouteActionHasBeenSet = true; m_eC2DeleteRouteAction = std::move(value); }

    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2DeleteRouteAction(const EC2DeleteRouteAction& value) { SetEC2DeleteRouteAction(value); return *this;}

    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2DeleteRouteAction(EC2DeleteRouteAction&& value) { SetEC2DeleteRouteAction(std::move(value)); return *this;}


    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2CopyRouteTableAction& GetEC2CopyRouteTableAction() const{ return m_eC2CopyRouteTableAction; }

    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline bool EC2CopyRouteTableActionHasBeenSet() const { return m_eC2CopyRouteTableActionHasBeenSet; }

    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CopyRouteTableAction(const EC2CopyRouteTableAction& value) { m_eC2CopyRouteTableActionHasBeenSet = true; m_eC2CopyRouteTableAction = value; }

    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CopyRouteTableAction(EC2CopyRouteTableAction&& value) { m_eC2CopyRouteTableActionHasBeenSet = true; m_eC2CopyRouteTableAction = std::move(value); }

    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CopyRouteTableAction(const EC2CopyRouteTableAction& value) { SetEC2CopyRouteTableAction(value); return *this;}

    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CopyRouteTableAction(EC2CopyRouteTableAction&& value) { SetEC2CopyRouteTableAction(std::move(value)); return *this;}


    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline const EC2ReplaceRouteTableAssociationAction& GetEC2ReplaceRouteTableAssociationAction() const{ return m_eC2ReplaceRouteTableAssociationAction; }

    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline bool EC2ReplaceRouteTableAssociationActionHasBeenSet() const { return m_eC2ReplaceRouteTableAssociationActionHasBeenSet; }

    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline void SetEC2ReplaceRouteTableAssociationAction(const EC2ReplaceRouteTableAssociationAction& value) { m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true; m_eC2ReplaceRouteTableAssociationAction = value; }

    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline void SetEC2ReplaceRouteTableAssociationAction(EC2ReplaceRouteTableAssociationAction&& value) { m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true; m_eC2ReplaceRouteTableAssociationAction = std::move(value); }

    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline RemediationAction& WithEC2ReplaceRouteTableAssociationAction(const EC2ReplaceRouteTableAssociationAction& value) { SetEC2ReplaceRouteTableAssociationAction(value); return *this;}

    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline RemediationAction& WithEC2ReplaceRouteTableAssociationAction(EC2ReplaceRouteTableAssociationAction&& value) { SetEC2ReplaceRouteTableAssociationAction(std::move(value)); return *this;}


    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2AssociateRouteTableAction& GetEC2AssociateRouteTableAction() const{ return m_eC2AssociateRouteTableAction; }

    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline bool EC2AssociateRouteTableActionHasBeenSet() const { return m_eC2AssociateRouteTableActionHasBeenSet; }

    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2AssociateRouteTableAction(const EC2AssociateRouteTableAction& value) { m_eC2AssociateRouteTableActionHasBeenSet = true; m_eC2AssociateRouteTableAction = value; }

    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2AssociateRouteTableAction(EC2AssociateRouteTableAction&& value) { m_eC2AssociateRouteTableActionHasBeenSet = true; m_eC2AssociateRouteTableAction = std::move(value); }

    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2AssociateRouteTableAction(const EC2AssociateRouteTableAction& value) { SetEC2AssociateRouteTableAction(value); return *this;}

    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2AssociateRouteTableAction(EC2AssociateRouteTableAction&& value) { SetEC2AssociateRouteTableAction(std::move(value)); return *this;}


    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2CreateRouteTableAction& GetEC2CreateRouteTableAction() const{ return m_eC2CreateRouteTableAction; }

    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline bool EC2CreateRouteTableActionHasBeenSet() const { return m_eC2CreateRouteTableActionHasBeenSet; }

    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CreateRouteTableAction(const EC2CreateRouteTableAction& value) { m_eC2CreateRouteTableActionHasBeenSet = true; m_eC2CreateRouteTableAction = value; }

    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline void SetEC2CreateRouteTableAction(EC2CreateRouteTableAction&& value) { m_eC2CreateRouteTableActionHasBeenSet = true; m_eC2CreateRouteTableAction = std::move(value); }

    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CreateRouteTableAction(const EC2CreateRouteTableAction& value) { SetEC2CreateRouteTableAction(value); return *this;}

    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline RemediationAction& WithEC2CreateRouteTableAction(EC2CreateRouteTableAction&& value) { SetEC2CreateRouteTableAction(std::move(value)); return *this;}


    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline const FMSPolicyUpdateFirewallCreationConfigAction& GetFMSPolicyUpdateFirewallCreationConfigAction() const{ return m_fMSPolicyUpdateFirewallCreationConfigAction; }

    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline bool FMSPolicyUpdateFirewallCreationConfigActionHasBeenSet() const { return m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet; }

    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline void SetFMSPolicyUpdateFirewallCreationConfigAction(const FMSPolicyUpdateFirewallCreationConfigAction& value) { m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true; m_fMSPolicyUpdateFirewallCreationConfigAction = value; }

    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline void SetFMSPolicyUpdateFirewallCreationConfigAction(FMSPolicyUpdateFirewallCreationConfigAction&& value) { m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true; m_fMSPolicyUpdateFirewallCreationConfigAction = std::move(value); }

    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline RemediationAction& WithFMSPolicyUpdateFirewallCreationConfigAction(const FMSPolicyUpdateFirewallCreationConfigAction& value) { SetFMSPolicyUpdateFirewallCreationConfigAction(value); return *this;}

    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline RemediationAction& WithFMSPolicyUpdateFirewallCreationConfigAction(FMSPolicyUpdateFirewallCreationConfigAction&& value) { SetFMSPolicyUpdateFirewallCreationConfigAction(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EC2CreateRouteAction m_eC2CreateRouteAction;
    bool m_eC2CreateRouteActionHasBeenSet = false;

    EC2ReplaceRouteAction m_eC2ReplaceRouteAction;
    bool m_eC2ReplaceRouteActionHasBeenSet = false;

    EC2DeleteRouteAction m_eC2DeleteRouteAction;
    bool m_eC2DeleteRouteActionHasBeenSet = false;

    EC2CopyRouteTableAction m_eC2CopyRouteTableAction;
    bool m_eC2CopyRouteTableActionHasBeenSet = false;

    EC2ReplaceRouteTableAssociationAction m_eC2ReplaceRouteTableAssociationAction;
    bool m_eC2ReplaceRouteTableAssociationActionHasBeenSet = false;

    EC2AssociateRouteTableAction m_eC2AssociateRouteTableAction;
    bool m_eC2AssociateRouteTableActionHasBeenSet = false;

    EC2CreateRouteTableAction m_eC2CreateRouteTableAction;
    bool m_eC2CreateRouteTableActionHasBeenSet = false;

    FMSPolicyUpdateFirewallCreationConfigAction m_fMSPolicyUpdateFirewallCreationConfigAction;
    bool m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
