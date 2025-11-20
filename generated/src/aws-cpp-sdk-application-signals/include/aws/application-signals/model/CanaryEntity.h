/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains identifying information for a CloudWatch Synthetics
 * canary entity used in audit targeting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CanaryEntity">AWS
 * API Reference</a></p>
 */
class CanaryEntity {
 public:
  AWS_APPLICATIONSIGNALS_API CanaryEntity() = default;
  AWS_APPLICATIONSIGNALS_API CanaryEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CanaryEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch Synthetics canary.</p>
   */
  inline const Aws::String& GetCanaryName() const { return m_canaryName; }
  inline bool CanaryNameHasBeenSet() const { return m_canaryNameHasBeenSet; }
  template <typename CanaryNameT = Aws::String>
  void SetCanaryName(CanaryNameT&& value) {
    m_canaryNameHasBeenSet = true;
    m_canaryName = std::forward<CanaryNameT>(value);
  }
  template <typename CanaryNameT = Aws::String>
  CanaryEntity& WithCanaryName(CanaryNameT&& value) {
    SetCanaryName(std::forward<CanaryNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_canaryName;
  bool m_canaryNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
