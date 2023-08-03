/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class StartMetadataModelExportToTargetRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportToTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelExportToTarget"; }

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
    inline StartMetadataModelExportToTargetRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}


    /**
     * <p>Whether to overwrite the migration project extension pack. An extension pack
     * is an add-on module that emulates functions present in a source database that
     * are required when converting objects to the target database.</p>
     */
    inline bool GetOverwriteExtensionPack() const{ return m_overwriteExtensionPack; }

    /**
     * <p>Whether to overwrite the migration project extension pack. An extension pack
     * is an add-on module that emulates functions present in a source database that
     * are required when converting objects to the target database.</p>
     */
    inline bool OverwriteExtensionPackHasBeenSet() const { return m_overwriteExtensionPackHasBeenSet; }

    /**
     * <p>Whether to overwrite the migration project extension pack. An extension pack
     * is an add-on module that emulates functions present in a source database that
     * are required when converting objects to the target database.</p>
     */
    inline void SetOverwriteExtensionPack(bool value) { m_overwriteExtensionPackHasBeenSet = true; m_overwriteExtensionPack = value; }

    /**
     * <p>Whether to overwrite the migration project extension pack. An extension pack
     * is an add-on module that emulates functions present in a source database that
     * are required when converting objects to the target database.</p>
     */
    inline StartMetadataModelExportToTargetRequest& WithOverwriteExtensionPack(bool value) { SetOverwriteExtensionPack(value); return *this;}

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;

    bool m_overwriteExtensionPack;
    bool m_overwriteExtensionPackHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
