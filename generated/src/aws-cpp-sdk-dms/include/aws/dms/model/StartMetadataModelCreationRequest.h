/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/MetadataModelProperties.h>

#include <utility>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

/**
 */
class StartMetadataModelCreationRequest : public DatabaseMigrationServiceRequest {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelCreationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelCreation"; }

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
  StartMetadataModelCreationRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) {
    SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON string that identifies the source schema for the metadata model. For
   * the selection rule format and examples, see <a
   * href="https://docs.aws.amazon.com/dms/latest/userguide/sc-selection-rules.html">Selection
   * rules in DMS Schema Conversion</a>.</p> <p>Usage:</p> <ul> <li> <p>Accepts only
   * source selection rules, where <code>server-name</code> in the object locator
   * matches the source data provider.</p> </li> <li> <p>Supports only
   * <code>explicit</code> rule actions.</p> </li> <li> <p>Exactly one rule is
   * allowed.</p> </li> </ul>
   */
  inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
  inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
  template <typename SelectionRulesT = Aws::String>
  void SetSelectionRules(SelectionRulesT&& value) {
    m_selectionRulesHasBeenSet = true;
    m_selectionRules = std::forward<SelectionRulesT>(value);
  }
  template <typename SelectionRulesT = Aws::String>
  StartMetadataModelCreationRequest& WithSelectionRules(SelectionRulesT&& value) {
    SetSelectionRules(std::forward<SelectionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the metadata model to use in subsequent operations.</p>
   */
  inline const Aws::String& GetMetadataModelName() const { return m_metadataModelName; }
  inline bool MetadataModelNameHasBeenSet() const { return m_metadataModelNameHasBeenSet; }
  template <typename MetadataModelNameT = Aws::String>
  void SetMetadataModelName(MetadataModelNameT&& value) {
    m_metadataModelNameHasBeenSet = true;
    m_metadataModelName = std::forward<MetadataModelNameT>(value);
  }
  template <typename MetadataModelNameT = Aws::String>
  StartMetadataModelCreationRequest& WithMetadataModelName(MetadataModelNameT&& value) {
    SetMetadataModelName(std::forward<MetadataModelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the metadata model.</p>
   */
  inline const MetadataModelProperties& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = MetadataModelProperties>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = MetadataModelProperties>
  StartMetadataModelCreationRequest& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationProjectIdentifier;

  Aws::String m_selectionRules;

  Aws::String m_metadataModelName;

  MetadataModelProperties m_properties;
  bool m_migrationProjectIdentifierHasBeenSet = false;
  bool m_selectionRulesHasBeenSet = false;
  bool m_metadataModelNameHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
