/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PropertyType.h>
#include <aws/glue/model/AllowedValue.h>
#include <aws/glue/model/DataOperation.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An object that defines a connection type for a compute
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Property">AWS API
   * Reference</a></p>
   */
  class Property
  {
  public:
    AWS_GLUE_API Property() = default;
    AWS_GLUE_API Property(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Property& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Property& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the property.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Property& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the property is required.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline Property& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    Property& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of property.</p>
     */
    inline const Aws::Vector<PropertyType>& GetPropertyTypes() const { return m_propertyTypes; }
    inline bool PropertyTypesHasBeenSet() const { return m_propertyTypesHasBeenSet; }
    template<typename PropertyTypesT = Aws::Vector<PropertyType>>
    void SetPropertyTypes(PropertyTypesT&& value) { m_propertyTypesHasBeenSet = true; m_propertyTypes = std::forward<PropertyTypesT>(value); }
    template<typename PropertyTypesT = Aws::Vector<PropertyType>>
    Property& WithPropertyTypes(PropertyTypesT&& value) { SetPropertyTypes(std::forward<PropertyTypesT>(value)); return *this;}
    inline Property& AddPropertyTypes(PropertyType value) { m_propertyTypesHasBeenSet = true; m_propertyTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>AllowedValue</code> objects representing the values allowed
     * for the property.</p>
     */
    inline const Aws::Vector<AllowedValue>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<AllowedValue>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<AllowedValue>>
    Property& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = AllowedValue>
    Property& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates which data operations are applicable to the property.</p>
     */
    inline const Aws::Vector<DataOperation>& GetDataOperationScopes() const { return m_dataOperationScopes; }
    inline bool DataOperationScopesHasBeenSet() const { return m_dataOperationScopesHasBeenSet; }
    template<typename DataOperationScopesT = Aws::Vector<DataOperation>>
    void SetDataOperationScopes(DataOperationScopesT&& value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes = std::forward<DataOperationScopesT>(value); }
    template<typename DataOperationScopesT = Aws::Vector<DataOperation>>
    Property& WithDataOperationScopes(DataOperationScopesT&& value) { SetDataOperationScopes(std::forward<DataOperationScopesT>(value)); return *this;}
    inline Property& AddDataOperationScopes(DataOperation value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::Vector<PropertyType> m_propertyTypes;
    bool m_propertyTypesHasBeenSet = false;

    Aws::Vector<AllowedValue> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::Vector<DataOperation> m_dataOperationScopes;
    bool m_dataOperationScopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
