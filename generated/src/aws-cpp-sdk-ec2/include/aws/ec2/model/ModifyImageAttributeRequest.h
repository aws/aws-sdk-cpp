﻿/**
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
    AWS_EC2_API ModifyImageAttributeRequest();

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
    inline const Aws::String& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }
    inline ModifyImageAttributeRequest& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}
    inline ModifyImageAttributeRequest& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& WithAttribute(const char* value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the AMI.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const AttributeValue& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(AttributeValue&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline ModifyImageAttributeRequest& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}
    inline ModifyImageAttributeRequest& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ModifyImageAttributeRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ModifyImageAttributeRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline const LaunchPermissionModifications& GetLaunchPermission() const{ return m_launchPermission; }
    inline bool LaunchPermissionHasBeenSet() const { return m_launchPermissionHasBeenSet; }
    inline void SetLaunchPermission(const LaunchPermissionModifications& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = value; }
    inline void SetLaunchPermission(LaunchPermissionModifications&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::move(value); }
    inline ModifyImageAttributeRequest& WithLaunchPermission(const LaunchPermissionModifications& value) { SetLaunchPermission(value); return *this;}
    inline ModifyImageAttributeRequest& WithLaunchPermission(LaunchPermissionModifications&& value) { SetLaunchPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline ModifyImageAttributeRequest& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}
    inline ModifyImageAttributeRequest& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<Aws::String>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<Aws::String>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline ModifyImageAttributeRequest& WithProductCodes(const Aws::Vector<Aws::String>& value) { SetProductCodes(value); return *this;}
    inline ModifyImageAttributeRequest& WithProductCodes(Aws::Vector<Aws::String>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& AddProductCodes(const Aws::String& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline ModifyImageAttributeRequest& AddProductCodes(Aws::String&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    inline ModifyImageAttributeRequest& AddProductCodes(const char* value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }
    inline ModifyImageAttributeRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}
    inline ModifyImageAttributeRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    inline ModifyImageAttributeRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }
    inline ModifyImageAttributeRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline ModifyImageAttributeRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline ModifyImageAttributeRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline ModifyImageAttributeRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline ModifyImageAttributeRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>imdsSupport</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ModifyImageAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ModifyImageAttributeRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization. This parameter can be used
     * only when the <code>Attribute</code> parameter is
     * <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationArns() const{ return m_organizationArns; }
    inline bool OrganizationArnsHasBeenSet() const { return m_organizationArnsHasBeenSet; }
    inline void SetOrganizationArns(const Aws::Vector<Aws::String>& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = value; }
    inline void SetOrganizationArns(Aws::Vector<Aws::String>&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = std::move(value); }
    inline ModifyImageAttributeRequest& WithOrganizationArns(const Aws::Vector<Aws::String>& value) { SetOrganizationArns(value); return *this;}
    inline ModifyImageAttributeRequest& WithOrganizationArns(Aws::Vector<Aws::String>&& value) { SetOrganizationArns(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& AddOrganizationArns(const Aws::String& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(value); return *this; }
    inline ModifyImageAttributeRequest& AddOrganizationArns(Aws::String&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(std::move(value)); return *this; }
    inline ModifyImageAttributeRequest& AddOrganizationArns(const char* value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organizational unit (OU). This parameter
     * can be used only when the <code>Attribute</code> parameter is
     * <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitArns() const{ return m_organizationalUnitArns; }
    inline bool OrganizationalUnitArnsHasBeenSet() const { return m_organizationalUnitArnsHasBeenSet; }
    inline void SetOrganizationalUnitArns(const Aws::Vector<Aws::String>& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = value; }
    inline void SetOrganizationalUnitArns(Aws::Vector<Aws::String>&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = std::move(value); }
    inline ModifyImageAttributeRequest& WithOrganizationalUnitArns(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitArns(value); return *this;}
    inline ModifyImageAttributeRequest& WithOrganizationalUnitArns(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitArns(std::move(value)); return *this;}
    inline ModifyImageAttributeRequest& AddOrganizationalUnitArns(const Aws::String& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(value); return *this; }
    inline ModifyImageAttributeRequest& AddOrganizationalUnitArns(Aws::String&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(std::move(value)); return *this; }
    inline ModifyImageAttributeRequest& AddOrganizationalUnitArns(const char* value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(value); return *this; }
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
    inline const AttributeValue& GetImdsSupport() const{ return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    inline void SetImdsSupport(const AttributeValue& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }
    inline void SetImdsSupport(AttributeValue&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::move(value); }
    inline ModifyImageAttributeRequest& WithImdsSupport(const AttributeValue& value) { SetImdsSupport(value); return *this;}
    inline ModifyImageAttributeRequest& WithImdsSupport(AttributeValue&& value) { SetImdsSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
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

    OperationType m_operationType;
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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
