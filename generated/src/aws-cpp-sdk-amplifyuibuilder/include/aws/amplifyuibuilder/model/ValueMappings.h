/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplifyuibuilder/model/ValueMapping.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormInputBindingPropertiesValue.h>
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
   * <p>Represents the data binding configuration for a value map.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ValueMappings">AWS
   * API Reference</a></p>
   */
  class ValueMappings
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ValueMappings() = default;
    AWS_AMPLIFYUIBUILDER_API ValueMappings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ValueMappings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value and display value pairs.</p>
     */
    inline const Aws::Vector<ValueMapping>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<ValueMapping>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<ValueMapping>>
    ValueMappings& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = ValueMapping>
    ValueMappings& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline const Aws::Map<Aws::String, FormInputBindingPropertiesValue>& GetBindingProperties() const { return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    template<typename BindingPropertiesT = Aws::Map<Aws::String, FormInputBindingPropertiesValue>>
    void SetBindingProperties(BindingPropertiesT&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::forward<BindingPropertiesT>(value); }
    template<typename BindingPropertiesT = Aws::Map<Aws::String, FormInputBindingPropertiesValue>>
    ValueMappings& WithBindingProperties(BindingPropertiesT&& value) { SetBindingProperties(std::forward<BindingPropertiesT>(value)); return *this;}
    template<typename BindingPropertiesKeyT = Aws::String, typename BindingPropertiesValueT = FormInputBindingPropertiesValue>
    ValueMappings& AddBindingProperties(BindingPropertiesKeyT&& key, BindingPropertiesValueT&& value) {
      m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::forward<BindingPropertiesKeyT>(key), std::forward<BindingPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<ValueMapping> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Map<Aws::String, FormInputBindingPropertiesValue> m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
