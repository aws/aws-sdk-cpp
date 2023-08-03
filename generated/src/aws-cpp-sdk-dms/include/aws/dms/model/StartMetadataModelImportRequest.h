/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/OriginTypeValue.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class StartMetadataModelImportRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelImport"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelImportRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelImportRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelImportRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline StartMetadataModelImportRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline StartMetadataModelImportRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline StartMetadataModelImportRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}


    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline const OriginTypeValue& GetOrigin() const{ return m_origin; }

    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline void SetOrigin(const OriginTypeValue& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline void SetOrigin(OriginTypeValue&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline StartMetadataModelImportRequest& WithOrigin(const OriginTypeValue& value) { SetOrigin(value); return *this;}

    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline StartMetadataModelImportRequest& WithOrigin(OriginTypeValue&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>If <code>true</code>, DMS loads metadata for the specified objects from the
     * source database.</p>
     */
    inline bool GetRefresh() const{ return m_refresh; }

    /**
     * <p>If <code>true</code>, DMS loads metadata for the specified objects from the
     * source database.</p>
     */
    inline bool RefreshHasBeenSet() const { return m_refreshHasBeenSet; }

    /**
     * <p>If <code>true</code>, DMS loads metadata for the specified objects from the
     * source database.</p>
     */
    inline void SetRefresh(bool value) { m_refreshHasBeenSet = true; m_refresh = value; }

    /**
     * <p>If <code>true</code>, DMS loads metadata for the specified objects from the
     * source database.</p>
     */
    inline StartMetadataModelImportRequest& WithRefresh(bool value) { SetRefresh(value); return *this;}

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;

    OriginTypeValue m_origin;
    bool m_originHasBeenSet = false;

    bool m_refresh;
    bool m_refreshHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
