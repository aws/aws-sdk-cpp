/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>Treatment assignment overrides that assign specific entity IDs to treatments,
 * bypassing random assignment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/TreatmentOverrides">AWS
 * API Reference</a></p>
 */
class TreatmentOverrides {
 public:
  AWS_APPCONFIG_API TreatmentOverrides() = default;
  AWS_APPCONFIG_API TreatmentOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API TreatmentOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of entity IDs to treatment keys. Each entry assigns the specified
   * entity to the specified treatment, bypassing random assignment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetInline() const { return m_inline; }
  inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
  template <typename InlineT = Aws::Map<Aws::String, Aws::String>>
  void SetInline(InlineT&& value) {
    m_inlineHasBeenSet = true;
    m_inline = std::forward<InlineT>(value);
  }
  template <typename InlineT = Aws::Map<Aws::String, Aws::String>>
  TreatmentOverrides& WithInline(InlineT&& value) {
    SetInline(std::forward<InlineT>(value));
    return *this;
  }
  template <typename InlineKeyT = Aws::String, typename InlineValueT = Aws::String>
  TreatmentOverrides& AddInline(InlineKeyT&& key, InlineValueT&& value) {
    m_inlineHasBeenSet = true;
    m_inline.emplace(std::forward<InlineKeyT>(key), std::forward<InlineValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_inline;
  bool m_inlineHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
