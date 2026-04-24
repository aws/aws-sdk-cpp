/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/ExperimentalCapabilitiesEnablementType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Braket {
namespace Model {

/**
 * <p>Enabled experimental capabilities for quantum hardware. Note that the use of
 * these features may impact device capabilities and performance beyond its
 * standard specifications.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ExperimentalCapabilities">AWS
 * API Reference</a></p>
 */
class ExperimentalCapabilities {
 public:
  AWS_BRAKET_API ExperimentalCapabilities() = default;
  AWS_BRAKET_API ExperimentalCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API ExperimentalCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enabled experimental capabilities.</p>
   */
  inline ExperimentalCapabilitiesEnablementType GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(ExperimentalCapabilitiesEnablementType value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ExperimentalCapabilities& WithEnabled(ExperimentalCapabilitiesEnablementType value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  ExperimentalCapabilitiesEnablementType m_enabled{ExperimentalCapabilitiesEnablementType::NOT_SET};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
