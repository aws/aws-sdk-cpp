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
#include <aws/fms/model/CreateNetworkAclAction.h>
#include <aws/fms/model/ReplaceNetworkAclAssociationAction.h>
#include <aws/fms/model/CreateNetworkAclEntriesAction.h>
#include <aws/fms/model/DeleteNetworkAclEntriesAction.h>
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
    AWS_FMS_API RemediationAction() = default;
    AWS_FMS_API RemediationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RemediationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of a remediation action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RemediationAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the CreateRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2CreateRouteAction& GetEC2CreateRouteAction() const { return m_eC2CreateRouteAction; }
    inline bool EC2CreateRouteActionHasBeenSet() const { return m_eC2CreateRouteActionHasBeenSet; }
    template<typename EC2CreateRouteActionT = EC2CreateRouteAction>
    void SetEC2CreateRouteAction(EC2CreateRouteActionT&& value) { m_eC2CreateRouteActionHasBeenSet = true; m_eC2CreateRouteAction = std::forward<EC2CreateRouteActionT>(value); }
    template<typename EC2CreateRouteActionT = EC2CreateRouteAction>
    RemediationAction& WithEC2CreateRouteAction(EC2CreateRouteActionT&& value) { SetEC2CreateRouteAction(std::forward<EC2CreateRouteActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ReplaceRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2ReplaceRouteAction& GetEC2ReplaceRouteAction() const { return m_eC2ReplaceRouteAction; }
    inline bool EC2ReplaceRouteActionHasBeenSet() const { return m_eC2ReplaceRouteActionHasBeenSet; }
    template<typename EC2ReplaceRouteActionT = EC2ReplaceRouteAction>
    void SetEC2ReplaceRouteAction(EC2ReplaceRouteActionT&& value) { m_eC2ReplaceRouteActionHasBeenSet = true; m_eC2ReplaceRouteAction = std::forward<EC2ReplaceRouteActionT>(value); }
    template<typename EC2ReplaceRouteActionT = EC2ReplaceRouteAction>
    RemediationAction& WithEC2ReplaceRouteAction(EC2ReplaceRouteActionT&& value) { SetEC2ReplaceRouteAction(std::forward<EC2ReplaceRouteActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DeleteRoute action in the Amazon EC2 API.</p>
     */
    inline const EC2DeleteRouteAction& GetEC2DeleteRouteAction() const { return m_eC2DeleteRouteAction; }
    inline bool EC2DeleteRouteActionHasBeenSet() const { return m_eC2DeleteRouteActionHasBeenSet; }
    template<typename EC2DeleteRouteActionT = EC2DeleteRouteAction>
    void SetEC2DeleteRouteAction(EC2DeleteRouteActionT&& value) { m_eC2DeleteRouteActionHasBeenSet = true; m_eC2DeleteRouteAction = std::forward<EC2DeleteRouteActionT>(value); }
    template<typename EC2DeleteRouteActionT = EC2DeleteRouteAction>
    RemediationAction& WithEC2DeleteRouteAction(EC2DeleteRouteActionT&& value) { SetEC2DeleteRouteAction(std::forward<EC2DeleteRouteActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the CopyRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2CopyRouteTableAction& GetEC2CopyRouteTableAction() const { return m_eC2CopyRouteTableAction; }
    inline bool EC2CopyRouteTableActionHasBeenSet() const { return m_eC2CopyRouteTableActionHasBeenSet; }
    template<typename EC2CopyRouteTableActionT = EC2CopyRouteTableAction>
    void SetEC2CopyRouteTableAction(EC2CopyRouteTableActionT&& value) { m_eC2CopyRouteTableActionHasBeenSet = true; m_eC2CopyRouteTableAction = std::forward<EC2CopyRouteTableActionT>(value); }
    template<typename EC2CopyRouteTableActionT = EC2CopyRouteTableAction>
    RemediationAction& WithEC2CopyRouteTableAction(EC2CopyRouteTableActionT&& value) { SetEC2CopyRouteTableAction(std::forward<EC2CopyRouteTableActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ReplaceRouteTableAssociation action in the Amazon EC2
     * API.</p>
     */
    inline const EC2ReplaceRouteTableAssociationAction& GetEC2ReplaceRouteTableAssociationAction() const { return m_eC2ReplaceRouteTableAssociationAction; }
    inline bool EC2ReplaceRouteTableAssociationActionHasBeenSet() const { return m_eC2ReplaceRouteTableAssociationActionHasBeenSet; }
    template<typename EC2ReplaceRouteTableAssociationActionT = EC2ReplaceRouteTableAssociationAction>
    void SetEC2ReplaceRouteTableAssociationAction(EC2ReplaceRouteTableAssociationActionT&& value) { m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true; m_eC2ReplaceRouteTableAssociationAction = std::forward<EC2ReplaceRouteTableAssociationActionT>(value); }
    template<typename EC2ReplaceRouteTableAssociationActionT = EC2ReplaceRouteTableAssociationAction>
    RemediationAction& WithEC2ReplaceRouteTableAssociationAction(EC2ReplaceRouteTableAssociationActionT&& value) { SetEC2ReplaceRouteTableAssociationAction(std::forward<EC2ReplaceRouteTableAssociationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the AssociateRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2AssociateRouteTableAction& GetEC2AssociateRouteTableAction() const { return m_eC2AssociateRouteTableAction; }
    inline bool EC2AssociateRouteTableActionHasBeenSet() const { return m_eC2AssociateRouteTableActionHasBeenSet; }
    template<typename EC2AssociateRouteTableActionT = EC2AssociateRouteTableAction>
    void SetEC2AssociateRouteTableAction(EC2AssociateRouteTableActionT&& value) { m_eC2AssociateRouteTableActionHasBeenSet = true; m_eC2AssociateRouteTableAction = std::forward<EC2AssociateRouteTableActionT>(value); }
    template<typename EC2AssociateRouteTableActionT = EC2AssociateRouteTableAction>
    RemediationAction& WithEC2AssociateRouteTableAction(EC2AssociateRouteTableActionT&& value) { SetEC2AssociateRouteTableAction(std::forward<EC2AssociateRouteTableActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the CreateRouteTable action in the Amazon EC2 API.</p>
     */
    inline const EC2CreateRouteTableAction& GetEC2CreateRouteTableAction() const { return m_eC2CreateRouteTableAction; }
    inline bool EC2CreateRouteTableActionHasBeenSet() const { return m_eC2CreateRouteTableActionHasBeenSet; }
    template<typename EC2CreateRouteTableActionT = EC2CreateRouteTableAction>
    void SetEC2CreateRouteTableAction(EC2CreateRouteTableActionT&& value) { m_eC2CreateRouteTableActionHasBeenSet = true; m_eC2CreateRouteTableAction = std::forward<EC2CreateRouteTableActionT>(value); }
    template<typename EC2CreateRouteTableActionT = EC2CreateRouteTableAction>
    RemediationAction& WithEC2CreateRouteTableAction(EC2CreateRouteTableActionT&& value) { SetEC2CreateRouteTableAction(std::forward<EC2CreateRouteTableActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remedial action to take when updating a firewall configuration.</p>
     */
    inline const FMSPolicyUpdateFirewallCreationConfigAction& GetFMSPolicyUpdateFirewallCreationConfigAction() const { return m_fMSPolicyUpdateFirewallCreationConfigAction; }
    inline bool FMSPolicyUpdateFirewallCreationConfigActionHasBeenSet() const { return m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet; }
    template<typename FMSPolicyUpdateFirewallCreationConfigActionT = FMSPolicyUpdateFirewallCreationConfigAction>
    void SetFMSPolicyUpdateFirewallCreationConfigAction(FMSPolicyUpdateFirewallCreationConfigActionT&& value) { m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true; m_fMSPolicyUpdateFirewallCreationConfigAction = std::forward<FMSPolicyUpdateFirewallCreationConfigActionT>(value); }
    template<typename FMSPolicyUpdateFirewallCreationConfigActionT = FMSPolicyUpdateFirewallCreationConfigAction>
    RemediationAction& WithFMSPolicyUpdateFirewallCreationConfigAction(FMSPolicyUpdateFirewallCreationConfigActionT&& value) { SetFMSPolicyUpdateFirewallCreationConfigAction(std::forward<FMSPolicyUpdateFirewallCreationConfigActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the <code>CreateNetworkAcl</code> action in Amazon EC2.</p>
     */
    inline const CreateNetworkAclAction& GetCreateNetworkAclAction() const { return m_createNetworkAclAction; }
    inline bool CreateNetworkAclActionHasBeenSet() const { return m_createNetworkAclActionHasBeenSet; }
    template<typename CreateNetworkAclActionT = CreateNetworkAclAction>
    void SetCreateNetworkAclAction(CreateNetworkAclActionT&& value) { m_createNetworkAclActionHasBeenSet = true; m_createNetworkAclAction = std::forward<CreateNetworkAclActionT>(value); }
    template<typename CreateNetworkAclActionT = CreateNetworkAclAction>
    RemediationAction& WithCreateNetworkAclAction(CreateNetworkAclActionT&& value) { SetCreateNetworkAclAction(std::forward<CreateNetworkAclActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the <code>ReplaceNetworkAclAssociation</code> action in
     * Amazon EC2. </p>
     */
    inline const ReplaceNetworkAclAssociationAction& GetReplaceNetworkAclAssociationAction() const { return m_replaceNetworkAclAssociationAction; }
    inline bool ReplaceNetworkAclAssociationActionHasBeenSet() const { return m_replaceNetworkAclAssociationActionHasBeenSet; }
    template<typename ReplaceNetworkAclAssociationActionT = ReplaceNetworkAclAssociationAction>
    void SetReplaceNetworkAclAssociationAction(ReplaceNetworkAclAssociationActionT&& value) { m_replaceNetworkAclAssociationActionHasBeenSet = true; m_replaceNetworkAclAssociationAction = std::forward<ReplaceNetworkAclAssociationActionT>(value); }
    template<typename ReplaceNetworkAclAssociationActionT = ReplaceNetworkAclAssociationAction>
    RemediationAction& WithReplaceNetworkAclAssociationAction(ReplaceNetworkAclAssociationActionT&& value) { SetReplaceNetworkAclAssociationAction(std::forward<ReplaceNetworkAclAssociationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the <code>CreateNetworkAclEntries</code> action in Amazon
     * EC2.</p>
     */
    inline const CreateNetworkAclEntriesAction& GetCreateNetworkAclEntriesAction() const { return m_createNetworkAclEntriesAction; }
    inline bool CreateNetworkAclEntriesActionHasBeenSet() const { return m_createNetworkAclEntriesActionHasBeenSet; }
    template<typename CreateNetworkAclEntriesActionT = CreateNetworkAclEntriesAction>
    void SetCreateNetworkAclEntriesAction(CreateNetworkAclEntriesActionT&& value) { m_createNetworkAclEntriesActionHasBeenSet = true; m_createNetworkAclEntriesAction = std::forward<CreateNetworkAclEntriesActionT>(value); }
    template<typename CreateNetworkAclEntriesActionT = CreateNetworkAclEntriesAction>
    RemediationAction& WithCreateNetworkAclEntriesAction(CreateNetworkAclEntriesActionT&& value) { SetCreateNetworkAclEntriesAction(std::forward<CreateNetworkAclEntriesActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the <code>DeleteNetworkAclEntries</code> action in Amazon
     * EC2.</p>
     */
    inline const DeleteNetworkAclEntriesAction& GetDeleteNetworkAclEntriesAction() const { return m_deleteNetworkAclEntriesAction; }
    inline bool DeleteNetworkAclEntriesActionHasBeenSet() const { return m_deleteNetworkAclEntriesActionHasBeenSet; }
    template<typename DeleteNetworkAclEntriesActionT = DeleteNetworkAclEntriesAction>
    void SetDeleteNetworkAclEntriesAction(DeleteNetworkAclEntriesActionT&& value) { m_deleteNetworkAclEntriesActionHasBeenSet = true; m_deleteNetworkAclEntriesAction = std::forward<DeleteNetworkAclEntriesActionT>(value); }
    template<typename DeleteNetworkAclEntriesActionT = DeleteNetworkAclEntriesAction>
    RemediationAction& WithDeleteNetworkAclEntriesAction(DeleteNetworkAclEntriesActionT&& value) { SetDeleteNetworkAclEntriesAction(std::forward<DeleteNetworkAclEntriesActionT>(value)); return *this;}
    ///@}
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

    CreateNetworkAclAction m_createNetworkAclAction;
    bool m_createNetworkAclActionHasBeenSet = false;

    ReplaceNetworkAclAssociationAction m_replaceNetworkAclAssociationAction;
    bool m_replaceNetworkAclAssociationActionHasBeenSet = false;

    CreateNetworkAclEntriesAction m_createNetworkAclEntriesAction;
    bool m_createNetworkAclEntriesActionHasBeenSet = false;

    DeleteNetworkAclEntriesAction m_deleteNetworkAclEntriesAction;
    bool m_deleteNetworkAclEntriesActionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
