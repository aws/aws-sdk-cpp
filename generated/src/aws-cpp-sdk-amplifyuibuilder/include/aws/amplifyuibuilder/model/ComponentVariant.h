/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the style configuration of a unique variation of a main
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentVariant">AWS
   * API Reference</a></p>
   */
  class ComponentVariant
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentVariant() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariantValues() const { return m_variantValues; }
    inline bool VariantValuesHasBeenSet() const { return m_variantValuesHasBeenSet; }
    template<typename VariantValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariantValues(VariantValuesT&& value) { m_variantValuesHasBeenSet = true; m_variantValues = std::forward<VariantValuesT>(value); }
    template<typename VariantValuesT = Aws::Map<Aws::String, Aws::String>>
    ComponentVariant& WithVariantValues(VariantValuesT&& value) { SetVariantValues(std::forward<VariantValuesT>(value)); return *this;}
    template<typename VariantValuesKeyT = Aws::String, typename VariantValuesValueT = Aws::String>
    ComponentVariant& AddVariantValues(VariantValuesKeyT&& key, VariantValuesValueT&& value) {
      m_variantValuesHasBeenSet = true; m_variantValues.emplace(std::forward<VariantValuesKeyT>(key), std::forward<VariantValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    ComponentVariant& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesKeyT = Aws::String, typename OverridesValueT = Aws::Map<Aws::String, Aws::String>>
    ComponentVariant& AddOverrides(OverridesKeyT&& key, OverridesValueT&& value) {
      m_overridesHasBeenSet = true; m_overrides.emplace(std::forward<OverridesKeyT>(key), std::forward<OverridesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_variantValues;
    bool m_variantValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
