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
  class AWS_APPFLOW_API ConnectorEntityField
  {
  public:
    ConnectorEntityField();
    ConnectorEntityField(Aws::Utils::Json::JsonView jsonValue);
    ConnectorEntityField& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    SupportedFieldTypeDetails m_supportedFieldTypeDetails;
    bool m_supportedFieldTypeDetailsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SourceFieldProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet;

    DestinationFieldProperties m_destinationProperties;
    bool m_destinationPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
