/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/AuditContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Segment.h>
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
  class GetUnfilteredPartitionsMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredPartitionsMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const Aws::String& GetExpression() const{ return m_expression; }

    
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    
    inline GetUnfilteredPartitionsMetadataRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Segment& GetSegment() const{ return m_segment; }

    
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    
    inline void SetSegment(const Segment& value) { m_segmentHasBeenSet = true; m_segment = value; }

    
    inline void SetSegment(Segment&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    
    inline GetUnfilteredPartitionsMetadataRequest& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline GetUnfilteredPartitionsMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Segment m_segment;
    bool m_segmentHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
