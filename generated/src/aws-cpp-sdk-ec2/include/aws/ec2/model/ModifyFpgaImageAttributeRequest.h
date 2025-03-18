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
    AWS_EC2_API ModifyFpgaImageAttributeRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyFpgaImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const { return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    template<typename FpgaImageIdT = Aws::String>
    void SetFpgaImageId(FpgaImageIdT&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::forward<FpgaImageIdT>(value); }
    template<typename FpgaImageIdT = Aws::String>
    ModifyFpgaImageAttributeRequest& WithFpgaImageId(FpgaImageIdT&& value) { SetFpgaImageId(std::forward<FpgaImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline FpgaImageAttributeName GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(FpgaImageAttributeName value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline ModifyFpgaImageAttributeRequest& WithAttribute(FpgaImageAttributeName value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation type.</p>
     */
    inline OperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(OperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline ModifyFpgaImageAttributeRequest& WithOperationType(OperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs. This parameter is valid only when
     * modifying the <code>loadPermission</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    ModifyFpgaImageAttributeRequest& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    ModifyFpgaImageAttributeRequest& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user groups. This parameter is valid only when modifying the
     * <code>loadPermission</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const { return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    ModifyFpgaImageAttributeRequest& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    template<typename UserGroupsT = Aws::String>
    ModifyFpgaImageAttributeRequest& AddUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups.emplace_back(std::forward<UserGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product codes. After you add a product code to an AFI, it can't be
     * removed. This parameter is valid only when modifying the
     * <code>productCodes</code> attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<Aws::String>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<Aws::String>>
    ModifyFpgaImageAttributeRequest& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = Aws::String>
    ModifyFpgaImageAttributeRequest& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load permission for the AFI.</p>
     */
    inline const LoadPermissionModifications& GetLoadPermission() const { return m_loadPermission; }
    inline bool LoadPermissionHasBeenSet() const { return m_loadPermissionHasBeenSet; }
    template<typename LoadPermissionT = LoadPermissionModifications>
    void SetLoadPermission(LoadPermissionT&& value) { m_loadPermissionHasBeenSet = true; m_loadPermission = std::forward<LoadPermissionT>(value); }
    template<typename LoadPermissionT = LoadPermissionModifications>
    ModifyFpgaImageAttributeRequest& WithLoadPermission(LoadPermissionT&& value) { SetLoadPermission(std::forward<LoadPermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the AFI.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyFpgaImageAttributeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the AFI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ModifyFpgaImageAttributeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    FpgaImageAttributeName m_attribute{FpgaImageAttributeName::NOT_SET};
    bool m_attributeHasBeenSet = false;

    OperationType m_operationType{OperationType::NOT_SET};
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
