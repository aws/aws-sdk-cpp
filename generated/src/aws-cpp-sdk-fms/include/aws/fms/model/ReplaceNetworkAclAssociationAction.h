/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
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
   * <p>Information about the <code>ReplaceNetworkAclAssociation</code> action in
   * Amazon EC2. This is a remediation option in
   * <code>RemediationAction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ReplaceNetworkAclAssociationAction">AWS
   * API Reference</a></p>
   */
  class ReplaceNetworkAclAssociationAction
  {
  public:
    AWS_FMS_API ReplaceNetworkAclAssociationAction();
    AWS_FMS_API ReplaceNetworkAclAssociationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ReplaceNetworkAclAssociationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline ReplaceNetworkAclAssociationAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline ReplaceNetworkAclAssociationAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline ReplaceNetworkAclAssociationAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const ActionTarget& GetAssociationId() const{ return m_associationId; }

    
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    
    inline void SetAssociationId(const ActionTarget& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    
    inline void SetAssociationId(ActionTarget&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    
    inline ReplaceNetworkAclAssociationAction& WithAssociationId(const ActionTarget& value) { SetAssociationId(value); return *this;}

    
    inline ReplaceNetworkAclAssociationAction& WithAssociationId(ActionTarget&& value) { SetAssociationId(std::move(value)); return *this;}


    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline const ActionTarget& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }

    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline void SetNetworkAclId(const ActionTarget& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline void SetNetworkAclId(ActionTarget&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }

    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline ReplaceNetworkAclAssociationAction& WithNetworkAclId(const ActionTarget& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline ReplaceNetworkAclAssociationAction& WithNetworkAclId(ActionTarget&& value) { SetNetworkAclId(std::move(value)); return *this;}


    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline bool GetFMSCanRemediate() const{ return m_fMSCanRemediate; }

    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline bool FMSCanRemediateHasBeenSet() const { return m_fMSCanRemediateHasBeenSet; }

    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline void SetFMSCanRemediate(bool value) { m_fMSCanRemediateHasBeenSet = true; m_fMSCanRemediate = value; }

    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline ReplaceNetworkAclAssociationAction& WithFMSCanRemediate(bool value) { SetFMSCanRemediate(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_associationId;
    bool m_associationIdHasBeenSet = false;

    ActionTarget m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    bool m_fMSCanRemediate;
    bool m_fMSCanRemediateHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
