/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Configuration for runtime validation of imported images. This structure
 * specifies the instance type to use for testing the imported image's streaming
 * capabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/RuntimeValidationConfig">AWS
 * API Reference</a></p>
 */
class RuntimeValidationConfig {
 public:
  AWS_APPSTREAM_API RuntimeValidationConfig() = default;
  AWS_APPSTREAM_API RuntimeValidationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API RuntimeValidationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance type to use for runtime validation testing. It's recommended to
   * use the same instance type you plan to use for your fleet to ensure accurate
   * validation results.</p>
   */
  inline const Aws::String& GetIntendedInstanceType() const { return m_intendedInstanceType; }
  inline bool IntendedInstanceTypeHasBeenSet() const { return m_intendedInstanceTypeHasBeenSet; }
  template <typename IntendedInstanceTypeT = Aws::String>
  void SetIntendedInstanceType(IntendedInstanceTypeT&& value) {
    m_intendedInstanceTypeHasBeenSet = true;
    m_intendedInstanceType = std::forward<IntendedInstanceTypeT>(value);
  }
  template <typename IntendedInstanceTypeT = Aws::String>
  RuntimeValidationConfig& WithIntendedInstanceType(IntendedInstanceTypeT&& value) {
    SetIntendedInstanceType(std::forward<IntendedInstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_intendedInstanceType;
  bool m_intendedInstanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
