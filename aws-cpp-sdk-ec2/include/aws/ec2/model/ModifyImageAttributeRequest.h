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
  class AWS_EC2_API ModifyImageAttributeRequest : public EC2Request
  {
  public:
    ModifyImageAttributeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyImageAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute to modify. The valid values are
     * <code>description</code>, <code>launchPermission</code>, and
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithAttribute(const char* value) { SetAttribute(value); return *this;}


    /**
     * <p>A new description for the AMI.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the AMI.</p>
     */
    inline void SetDescription(const AttributeValue& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the AMI.</p>
     */
    inline void SetDescription(AttributeValue&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}


    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline const LaunchPermissionModifications& GetLaunchPermission() const{ return m_launchPermission; }

    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline void SetLaunchPermission(const LaunchPermissionModifications& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = value; }

    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline void SetLaunchPermission(LaunchPermissionModifications&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::move(value); }

    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithLaunchPermission(const LaunchPermissionModifications& value) { SetLaunchPermission(value); return *this;}

    /**
     * <p>A new launch permission for the AMI.</p>
     */
    inline ModifyImageAttributeRequest& WithLaunchPermission(LaunchPermissionModifications&& value) { SetLaunchPermission(std::move(value)); return *this;}


    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>The operation type. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline void SetProductCodes(const Aws::Vector<Aws::String>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline void SetProductCodes(Aws::Vector<Aws::String>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline ModifyImageAttributeRequest& WithProductCodes(const Aws::Vector<Aws::String>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline ModifyImageAttributeRequest& WithProductCodes(Aws::Vector<Aws::String>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline ModifyImageAttributeRequest& AddProductCodes(const Aws::String& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline ModifyImageAttributeRequest& AddProductCodes(Aws::String&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more DevPay product codes. After you add a product code to an AMI, it
     * can't be removed.</p>
     */
    inline ModifyImageAttributeRequest& AddProductCodes(const char* value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }


    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more user groups. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }


    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AWS account IDs. This parameter can be used only when the
     * <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
     */
    inline ModifyImageAttributeRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute being modified. This parameter can be used only
     * when the <code>Attribute</code> parameter is <code>description</code> or
     * <code>productCodes</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet;

    AttributeValue m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    LaunchPermissionModifications m_launchPermission;
    bool m_launchPermissionHasBeenSet;

    OperationType m_operationType;
    bool m_operationTypeHasBeenSet;

    Aws::Vector<Aws::String> m_productCodes;
    bool m_productCodesHasBeenSet;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
