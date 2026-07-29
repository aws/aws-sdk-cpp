/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/OriginTypeValue.h>

#include <utility>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

/**
 */
class StartMetadataModelExportAsScriptRequest : public DatabaseMigrationServiceRequest {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportAsScriptRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelExportAsScript"; }

  AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

  AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The migration project name or Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
  inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
  template <typename MigrationProjectIdentifierT = Aws::String>
  void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) {
    m_migrationProjectIdentifierHasBeenSet = true;
    m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value);
  }
  template <typename MigrationProjectIdentifierT = Aws::String>
  StartMetadataModelExportAsScriptRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) {
    SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON string that identifies the metadata models to export as a SQL script.
   * For the selection rule format and examples, see <a
   * href="https://docs.aws.amazon.com/dms/latest/userguide/sc-selection-rules.html">Selection
   * rules in DMS Schema Conversion</a>.</p> <p>Usage:</p> <ul> <li> <p>Accepts
   * source or target selection rules depending on the <code>Origin</code> parameter.
   * The <code>server-name</code> in the object locator must match the corresponding
   * data provider.</p> </li> <li> <p>Supports <code>explicit</code>,
   * <code>include</code>, and <code>exclude</code> rule actions.</p> </li> </ul>
   */
  inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
  inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
  template <typename SelectionRulesT = Aws::String>
  void SetSelectionRules(SelectionRulesT&& value) {
    m_selectionRulesHasBeenSet = true;
    m_selectionRules = std::forward<SelectionRulesT>(value);
  }
  template <typename SelectionRulesT = Aws::String>
  StartMetadataModelExportAsScriptRequest& WithSelectionRules(SelectionRulesT&& value) {
    SetSelectionRules(std::forward<SelectionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the metadata tree to export from.</p>
   */
  inline OriginTypeValue GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  inline void SetOrigin(OriginTypeValue value) {
    m_originHasBeenSet = true;
    m_origin = value;
  }
  inline StartMetadataModelExportAsScriptRequest& WithOrigin(OriginTypeValue value) {
    SetOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the exported file. When you omit this parameter, the service
   * generates a name from the data provider engine name and an export timestamp.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  StartMetadataModelExportAsScriptRequest& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationProjectIdentifier;

  Aws::String m_selectionRules;

  OriginTypeValue m_origin{OriginTypeValue::NOT_SET};

  Aws::String m_fileName;
  bool m_migrationProjectIdentifierHasBeenSet = false;
  bool m_selectionRulesHasBeenSet = false;
  bool m_originHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
