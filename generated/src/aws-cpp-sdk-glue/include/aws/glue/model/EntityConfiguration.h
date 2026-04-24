/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FieldDefinition.h>
#include <aws/glue/model/SourceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines how to interact with a specific data entity
 * through the REST API, including its access patterns and schema
 * definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EntityConfiguration">AWS
 * API Reference</a></p>
 */
class EntityConfiguration {
 public:
  AWS_GLUE_API EntityConfiguration() = default;
  AWS_GLUE_API EntityConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API EntityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source configuration that defines how to make requests to access this
   * entity's data through the REST API.</p>
   */
  inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = SourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = SourceConfiguration>
  EntityConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema definition for this entity, including field names, types, and
   * other metadata that describes the structure of the data.</p>
   */
  inline const Aws::Map<Aws::String, FieldDefinition>& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = Aws::Map<Aws::String, FieldDefinition>>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = Aws::Map<Aws::String, FieldDefinition>>
  EntityConfiguration& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  template <typename SchemaKeyT = Aws::String, typename SchemaValueT = FieldDefinition>
  EntityConfiguration& AddSchema(SchemaKeyT&& key, SchemaValueT&& value) {
    m_schemaHasBeenSet = true;
    m_schema.emplace(std::forward<SchemaKeyT>(key), std::forward<SchemaValueT>(value));
    return *this;
  }
  ///@}
 private:
  SourceConfiguration m_sourceConfiguration;

  Aws::Map<Aws::String, FieldDefinition> m_schema;
  bool m_sourceConfigurationHasBeenSet = false;
  bool m_schemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
