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
    AWS_APPFLOW_API ConnectorEntityField() = default;
    AWS_APPFLOW_API ConnectorEntityField(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorEntityField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the connector field. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ConnectorEntityField& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent identifier of the connector field.</p>
     */
    inline const Aws::String& GetParentIdentifier() const { return m_parentIdentifier; }
    inline bool ParentIdentifierHasBeenSet() const { return m_parentIdentifierHasBeenSet; }
    template<typename ParentIdentifierT = Aws::String>
    void SetParentIdentifier(ParentIdentifierT&& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = std::forward<ParentIdentifierT>(value); }
    template<typename ParentIdentifierT = Aws::String>
    ConnectorEntityField& WithParentIdentifier(ParentIdentifierT&& value) { SetParentIdentifier(std::forward<ParentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The label applied to a connector entity field. </p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    ConnectorEntityField& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Booelan value that indicates whether this field can be used as a primary
     * key.</p>
     */
    inline bool GetIsPrimaryKey() const { return m_isPrimaryKey; }
    inline bool IsPrimaryKeyHasBeenSet() const { return m_isPrimaryKeyHasBeenSet; }
    inline void SetIsPrimaryKey(bool value) { m_isPrimaryKeyHasBeenSet = true; m_isPrimaryKey = value; }
    inline ConnectorEntityField& WithIsPrimaryKey(bool value) { SetIsPrimaryKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default value that can be assigned to this field.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ConnectorEntityField& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Booelan value that indicates whether this field is deprecated or not.</p>
     */
    inline bool GetIsDeprecated() const { return m_isDeprecated; }
    inline bool IsDeprecatedHasBeenSet() const { return m_isDeprecatedHasBeenSet; }
    inline void SetIsDeprecated(bool value) { m_isDeprecatedHasBeenSet = true; m_isDeprecated = value; }
    inline ConnectorEntityField& WithIsDeprecated(bool value) { SetIsDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains details regarding the supported <code>FieldType</code>, including
     * the corresponding <code>filterOperators</code> and <code>supportedValues</code>.
     * </p>
     */
    inline const SupportedFieldTypeDetails& GetSupportedFieldTypeDetails() const { return m_supportedFieldTypeDetails; }
    inline bool SupportedFieldTypeDetailsHasBeenSet() const { return m_supportedFieldTypeDetailsHasBeenSet; }
    template<typename SupportedFieldTypeDetailsT = SupportedFieldTypeDetails>
    void SetSupportedFieldTypeDetails(SupportedFieldTypeDetailsT&& value) { m_supportedFieldTypeDetailsHasBeenSet = true; m_supportedFieldTypeDetails = std::forward<SupportedFieldTypeDetailsT>(value); }
    template<typename SupportedFieldTypeDetailsT = SupportedFieldTypeDetails>
    ConnectorEntityField& WithSupportedFieldTypeDetails(SupportedFieldTypeDetailsT&& value) { SetSupportedFieldTypeDetails(std::forward<SupportedFieldTypeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the connector entity field. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectorEntityField& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties that can be applied to a field when the connector is being
     * used as a source. </p>
     */
    inline const SourceFieldProperties& GetSourceProperties() const { return m_sourceProperties; }
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }
    template<typename SourcePropertiesT = SourceFieldProperties>
    void SetSourceProperties(SourcePropertiesT&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::forward<SourcePropertiesT>(value); }
    template<typename SourcePropertiesT = SourceFieldProperties>
    ConnectorEntityField& WithSourceProperties(SourcePropertiesT&& value) { SetSourceProperties(std::forward<SourcePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties applied to a field when the connector is being used as a
     * destination. </p>
     */
    inline const DestinationFieldProperties& GetDestinationProperties() const { return m_destinationProperties; }
    inline bool DestinationPropertiesHasBeenSet() const { return m_destinationPropertiesHasBeenSet; }
    template<typename DestinationPropertiesT = DestinationFieldProperties>
    void SetDestinationProperties(DestinationPropertiesT&& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = std::forward<DestinationPropertiesT>(value); }
    template<typename DestinationPropertiesT = DestinationFieldProperties>
    ConnectorEntityField& WithDestinationProperties(DestinationPropertiesT&& value) { SetDestinationProperties(std::forward<DestinationPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that has specific properties related to the ConnectorEntityField.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    ConnectorEntityField& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    ConnectorEntityField& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_parentIdentifier;
    bool m_parentIdentifierHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_isPrimaryKey{false};
    bool m_isPrimaryKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    bool m_isDeprecated{false};
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
