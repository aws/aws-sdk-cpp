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
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset();
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline const LakeFormationDataPermissionDetails& GetLakeFormationDataPermissionDetails() const{ return m_lakeFormationDataPermissionDetails; }

    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline bool LakeFormationDataPermissionDetailsHasBeenSet() const { return m_lakeFormationDataPermissionDetailsHasBeenSet; }

    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline void SetLakeFormationDataPermissionDetails(const LakeFormationDataPermissionDetails& value) { m_lakeFormationDataPermissionDetailsHasBeenSet = true; m_lakeFormationDataPermissionDetails = value; }

    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline void SetLakeFormationDataPermissionDetails(LakeFormationDataPermissionDetails&& value) { m_lakeFormationDataPermissionDetailsHasBeenSet = true; m_lakeFormationDataPermissionDetails = std::move(value); }

    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionDetails(const LakeFormationDataPermissionDetails& value) { SetLakeFormationDataPermissionDetails(value); return *this;}

    /**
     * <p>Details about the AWS Lake Formation data permission.</p>
     */
    inline LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionDetails(LakeFormationDataPermissionDetails&& value) { SetLakeFormationDataPermissionDetails(std::move(value)); return *this;}


    /**
     * <p>The data permission type.</p>
     */
    inline const LakeFormationDataPermissionType& GetLakeFormationDataPermissionType() const{ return m_lakeFormationDataPermissionType; }

    /**
     * <p>The data permission type.</p>
     */
    inline bool LakeFormationDataPermissionTypeHasBeenSet() const { return m_lakeFormationDataPermissionTypeHasBeenSet; }

    /**
     * <p>The data permission type.</p>
     */
    inline void SetLakeFormationDataPermissionType(const LakeFormationDataPermissionType& value) { m_lakeFormationDataPermissionTypeHasBeenSet = true; m_lakeFormationDataPermissionType = value; }

    /**
     * <p>The data permission type.</p>
     */
    inline void SetLakeFormationDataPermissionType(LakeFormationDataPermissionType&& value) { m_lakeFormationDataPermissionTypeHasBeenSet = true; m_lakeFormationDataPermissionType = std::move(value); }

    /**
     * <p>The data permission type.</p>
     */
    inline LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionType(const LakeFormationDataPermissionType& value) { SetLakeFormationDataPermissionType(value); return *this;}

    /**
     * <p>The data permission type.</p>
     */
    inline LakeFormationDataPermissionAsset& WithLakeFormationDataPermissionType(LakeFormationDataPermissionType&& value) { SetLakeFormationDataPermissionType(std::move(value)); return *this;}


    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline const Aws::Vector<LFPermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline void SetPermissions(const Aws::Vector<LFPermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline void SetPermissions(Aws::Vector<LFPermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline LakeFormationDataPermissionAsset& WithPermissions(const Aws::Vector<LFPermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline LakeFormationDataPermissionAsset& WithPermissions(Aws::Vector<LFPermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline LakeFormationDataPermissionAsset& AddPermissions(const LFPermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions granted to the subscribers on the resource.</p>
     */
    inline LakeFormationDataPermissionAsset& AddPermissions(LFPermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline LakeFormationDataPermissionAsset& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline LakeFormationDataPermissionAsset& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role's ARN that allows AWS Data Exchange to assume the role and grant
     * and revoke permissions to AWS Lake Formation data permissions.</p>
     */
    inline LakeFormationDataPermissionAsset& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    LakeFormationDataPermissionDetails m_lakeFormationDataPermissionDetails;
    bool m_lakeFormationDataPermissionDetailsHasBeenSet = false;

    LakeFormationDataPermissionType m_lakeFormationDataPermissionType;
    bool m_lakeFormationDataPermissionTypeHasBeenSet = false;

    Aws::Vector<LFPermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
