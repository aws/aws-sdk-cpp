/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormActionType.h>
#include <aws/amplifyuibuilder/model/FormStyle.h>
#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplifyuibuilder/model/FormCTA.h>
#include <aws/amplifyuibuilder/model/LabelDecorator.h>
#include <aws/amplifyuibuilder/model/FieldConfig.h>
#include <aws/amplifyuibuilder/model/SectionalElement.h>
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
   * <p>Contains the configuration settings for a <code>Form</code> user interface
   * (UI) element for an Amplify app. A form is a component you can add to your
   * project by specifying a data source as the default configuration for the
   * form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/Form">AWS
   * API Reference</a></p>
   */
  class Form
  {
  public:
    AWS_AMPLIFYUIBUILDER_API Form();
    AWS_AMPLIFYUIBUILDER_API Form(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Form& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline Form& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline Form& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline Form& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline Form& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline Form& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline Form& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Form& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Form& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Form& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the form.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Form& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Form& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Form& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline const FormActionType& GetFormActionType() const{ return m_formActionType; }
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }
    inline void SetFormActionType(const FormActionType& value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }
    inline void SetFormActionType(FormActionType&& value) { m_formActionTypeHasBeenSet = true; m_formActionType = std::move(value); }
    inline Form& WithFormActionType(const FormActionType& value) { SetFormActionType(value); return *this;}
    inline Form& WithFormActionType(FormActionType&& value) { SetFormActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline const FormStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const FormStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(FormStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline Form& WithStyle(const FormStyle& value) { SetStyle(value); return *this;}
    inline Form& WithStyle(FormStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline const FormDataTypeConfig& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const FormDataTypeConfig& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(FormDataTypeConfig&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline Form& WithDataType(const FormDataTypeConfig& value) { SetDataType(value); return *this;}
    inline Form& WithDataType(FormDataTypeConfig&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline const Aws::Map<Aws::String, FieldConfig>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Map<Aws::String, FieldConfig>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, FieldConfig>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline Form& WithFields(const Aws::Map<Aws::String, FieldConfig>& value) { SetFields(value); return *this;}
    inline Form& WithFields(Aws::Map<Aws::String, FieldConfig>&& value) { SetFields(std::move(value)); return *this;}
    inline Form& AddFields(const Aws::String& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    inline Form& AddFields(Aws::String&& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }
    inline Form& AddFields(const Aws::String& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline Form& AddFields(Aws::String&& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline Form& AddFields(const char* key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline Form& AddFields(const char* key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline const Aws::Map<Aws::String, SectionalElement>& GetSectionalElements() const{ return m_sectionalElements; }
    inline bool SectionalElementsHasBeenSet() const { return m_sectionalElementsHasBeenSet; }
    inline void SetSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = value; }
    inline void SetSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = std::move(value); }
    inline Form& WithSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { SetSectionalElements(value); return *this;}
    inline Form& WithSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { SetSectionalElements(std::move(value)); return *this;}
    inline Form& AddSectionalElements(const Aws::String& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }
    inline Form& AddSectionalElements(Aws::String&& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), value); return *this; }
    inline Form& AddSectionalElements(const Aws::String& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }
    inline Form& AddSectionalElements(Aws::String&& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), std::move(value)); return *this; }
    inline Form& AddSectionalElements(const char* key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }
    inline Form& AddSectionalElements(const char* key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline Form& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline Form& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline Form& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Form& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Form& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Form& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Form& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Form& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Form& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Form& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Form& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Form& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline const FormCTA& GetCta() const{ return m_cta; }
    inline bool CtaHasBeenSet() const { return m_ctaHasBeenSet; }
    inline void SetCta(const FormCTA& value) { m_ctaHasBeenSet = true; m_cta = value; }
    inline void SetCta(FormCTA&& value) { m_ctaHasBeenSet = true; m_cta = std::move(value); }
    inline Form& WithCta(const FormCTA& value) { SetCta(value); return *this;}
    inline Form& WithCta(FormCTA&& value) { SetCta(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an icon or decoration to display on the form.</p>
     */
    inline const LabelDecorator& GetLabelDecorator() const{ return m_labelDecorator; }
    inline bool LabelDecoratorHasBeenSet() const { return m_labelDecoratorHasBeenSet; }
    inline void SetLabelDecorator(const LabelDecorator& value) { m_labelDecoratorHasBeenSet = true; m_labelDecorator = value; }
    inline void SetLabelDecorator(LabelDecorator&& value) { m_labelDecoratorHasBeenSet = true; m_labelDecorator = std::move(value); }
    inline Form& WithLabelDecorator(const LabelDecorator& value) { SetLabelDecorator(value); return *this;}
    inline Form& WithLabelDecorator(LabelDecorator&& value) { SetLabelDecorator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FormActionType m_formActionType;
    bool m_formActionTypeHasBeenSet = false;

    FormStyle m_style;
    bool m_styleHasBeenSet = false;

    FormDataTypeConfig m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::Map<Aws::String, FieldConfig> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, SectionalElement> m_sectionalElements;
    bool m_sectionalElementsHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FormCTA m_cta;
    bool m_ctaHasBeenSet = false;

    LabelDecorator m_labelDecorator;
    bool m_labelDecoratorHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
