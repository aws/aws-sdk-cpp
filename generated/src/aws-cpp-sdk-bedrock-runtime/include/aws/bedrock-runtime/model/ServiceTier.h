/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ServiceTierType.h>

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
 * <p>Specifies the processing tier configuration used for serving the
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ServiceTier">AWS
 * API Reference</a></p>
 */
class ServiceTier {
 public:
  AWS_BEDROCKRUNTIME_API ServiceTier() = default;
  AWS_BEDROCKRUNTIME_API ServiceTier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ServiceTier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the processing tier type used for serving the request.</p>
   */
  inline ServiceTierType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ServiceTierType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ServiceTier& WithType(ServiceTierType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  ServiceTierType m_type{ServiceTierType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
