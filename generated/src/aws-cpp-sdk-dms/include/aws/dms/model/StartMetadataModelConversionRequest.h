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
  class StartMetadataModelConversionRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelConversionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelConversion"; }

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
    inline StartMetadataModelConversionRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelConversionRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline StartMetadataModelConversionRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline StartMetadataModelConversionRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline StartMetadataModelConversionRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the database objects to convert.</p>
     */
    inline StartMetadataModelConversionRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
