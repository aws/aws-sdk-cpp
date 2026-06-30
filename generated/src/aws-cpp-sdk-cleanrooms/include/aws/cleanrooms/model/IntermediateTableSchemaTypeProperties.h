/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the schema type properties for an intermediate table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableSchemaTypeProperties">AWS
 * API Reference</a></p>
 */
class IntermediateTableSchemaTypeProperties {
 public:
  AWS_CLEANROOMS_API IntermediateTableSchemaTypeProperties() = default;
  AWS_CLEANROOMS_API IntermediateTableSchemaTypeProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableSchemaTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the intermediate table.</p>
   */
  inline const Aws::String& GetIntermediateTableId() const { return m_intermediateTableId; }
  inline bool IntermediateTableIdHasBeenSet() const { return m_intermediateTableIdHasBeenSet; }
  template <typename IntermediateTableIdT = Aws::String>
  void SetIntermediateTableId(IntermediateTableIdT&& value) {
    m_intermediateTableIdHasBeenSet = true;
    m_intermediateTableId = std::forward<IntermediateTableIdT>(value);
  }
  template <typename IntermediateTableIdT = Aws::String>
  IntermediateTableSchemaTypeProperties& WithIntermediateTableId(IntermediateTableIdT&& value) {
    SetIntermediateTableId(std::forward<IntermediateTableIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_intermediateTableId;
  bool m_intermediateTableIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
