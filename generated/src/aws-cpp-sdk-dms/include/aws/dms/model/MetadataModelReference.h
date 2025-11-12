/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {

/**
 * <p>A reference to a metadata model, including its name and selection rules for
 * location identification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MetadataModelReference">AWS
 * API Reference</a></p>
 */
class MetadataModelReference {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelReference() = default;
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the metadata model.</p>
   */
  inline const Aws::String& GetMetadataModelName() const { return m_metadataModelName; }
  inline bool MetadataModelNameHasBeenSet() const { return m_metadataModelNameHasBeenSet; }
  template <typename MetadataModelNameT = Aws::String>
  void SetMetadataModelName(MetadataModelNameT&& value) {
    m_metadataModelNameHasBeenSet = true;
    m_metadataModelName = std::forward<MetadataModelNameT>(value);
  }
  template <typename MetadataModelNameT = Aws::String>
  MetadataModelReference& WithMetadataModelName(MetadataModelNameT&& value) {
    SetMetadataModelName(std::forward<MetadataModelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON string representing metadata model location.</p>
   */
  inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
  inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
  template <typename SelectionRulesT = Aws::String>
  void SetSelectionRules(SelectionRulesT&& value) {
    m_selectionRulesHasBeenSet = true;
    m_selectionRules = std::forward<SelectionRulesT>(value);
  }
  template <typename SelectionRulesT = Aws::String>
  MetadataModelReference& WithSelectionRules(SelectionRulesT&& value) {
    SetSelectionRules(std::forward<SelectionRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataModelName;
  bool m_metadataModelNameHasBeenSet = false;

  Aws::String m_selectionRules;
  bool m_selectionRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
