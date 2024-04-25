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
   * <p>Information about the <code>CreateNetworkAcl</code> action in Amazon EC2.
   * This is a remediation option in <code>RemediationAction</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/CreateNetworkAclAction">AWS
   * API Reference</a></p>
   */
  class CreateNetworkAclAction
  {
  public:
    AWS_FMS_API CreateNetworkAclAction();
    AWS_FMS_API CreateNetworkAclAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API CreateNetworkAclAction& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CreateNetworkAclAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline CreateNetworkAclAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline CreateNetworkAclAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline const ActionTarget& GetVpc() const{ return m_vpc; }

    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline void SetVpc(const ActionTarget& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline void SetVpc(ActionTarget&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline CreateNetworkAclAction& WithVpc(const ActionTarget& value) { SetVpc(value); return *this;}

    /**
     * <p>The VPC that's associated with the remediation action.</p>
     */
    inline CreateNetworkAclAction& WithVpc(ActionTarget&& value) { SetVpc(std::move(value)); return *this;}


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
    inline CreateNetworkAclAction& WithFMSCanRemediate(bool value) { SetFMSCanRemediate(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_vpc;
    bool m_vpcHasBeenSet = false;

    bool m_fMSCanRemediate;
    bool m_fMSCanRemediateHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
