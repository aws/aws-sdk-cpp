/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/LaunchPermissionModifications.h>
#include <aws/ec2/model/OperationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyImageAttribute.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyImageAttributeRequest">AWS
   * API Reference</a></p>
   */
  class ModifyImageAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyImageAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyImageAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the attribute to modify.</p> <p>Valid values:
     * <code>description</code> | <code>imdsSupport</code> |
     * <code>launchPermission</code> </p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    ModifyImageAttributeRequest& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the AMI.</p>
     */
    inline const AttributeValue& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = AttributeValue>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = AttributeValue>
    ModifyImageAttributeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ModifyImageAttributeRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline const LaunchPermissionModifications& GetLaunchPermission() const { return m_launchPermission; }
    inline bool LaunchPermissionHasBeenSet() const { return m_launchPermissionHasBeenSet; }
    template<typename LaunchPermissionT = LaunchPermissionModifications>
    void SetLaunchPermission(LaunchPermissionT&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::forward<LaunchPermissionT>(value); }
    template<typename LaunchPermissionT = LaunchPermissionModifications>
    ModifyImageAttributeRequest& WithLaunchPermission(LaunchPermissionT&& value) { SetLaunchPermission(std::forward<LaunchPermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline OperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(OperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline ModifyImageAttributeRequest& WithOperationType(OperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<Aws::String>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<Aws::String>>
    ModifyImageAttributeRequest& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = Aws::String>
    ModifyImageAttributeRequest& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const { return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    ModifyImageAttributeRequest& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    template<typename UserGroupsT = Aws::String>
    ModifyImageAttributeRequest& AddUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups.emplace_back(std::forward<UserGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    ModifyImageAttributeRequest& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    ModifyImageAttributeRequest& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>imdsSupport</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ModifyImageAttributeRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization. This parameter can be used
     * only when the <code>Attribute</code> parameter is
     * <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationArns() const { return m_organizationArns; }
    inline bool OrganizationArnsHasBeenSet() const { return m_organizationArnsHasBeenSet; }
    template<typename OrganizationArnsT = Aws::Vector<Aws::String>>
    void SetOrganizationArns(OrganizationArnsT&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = std::forward<OrganizationArnsT>(value); }
    template<typename OrganizationArnsT = Aws::Vector<Aws::String>>
    ModifyImageAttributeRequest& WithOrganizationArns(OrganizationArnsT&& value) { SetOrganizationArns(std::forward<OrganizationArnsT>(value)); return *this;}
    template<typename OrganizationArnsT = Aws::String>
    ModifyImageAttributeRequest& AddOrganizationArns(OrganizationArnsT&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.emplace_back(std::forward<OrganizationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organizational unit (OU). This parameter
     * can be used only when the <code>Attribute</code> parameter is
     * <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitArns() const { return m_organizationalUnitArns; }
    inline bool OrganizationalUnitArnsHasBeenSet() const { return m_organizationalUnitArnsHasBeenSet; }
    template<typename OrganizationalUnitArnsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = std::forward<OrganizationalUnitArnsT>(value); }
    template<typename OrganizationalUnitArnsT = Aws::Vector<Aws::String>>
    ModifyImageAttributeRequest& WithOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { SetOrganizationalUnitArns(std::forward<OrganizationalUnitArnsT>(value)); return *this;}
    template<typename OrganizationalUnitArnsT = Aws::String>
    ModifyImageAttributeRequest& AddOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.emplace_back(std::forward<OrganizationalUnitArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to <code>v2.0</code> to indicate that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>  <p>Do not use
     * this parameter unless your AMI software supports IMDSv2. After you set the value
     * to <code>v2.0</code>, you can't undo it. The only way to “reset” your AMI is to
     * create a new AMI from the underlying snapshot.</p> 
     */
    inline const AttributeValue& GetImdsSupport() const { return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    template<typename ImdsSupportT = AttributeValue>
    void SetImdsSupport(ImdsSupportT&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::forward<ImdsSupportT>(value); }
    template<typename ImdsSupportT = AttributeValue>
    ModifyImageAttributeRequest& WithImdsSupport(ImdsSupportT&& value) { SetImdsSupport(std::forward<ImdsSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    AttributeValue m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    LaunchPermissionModifications m_launchPermission;
    bool m_launchPermissionHasBeenSet = false;

    OperationType m_operationType{OperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationArns;
    bool m_organizationArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitArns;
    bool m_organizationalUnitArnsHasBeenSet = false;

    AttributeValue m_imdsSupport;
    bool m_imdsSupportHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
