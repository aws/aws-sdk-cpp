/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FpgaImageAttributeName.h>
#include <aws/ec2/model/OperationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LoadPermissionModifications.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyFpgaImageAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyFpgaImageAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyFpgaImageAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyFpgaImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }
    inline ModifyFpgaImageAttributeRequest& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const FpgaImageAttributeName& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const FpgaImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(FpgaImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithAttribute(const FpgaImageAttributeName& value) { SetAttribute(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithAttribute(FpgaImageAttributeName&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation type.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs. This parameter is valid only when
     * modifying the <code>loadPermission</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user groups. This parameter is valid only when modifying the
     * <code>loadPermission</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product codes. After you add a product code to an AFI, it can't be
     * removed. This parameter is valid only when modifying the
     * <code>productCodes</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<Aws::String>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<Aws::String>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithProductCodes(const Aws::Vector<Aws::String>& value) { SetProductCodes(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithProductCodes(Aws::Vector<Aws::String>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& AddProductCodes(const Aws::String& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddProductCodes(Aws::String&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    inline ModifyFpgaImageAttributeRequest& AddProductCodes(const char* value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load permission for the AFI.</p>
     */
    inline const LoadPermissionModifications& GetLoadPermission() const{ return m_loadPermission; }
    inline bool LoadPermissionHasBeenSet() const { return m_loadPermissionHasBeenSet; }
    inline void SetLoadPermission(const LoadPermissionModifications& value) { m_loadPermissionHasBeenSet = true; m_loadPermission = value; }
    inline void SetLoadPermission(LoadPermissionModifications&& value) { m_loadPermissionHasBeenSet = true; m_loadPermission = std::move(value); }
    inline ModifyFpgaImageAttributeRequest& WithLoadPermission(const LoadPermissionModifications& value) { SetLoadPermission(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithLoadPermission(LoadPermissionModifications&& value) { SetLoadPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the AFI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyFpgaImageAttributeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the AFI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ModifyFpgaImageAttributeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ModifyFpgaImageAttributeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    FpgaImageAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    OperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    LoadPermissionModifications m_loadPermission;
    bool m_loadPermissionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
