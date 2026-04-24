/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/StatementProperties.h>

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
 * <p>The properties of metadata model in JSON format. This object is a Union. Only
 * one member of this object can be specified or returned.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MetadataModelProperties">AWS
 * API Reference</a></p>
 */
class MetadataModelProperties {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelProperties() = default;
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API MetadataModelProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The properties of the statement.</p>
   */
  inline const StatementProperties& GetStatementProperties() const { return m_statementProperties; }
  inline bool StatementPropertiesHasBeenSet() const { return m_statementPropertiesHasBeenSet; }
  template <typename StatementPropertiesT = StatementProperties>
  void SetStatementProperties(StatementPropertiesT&& value) {
    m_statementPropertiesHasBeenSet = true;
    m_statementProperties = std::forward<StatementPropertiesT>(value);
  }
  template <typename StatementPropertiesT = StatementProperties>
  MetadataModelProperties& WithStatementProperties(StatementPropertiesT&& value) {
    SetStatementProperties(std::forward<StatementPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  StatementProperties m_statementProperties;
  bool m_statementPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
