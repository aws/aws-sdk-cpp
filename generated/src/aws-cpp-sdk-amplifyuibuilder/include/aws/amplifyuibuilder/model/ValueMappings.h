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
    AWS_AMPLIFYUIBUILDER_API ValueMappings();
    AWS_AMPLIFYUIBUILDER_API ValueMappings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ValueMappings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value and display value pairs.</p>
     */
    inline const Aws::Vector<ValueMapping>& GetValues() const{ return m_values; }

    /**
     * <p>The value and display value pairs.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value and display value pairs.</p>
     */
    inline void SetValues(const Aws::Vector<ValueMapping>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value and display value pairs.</p>
     */
    inline void SetValues(Aws::Vector<ValueMapping>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value and display value pairs.</p>
     */
    inline ValueMappings& WithValues(const Aws::Vector<ValueMapping>& value) { SetValues(value); return *this;}

    /**
     * <p>The value and display value pairs.</p>
     */
    inline ValueMappings& WithValues(Aws::Vector<ValueMapping>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value and display value pairs.</p>
     */
    inline ValueMappings& AddValues(const ValueMapping& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value and display value pairs.</p>
     */
    inline ValueMappings& AddValues(ValueMapping&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline const Aws::Map<Aws::String, FormInputBindingPropertiesValue>& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline void SetBindingProperties(const Aws::Map<Aws::String, FormInputBindingPropertiesValue>& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline void SetBindingProperties(Aws::Map<Aws::String, FormInputBindingPropertiesValue>&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& WithBindingProperties(const Aws::Map<Aws::String, FormInputBindingPropertiesValue>& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& WithBindingProperties(Aws::Map<Aws::String, FormInputBindingPropertiesValue>&& value) { SetBindingProperties(std::move(value)); return *this;}

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(const Aws::String& key, const FormInputBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(Aws::String&& key, const FormInputBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(const Aws::String& key, FormInputBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(Aws::String&& key, FormInputBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(const char* key, FormInputBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline ValueMappings& AddBindingProperties(const char* key, const FormInputBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }

  private:

    Aws::Vector<ValueMapping> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Map<Aws::String, FormInputBindingPropertiesValue> m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
