/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FormCTA.h>
#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplifyuibuilder/model/FormActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Updates and saves all of the information about a form, based on form
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateFormData">AWS
   * API Reference</a></p>
   */
  class UpdateFormData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateFormData();
    AWS_AMPLIFYUIBUILDER_API UpdateFormData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API UpdateFormData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline const FormCTA& GetCta() const{ return m_cta; }

    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline bool CtaHasBeenSet() const { return m_ctaHasBeenSet; }

    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline void SetCta(const FormCTA& value) { m_ctaHasBeenSet = true; m_cta = value; }

    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline void SetCta(FormCTA&& value) { m_ctaHasBeenSet = true; m_cta = std::move(value); }

    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline UpdateFormData& WithCta(const FormCTA& value) { SetCta(value); return *this;}

    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline UpdateFormData& WithCta(FormCTA&& value) { SetCta(std::move(value)); return *this;}


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
    inline UpdateFormData& WithDataType(const FormDataTypeConfig& value) { SetDataType(value); return *this;}

    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline UpdateFormData& WithDataType(FormDataTypeConfig&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline const Aws::Map<Aws::String, FieldConfig>& GetFields() const{ return m_fields; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, FieldConfig>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, FieldConfig>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& WithFields(const Aws::Map<Aws::String, FieldConfig>& value) { SetFields(value); return *this;}

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& WithFields(Aws::Map<Aws::String, FieldConfig>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(const Aws::String& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(Aws::String&& key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(const Aws::String& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(Aws::String&& key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(const char* key, FieldConfig&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline UpdateFormData& AddFields(const char* key, const FieldConfig& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline const FormActionType& GetFormActionType() const{ return m_formActionType; }

    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }

    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline void SetFormActionType(const FormActionType& value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }

    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline void SetFormActionType(FormActionType&& value) { m_formActionTypeHasBeenSet = true; m_formActionType = std::move(value); }

    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline UpdateFormData& WithFormActionType(const FormActionType& value) { SetFormActionType(value); return *this;}

    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline UpdateFormData& WithFormActionType(FormActionType&& value) { SetFormActionType(std::move(value)); return *this;}


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
    inline UpdateFormData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline UpdateFormData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline UpdateFormData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The schema version of the form.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version of the form.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version of the form.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version of the form.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version of the form.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version of the form.</p>
     */
    inline UpdateFormData& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version of the form.</p>
     */
    inline UpdateFormData& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version of the form.</p>
     */
    inline UpdateFormData& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline const Aws::Map<Aws::String, SectionalElement>& GetSectionalElements() const{ return m_sectionalElements; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline bool SectionalElementsHasBeenSet() const { return m_sectionalElementsHasBeenSet; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline void SetSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = value; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline void SetSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = std::move(value); }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& WithSectionalElements(const Aws::Map<Aws::String, SectionalElement>& value) { SetSectionalElements(value); return *this;}

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& WithSectionalElements(Aws::Map<Aws::String, SectionalElement>&& value) { SetSectionalElements(std::move(value)); return *this;}

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(const Aws::String& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(Aws::String&& key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(const Aws::String& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(Aws::String&& key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(const char* key, SectionalElement&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline UpdateFormData& AddSectionalElements(const char* key, const SectionalElement& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(key, value); return *this; }


    /**
     * <p>The configuration for the form's style.</p>
     */
    inline const FormStyle& GetStyle() const{ return m_style; }

    /**
     * <p>The configuration for the form's style.</p>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>The configuration for the form's style.</p>
     */
    inline void SetStyle(const FormStyle& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>The configuration for the form's style.</p>
     */
    inline void SetStyle(FormStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>The configuration for the form's style.</p>
     */
    inline UpdateFormData& WithStyle(const FormStyle& value) { SetStyle(value); return *this;}

    /**
     * <p>The configuration for the form's style.</p>
     */
    inline UpdateFormData& WithStyle(FormStyle&& value) { SetStyle(std::move(value)); return *this;}

  private:

    FormCTA m_cta;
    bool m_ctaHasBeenSet = false;

    FormDataTypeConfig m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::Map<Aws::String, FieldConfig> m_fields;
    bool m_fieldsHasBeenSet = false;

    FormActionType m_formActionType;
    bool m_formActionTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Map<Aws::String, SectionalElement> m_sectionalElements;
    bool m_sectionalElementsHasBeenSet = false;

    FormStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
