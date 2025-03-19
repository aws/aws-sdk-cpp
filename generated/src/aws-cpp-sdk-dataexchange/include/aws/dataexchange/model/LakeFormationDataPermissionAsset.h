/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/LakeFormationDataPermissionDetails.h>
#include <aws/dataexchange/model/LakeFormationDataPermissionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/LFPermission.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The AWS Lake Formation data permission asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/LakeFormationDataPermissionAsset">AWS
   * API Reference</a></p>
   */
  class LakeFormationDataPermissionAsset
  {
  public:
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset() = default;
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline const LakeFormationDataPermissionDetails& GetLakeFormationDataPermissionDetails() const { return m_lakeFormationDataPermissionDetails; }
    inline bool LakeFormationDataPermissionDetailsHasBeenSet() const { return m_lakeFormationDataPermissionDetailsHasBeenSet; }
    template<typename LakeFormationDataPermissionDetailsT = LakeFormationDataPermissionDetails>
    void SetLakeFormationDataPermissionDetails(LakeFormationDataPermissionDetailsT&& value) { m_lakeFormationDataPermissionDetailsHasBeenSet = true; m_lakeFormationDataPermissionDetails = std::forward<LakeFormationDataPermissionDetailsT>(value); }
    template<typename LakeFormationDataPermissionDetailsT = LakeFormationDataPermissionDetails>
    LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionDetails(LakeFormationDataPermissionDetailsT&& value) { SetLakeFormationDataPermissionDetails(std::forward<LakeFormationDataPermissionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data permission type.</p>
     */
    inline LakeFormationDataPermissionType GetLakeFormationDataPermissionType() const { return m_lakeFormationDataPermissionType; }
    inline bool LakeFormationDataPermissionTypeHasBeenSet() const { return m_lakeFormationDataPermissionTypeHasBeenSet; }
    inline void SetLakeFormationDataPermissionType(LakeFormationDataPermissionType value) { m_lakeFormationDataPermissionTypeHasBeenSet = true; m_lakeFormationDataPermissionType = value; }
    inline LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionType(LakeFormationDataPermissionType value) { SetLakeFormationDataPermissionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline const Aws::Vector<LFPermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<LFPermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<LFPermission>>
    LakeFormationDataPermissionAsset& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline LakeFormationDataPermissionAsset& AddPermissions(LFPermission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    LakeFormationDataPermissionAsset& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    LakeFormationDataPermissionDetails m_lakeFormationDataPermissionDetails;
    bool m_lakeFormationDataPermissionDetailsHasBeenSet = false;

    LakeFormationDataPermissionType m_lakeFormationDataPermissionType{LakeFormationDataPermissionType::NOT_SET};
    bool m_lakeFormationDataPermissionTypeHasBeenSet = false;

    Aws::Vector<LFPermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
