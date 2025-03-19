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
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelImport"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    template<typename MigrationProjectIdentifierT = Aws::String>
    void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value); }
    template<typename MigrationProjectIdentifierT = Aws::String>
    StartMetadataModelImportRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the database objects to import.</p>
     */
    inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    template<typename SelectionRulesT = Aws::String>
    void SetSelectionRules(SelectionRulesT&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::forward<SelectionRulesT>(value); }
    template<typename SelectionRulesT = Aws::String>
    StartMetadataModelImportRequest& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to load metadata to the source or target database.</p>
     */
    inline OriginTypeValue GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(OriginTypeValue value) { m_originHasBeenSet = true; m_origin = value; }
    inline StartMetadataModelImportRequest& WithOrigin(OriginTypeValue value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, DMS loads metadata for the specified objects from the
     * source database.</p>
     */
    inline bool GetRefresh() const { return m_refresh; }
    inline bool RefreshHasBeenSet() const { return m_refreshHasBeenSet; }
    inline void SetRefresh(bool value) { m_refreshHasBeenSet = true; m_refresh = value; }
    inline StartMetadataModelImportRequest& WithRefresh(bool value) { SetRefresh(value); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;

    OriginTypeValue m_origin{OriginTypeValue::NOT_SET};
    bool m_originHasBeenSet = false;

    bool m_refresh{false};
    bool m_refreshHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
