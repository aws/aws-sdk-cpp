/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AuditContext.h>
#include <aws/glue/model/QuerySessionContext.h>
#include <aws/glue/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetUnfilteredPartitionMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredPartitionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetUnfilteredPartitionMetadataRequest& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID where the partition resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetUnfilteredPartitionMetadataRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a database that contains the partition.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetUnfilteredPartitionMetadataRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a table that contains the partition.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetUnfilteredPartitionMetadataRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) A list of partition key values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const { return m_partitionValues; }
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    void SetPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::forward<PartitionValuesT>(value); }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    GetUnfilteredPartitionMetadataRequest& WithPartitionValues(PartitionValuesT&& value) { SetPartitionValues(std::forward<PartitionValuesT>(value)); return *this;}
    template<typename PartitionValuesT = Aws::String>
    GetUnfilteredPartitionMetadataRequest& AddPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.emplace_back(std::forward<PartitionValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const { return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    template<typename AuditContextT = AuditContext>
    void SetAuditContext(AuditContextT&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::forward<AuditContextT>(value); }
    template<typename AuditContextT = AuditContext>
    GetUnfilteredPartitionMetadataRequest& WithAuditContext(AuditContextT&& value) { SetAuditContext(std::forward<AuditContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const { return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    void SetSupportedPermissionTypes(SupportedPermissionTypesT&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::forward<SupportedPermissionTypesT>(value); }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    GetUnfilteredPartitionMetadataRequest& WithSupportedPermissionTypes(SupportedPermissionTypesT&& value) { SetSupportedPermissionTypes(std::forward<SupportedPermissionTypesT>(value)); return *this;}
    inline GetUnfilteredPartitionMetadataRequest& AddSupportedPermissionTypes(PermissionType value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const { return m_querySessionContext; }
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }
    template<typename QuerySessionContextT = QuerySessionContext>
    void SetQuerySessionContext(QuerySessionContextT&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::forward<QuerySessionContextT>(value); }
    template<typename QuerySessionContextT = QuerySessionContext>
    GetUnfilteredPartitionMetadataRequest& WithQuerySessionContext(QuerySessionContextT&& value) { SetQuerySessionContext(std::forward<QuerySessionContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;

    QuerySessionContext m_querySessionContext;
    bool m_querySessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
