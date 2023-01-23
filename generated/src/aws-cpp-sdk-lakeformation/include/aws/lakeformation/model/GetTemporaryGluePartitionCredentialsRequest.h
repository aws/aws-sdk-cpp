/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/PartitionValueList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/AuditContext.h>
#include <aws/lakeformation/model/Permission.h>
#include <aws/lakeformation/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetTemporaryGluePartitionCredentialsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetTemporaryGluePartitionCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemporaryGluePartitionCredentials"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the partitions' table.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline const PartitionValueList& GetPartition() const{ return m_partition; }

    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline void SetPartition(const PartitionValueList& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline void SetPartition(PartitionValueList&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithPartition(const PartitionValueList& value) { SetPartition(value); return *this;}

    /**
     * <p>A list of partition values identifying a single partition.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithPartition(PartitionValueList&& value) { SetPartition(std::move(value)); return *this;}


    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    /**
     * <p>A list of supported permission types for the partition. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGluePartitionCredentialsRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    PartitionValueList m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
