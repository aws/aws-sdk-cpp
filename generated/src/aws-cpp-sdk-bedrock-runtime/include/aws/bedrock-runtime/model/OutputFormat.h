/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/OutputFormatStructure.h>
#include <aws/bedrock-runtime/model/OutputFormatType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p> Structured output parameters to control the model's response. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/OutputFormat">AWS
 * API Reference</a></p>
 */
class OutputFormat {
 public:
  AWS_BEDROCKRUNTIME_API OutputFormat() = default;
  AWS_BEDROCKRUNTIME_API OutputFormat(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API OutputFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of structured output format. </p>
   */
  inline OutputFormatType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OutputFormatType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline OutputFormat& WithType(OutputFormatType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The structure that the model's output must adhere to. </p>
   */
  inline const OutputFormatStructure& GetStructure() const { return m_structure; }
  inline bool StructureHasBeenSet() const { return m_structureHasBeenSet; }
  template <typename StructureT = OutputFormatStructure>
  void SetStructure(StructureT&& value) {
    m_structureHasBeenSet = true;
    m_structure = std::forward<StructureT>(value);
  }
  template <typename StructureT = OutputFormatStructure>
  OutputFormat& WithStructure(StructureT&& value) {
    SetStructure(std::forward<StructureT>(value));
    return *this;
  }
  ///@}
 private:
  OutputFormatType m_type{OutputFormatType::NOT_SET};

  OutputFormatStructure m_structure;
  bool m_typeHasBeenSet = false;
  bool m_structureHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
