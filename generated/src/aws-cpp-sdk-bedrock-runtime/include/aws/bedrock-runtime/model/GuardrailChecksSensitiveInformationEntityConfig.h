/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationEntityType.h>

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
 * <p>The configuration for a single sensitive information entity type to
 * detect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksSensitiveInformationEntityConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksSensitiveInformationEntityConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationEntityConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationEntityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationEntityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The PII entity type to detect.</p>
   */
  inline GuardrailChecksSensitiveInformationEntityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(GuardrailChecksSensitiveInformationEntityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GuardrailChecksSensitiveInformationEntityConfig& WithType(GuardrailChecksSensitiveInformationEntityType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  GuardrailChecksSensitiveInformationEntityType m_type{GuardrailChecksSensitiveInformationEntityType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
