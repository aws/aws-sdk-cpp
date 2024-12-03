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
    AWS_GLUE_API Property();
    AWS_GLUE_API Property(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Property& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Property& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Property& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Property& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the property.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Property& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Property& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Property& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the property is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline Property& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline Property& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline Property& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline Property& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of property.</p>
     */
    inline const Aws::Vector<PropertyType>& GetPropertyTypes() const{ return m_propertyTypes; }
    inline bool PropertyTypesHasBeenSet() const { return m_propertyTypesHasBeenSet; }
    inline void SetPropertyTypes(const Aws::Vector<PropertyType>& value) { m_propertyTypesHasBeenSet = true; m_propertyTypes = value; }
    inline void SetPropertyTypes(Aws::Vector<PropertyType>&& value) { m_propertyTypesHasBeenSet = true; m_propertyTypes = std::move(value); }
    inline Property& WithPropertyTypes(const Aws::Vector<PropertyType>& value) { SetPropertyTypes(value); return *this;}
    inline Property& WithPropertyTypes(Aws::Vector<PropertyType>&& value) { SetPropertyTypes(std::move(value)); return *this;}
    inline Property& AddPropertyTypes(const PropertyType& value) { m_propertyTypesHasBeenSet = true; m_propertyTypes.push_back(value); return *this; }
    inline Property& AddPropertyTypes(PropertyType&& value) { m_propertyTypesHasBeenSet = true; m_propertyTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>AllowedValue</code> objects representing the values allowed
     * for the property.</p>
     */
    inline const Aws::Vector<AllowedValue>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<AllowedValue>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<AllowedValue>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline Property& WithAllowedValues(const Aws::Vector<AllowedValue>& value) { SetAllowedValues(value); return *this;}
    inline Property& WithAllowedValues(Aws::Vector<AllowedValue>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline Property& AddAllowedValues(const AllowedValue& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline Property& AddAllowedValues(AllowedValue&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates which data operations are applicable to the property.</p>
     */
    inline const Aws::Vector<DataOperation>& GetDataOperationScopes() const{ return m_dataOperationScopes; }
    inline bool DataOperationScopesHasBeenSet() const { return m_dataOperationScopesHasBeenSet; }
    inline void SetDataOperationScopes(const Aws::Vector<DataOperation>& value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes = value; }
    inline void SetDataOperationScopes(Aws::Vector<DataOperation>&& value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes = std::move(value); }
    inline Property& WithDataOperationScopes(const Aws::Vector<DataOperation>& value) { SetDataOperationScopes(value); return *this;}
    inline Property& WithDataOperationScopes(Aws::Vector<DataOperation>&& value) { SetDataOperationScopes(std::move(value)); return *this;}
    inline Property& AddDataOperationScopes(const DataOperation& value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes.push_back(value); return *this; }
    inline Property& AddDataOperationScopes(DataOperation&& value) { m_dataOperationScopesHasBeenSet = true; m_dataOperationScopes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required;
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
