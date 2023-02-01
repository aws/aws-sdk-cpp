/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormCTA.h>
#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplifyuibuilder/model/FormActionType.h>
#include <aws/amplifyuibuilder/model/FormStyle.h>
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


    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline Form& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline Form& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the form.</p>
     */
    inline Form& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline const FormCTA& GetCta() const{ return m_cta; }

    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline bool CtaHasBeenSet() const { return m_ctaHasBeenSet; }

    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline void SetCta(const FormCTA& value) { m_ctaHasBeenSet = true; m_cta = value; }

    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline void SetCta(FormCTA&& value) { m_ctaHasBeenSet = true; m_cta = std::move(value); }

    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline Form& WithCta(const FormCTA& value) { SetCta(value); return *this;}

    /**
     * <p>Stores the call to action configuration for the form.</p>
     */
    inline Form& WithCta(FormCTA&& value) { SetCta(std::move(value)); return *this;}


    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline const FormDataTypeConfig& GetDataType() const{ return m_dataType; }

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline void SetDataType(const FormDataTypeConfig& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline void SetDataType(FormDataTypeConfig&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline Form& WithDataType(const FormDataTypeConfig& value) { SetDataType(value); return *this;}

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline Form& WithDataType(FormDataTypeConfig&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Form& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Form& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Form& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline const Aws::Map<Aws::String, FieldConfig>& GetFields() const{ return m_fields; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, FieldConfig>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, FieldConfig>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& WithFields(const Aws::Map<Aws::String, FieldConfig>& value) { SetFields(value); return *this;}

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& WithFields(Aws::Map<Aws::String, FieldConfig>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(const Aws::String& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(Aws::String&& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(const Aws::String& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(Aws::String&& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(const char* key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stores the information about the form's fields.</p>
     */
    inline Form& AddFields(const char* key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }


    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline const FormActionType& GetFormActionType() const{ return m_formActionType; }

    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }

    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline void SetFormActionType(const FormActionType& value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }

    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline void SetFormActionType(FormActionType&& value) { m_formActionTypeHasBeenSet = true; m_formActionType = std::move(value); }

    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline Form& WithFormActionType(const FormActionType& value) { SetFormActionType(value); return *this;}

    /**
     * <p>The operation to perform on the specified form.</p>
     */
    inline Form& WithFormActionType(FormActionType&& value) { SetFormActionType(std::move(value)); return *this;}


    /**
     * <p>The unique ID of the form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the form.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the form.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the form.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the form.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the form.</p>
     */
    inline Form& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the form.</p>
     */
    inline Form& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the form.</p>
     */
    inline Form& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the form.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the form.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the form.</p>
     */
    inline Form& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline Form& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline Form& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline Form& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline Form& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version of the form when it was imported.</p>
     */
    inline Form& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline const Aws::Map<Aws::String, SectionalElement>& GetSectionalElements() const{ return m_sectionalElements; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline bool SectionalElementsHasBeenSet() const { return m_sectionalElementsHasBeenSet; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline void SetSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = value; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline void SetSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = std::move(value); }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& WithSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { SetSectionalElements(value); return *this;}

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& WithSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { SetSectionalElements(std::move(value)); return *this;}

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(const Aws::String& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(Aws::String&& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(const Aws::String& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(Aws::String&& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(const char* key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stores the visual helper elements for the form that are not associated with
     * any data.</p>
     */
    inline Form& AddSectionalElements(const char* key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }


    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline const FormStyle& GetStyle() const{ return m_style; }

    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline void SetStyle(const FormStyle& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline void SetStyle(FormStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline Form& WithStyle(const FormStyle& value) { SetStyle(value); return *this;}

    /**
     * <p>Stores the configuration for the form's style.</p>
     */
    inline Form& WithStyle(FormStyle&& value) { SetStyle(std::move(value)); return *this;}


    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the form.</p>
     */
    inline Form& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    FormCTA m_cta;
    bool m_ctaHasBeenSet = false;

    FormDataTypeConfig m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Map<Aws::String, FieldConfig> m_fields;
    bool m_fieldsHasBeenSet = false;

    FormActionType m_formActionType;
    bool m_formActionTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Map<Aws::String, SectionalElement> m_sectionalElements;
    bool m_sectionalElementsHasBeenSet = false;

    FormStyle m_style;
    bool m_styleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
