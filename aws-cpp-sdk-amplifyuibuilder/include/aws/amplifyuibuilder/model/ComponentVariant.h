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
    AWS_AMPLIFYUIBUILDER_API ComponentVariant();
    AWS_AMPLIFYUIBUILDER_API ComponentVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline void SetOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline void SetOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& WithOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetOverrides(value); return *this;}

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& WithOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties of the component variant that can be overriden when
     * customizing an instance of the component. You can't specify <code>tags</code> as
     * a valid property for <code>overrides</code>.</p>
     */
    inline ComponentVariant& AddOverrides(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }


    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariantValues() const{ return m_variantValues; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline bool VariantValuesHasBeenSet() const { return m_variantValuesHasBeenSet; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline void SetVariantValues(const Aws::Map<Aws::String, Aws::String>& value) { m_variantValuesHasBeenSet = true; m_variantValues = value; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline void SetVariantValues(Aws::Map<Aws::String, Aws::String>&& value) { m_variantValuesHasBeenSet = true; m_variantValues = std::move(value); }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& WithVariantValues(const Aws::Map<Aws::String, Aws::String>& value) { SetVariantValues(value); return *this;}

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& WithVariantValues(Aws::Map<Aws::String, Aws::String>&& value) { SetVariantValues(std::move(value)); return *this;}

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(const Aws::String& key, const Aws::String& value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(key, value); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(Aws::String&& key, const Aws::String& value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(const Aws::String& key, Aws::String&& value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(Aws::String&& key, Aws::String&& value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(const char* key, Aws::String&& value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(Aws::String&& key, const char* value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The combination of variants that comprise this variant. You can't specify
     * <code>tags</code> as a valid property for <code>variantValues</code>.</p>
     */
    inline ComponentVariant& AddVariantValues(const char* key, const char* value) { m_variantValuesHasBeenSet = true; m_variantValues.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variantValues;
    bool m_variantValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
