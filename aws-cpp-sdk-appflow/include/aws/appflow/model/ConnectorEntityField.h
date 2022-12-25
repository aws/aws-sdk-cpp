/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SupportedFieldTypeDetails.h>
#include <aws/appflow/model/SourceFieldProperties.h>
#include <aws/appflow/model/DestinationFieldProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Describes the data model of a connector field. For example, for an
   * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
   * ID</i>, and so on. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorEntityField">AWS
   * API Reference</a></p>
   */
  class ConnectorEntityField
  {
  public:
    AWS_APPFLOW_API ConnectorEntityField();
    AWS_APPFLOW_API ConnectorEntityField(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorEntityField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline ConnectorEntityField& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline ConnectorEntityField& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline ConnectorEntityField& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline const Aws::String& GetParentIdentifier() const{ return m_parentIdentifier; }

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline bool ParentIdentifierHasBeenSet() const { return m_parentIdentifierHasBeenSet; }

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline void SetParentIdentifier(const Aws::String& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = value; }

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline void SetParentIdentifier(Aws::String&& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = std::move(value); }

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline void SetParentIdentifier(const char* value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier.assign(value); }

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline ConnectorEntityField& WithParentIdentifier(const Aws::String& value) { SetParentIdentifier(value); return *this;}

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline ConnectorEntityField& WithParentIdentifier(Aws::String&& value) { SetParentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline ConnectorEntityField& WithParentIdentifier(const char* value) { SetParentIdentifier(value); return *this;}


    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline ConnectorEntityField& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline ConnectorEntityField& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline ConnectorEntityField& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>Booelan value that indicates whether this field can be used as a primary
     * key.</p>
     */
    inline bool GetIsPrimaryKey() const{ return m_isPrimaryKey; }

    /**
     * <p>Booelan value that indicates whether this field can be used as a primary
     * key.</p>
     */
    inline bool IsPrimaryKeyHasBeenSet() const { return m_isPrimaryKeyHasBeenSet; }

    /**
     * <p>Booelan value that indicates whether this field can be used as a primary
     * key.</p>
     */
    inline void SetIsPrimaryKey(bool value) { m_isPrimaryKeyHasBeenSet = true; m_isPrimaryKey = value; }

    /**
     * <p>Booelan value that indicates whether this field can be used as a primary
     * key.</p>
     */
    inline ConnectorEntityField& WithIsPrimaryKey(bool value) { SetIsPrimaryKey(value); return *this;}


    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline ConnectorEntityField& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline ConnectorEntityField& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline ConnectorEntityField& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>Booelan value that indicates whether this field is deprecated or not.</p>
     */
    inline bool GetIsDeprecated() const{ return m_isDeprecated; }

    /**
     * <p>Booelan value that indicates whether this field is deprecated or not.</p>
     */
    inline bool IsDeprecatedHasBeenSet() const { return m_isDeprecatedHasBeenSet; }

    /**
     * <p>Booelan value that indicates whether this field is deprecated or not.</p>
     */
    inline void SetIsDeprecated(bool value) { m_isDeprecatedHasBeenSet = true; m_isDeprecated = value; }

    /**
     * <p>Booelan value that indicates whether this field is deprecated or not.</p>
     */
    inline ConnectorEntityField& WithIsDeprecated(bool value) { SetIsDeprecated(value); return *this;}


    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline const SupportedFieldTypeDetails& GetSupportedFieldTypeDetails() const{ return m_supportedFieldTypeDetails; }

    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline bool SupportedFieldTypeDetailsHasBeenSet() const { return m_supportedFieldTypeDetailsHasBeenSet; }

    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline void SetSupportedFieldTypeDetails(const SupportedFieldTypeDetails& value) { m_supportedFieldTypeDetailsHasBeenSet = true; m_supportedFieldTypeDetails = value; }

    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline void SetSupportedFieldTypeDetails(SupportedFieldTypeDetails&& value) { m_supportedFieldTypeDetailsHasBeenSet = true; m_supportedFieldTypeDetails = std::move(value); }

    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline ConnectorEntityField& WithSupportedFieldTypeDetails(const SupportedFieldTypeDetails& value) { SetSupportedFieldTypeDetails(value); return *this;}

    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline ConnectorEntityField& WithSupportedFieldTypeDetails(SupportedFieldTypeDetails&& value) { SetSupportedFieldTypeDetails(std::move(value)); return *this;}


    /**
     * <p> A description of the connector entity field. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline ConnectorEntityField& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline ConnectorEntityField& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the connector entity field. </p>
     */
    inline ConnectorEntityField& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline const SourceFieldProperties& GetSourceProperties() const{ return m_sourceProperties; }

    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }

    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline void SetSourceProperties(const SourceFieldProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }

    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline void SetSourceProperties(SourceFieldProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }

    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline ConnectorEntityField& WithSourceProperties(const SourceFieldProperties& value) { SetSourceProperties(value); return *this;}

    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline ConnectorEntityField& WithSourceProperties(SourceFieldProperties&& value) { SetSourceProperties(std::move(value)); return *this;}


    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline const DestinationFieldProperties& GetDestinationProperties() const{ return m_destinationProperties; }

    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline bool DestinationPropertiesHasBeenSet() const { return m_destinationPropertiesHasBeenSet; }

    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline void SetDestinationProperties(const DestinationFieldProperties& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = value; }

    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline void SetDestinationProperties(DestinationFieldProperties&& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = std::move(value); }

    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline ConnectorEntityField& WithDestinationProperties(const DestinationFieldProperties& value) { SetDestinationProperties(value); return *this;}

    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline ConnectorEntityField& WithDestinationProperties(DestinationFieldProperties&& value) { SetDestinationProperties(std::move(value)); return *this;}


    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline ConnectorEntityField& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_parentIdentifier;
    bool m_parentIdentifierHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_isPrimaryKey;
    bool m_isPrimaryKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    bool m_isDeprecated;
    bool m_isDeprecatedHasBeenSet = false;

    SupportedFieldTypeDetails m_supportedFieldTypeDetails;
    bool m_supportedFieldTypeDetailsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SourceFieldProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet = false;

    DestinationFieldProperties m_destinationProperties;
    bool m_destinationPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
