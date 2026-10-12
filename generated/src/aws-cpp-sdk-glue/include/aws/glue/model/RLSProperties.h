/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
 * <p>A structure that describes the default row-level security policy of a
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RLSProperties">AWS
 * API Reference</a></p>
 */
class RLSProperties {
 public:
  AWS_GLUE_API RLSProperties() = default;
  AWS_GLUE_API RLSProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API RLSProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the default row-level security policy applied to the table.</p>
   */
  inline const Aws::String& GetDefaultRLSPolicy() const { return m_defaultRLSPolicy; }
  inline bool DefaultRLSPolicyHasBeenSet() const { return m_defaultRLSPolicyHasBeenSet; }
  template <typename DefaultRLSPolicyT = Aws::String>
  void SetDefaultRLSPolicy(DefaultRLSPolicyT&& value) {
    m_defaultRLSPolicyHasBeenSet = true;
    m_defaultRLSPolicy = std::forward<DefaultRLSPolicyT>(value);
  }
  template <typename DefaultRLSPolicyT = Aws::String>
  RLSProperties& WithDefaultRLSPolicy(DefaultRLSPolicyT&& value) {
    SetDefaultRLSPolicy(std::forward<DefaultRLSPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_defaultRLSPolicy;
  bool m_defaultRLSPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
