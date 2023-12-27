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
  class StartMetadataModelExportAsScriptRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportAsScriptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelExportAsScript"; }

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
    inline StartMetadataModelExportAsScriptRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


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
    inline StartMetadataModelExportAsScriptRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the database objects to export.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}


    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline const OriginTypeValue& GetOrigin() const{ return m_origin; }

    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline void SetOrigin(const OriginTypeValue& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline void SetOrigin(OriginTypeValue&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithOrigin(const OriginTypeValue& value) { SetOrigin(value); return *this;}

    /**
     * <p>Whether to export the metadata model from the source or the target.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithOrigin(OriginTypeValue&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the model file to create in the Amazon S3 bucket.</p>
     */
    inline StartMetadataModelExportAsScriptRequest& WithFileName(const char* value) { SetFileName(value); return *this;}

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;

    OriginTypeValue m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
