/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FieldDataType.h>

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
 * <p>Defines a field in an entity schema for REST connector data sources,
 * specifying the field name and data type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FieldDefinition">AWS
 * API Reference</a></p>
 */
class FieldDefinition {
 public:
  AWS_GLUE_API FieldDefinition() = default;
  AWS_GLUE_API FieldDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API FieldDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field in the entity schema.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FieldDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the field.</p>
   */
  inline FieldDataType GetFieldDataType() const { return m_fieldDataType; }
  inline bool FieldDataTypeHasBeenSet() const { return m_fieldDataTypeHasBeenSet; }
  inline void SetFieldDataType(FieldDataType value) {
    m_fieldDataTypeHasBeenSet = true;
    m_fieldDataType = value;
  }
  inline FieldDefinition& WithFieldDataType(FieldDataType value) {
    SetFieldDataType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FieldDataType m_fieldDataType{FieldDataType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_fieldDataTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
