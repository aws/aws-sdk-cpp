/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
#include <aws/amplifyuibuilder/model/FormActionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplifyuibuilder/model/FormStyle.h>
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
   * <p>Represents all of the information that is required to create a
   * form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateFormData">AWS
   * API Reference</a></p>
   */
  class CreateFormData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateFormData() = default;
    AWS_AMPLIFYUIBUILDER_API CreateFormData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CreateFormData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the form.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFormData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source to use to create the form.</p>
     */
    inline const FormDataTypeConfig& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = FormDataTypeConfig>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = FormDataTypeConfig>
    CreateFormData& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to perform a create or update action on the form.</p>
     */
    inline FormActionType GetFormActionType() const { return m_formActionType; }
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }
    inline void SetFormActionType(FormActionType value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }
    inline CreateFormData& WithFormActionType(FormActionType value) { SetFormActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the form's fields.</p>
     */
    inline const Aws::Map<Aws::String, FieldConfig>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, FieldConfig>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, FieldConfig>>
    CreateFormData& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = FieldConfig>
    CreateFormData& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for the form's style.</p>
     */
    inline const FormStyle& GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    template<typename StyleT = FormStyle>
    void SetStyle(StyleT&& value) { m_styleHasBeenSet = true; m_style = std::forward<StyleT>(value); }
    template<typename StyleT = FormStyle>
    CreateFormData& WithStyle(StyleT&& value) { SetStyle(std::forward<StyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the visual helper elements for the form.
     * These elements are not associated with any data.</p>
     */
    inline const Aws::Map<Aws::String, SectionalElement>& GetSectionalElements() const { return m_sectionalElements; }
    inline bool SectionalElementsHasBeenSet() const { return m_sectionalElementsHasBeenSet; }
    template<typename SectionalElementsT = Aws::Map<Aws::String, SectionalElement>>
    void SetSectionalElements(SectionalElementsT&& value) { m_sectionalElementsHasBeenSet = true; m_sectionalElements = std::forward<SectionalElementsT>(value); }
    template<typename SectionalElementsT = Aws::Map<Aws::String, SectionalElement>>
    CreateFormData& WithSectionalElements(SectionalElementsT&& value) { SetSectionalElements(std::forward<SectionalElementsT>(value)); return *this;}
    template<typename SectionalElementsKeyT = Aws::String, typename SectionalElementsValueT = SectionalElement>
    CreateFormData& AddSectionalElements(SectionalElementsKeyT&& key, SectionalElementsValueT&& value) {
      m_sectionalElementsHasBeenSet = true; m_sectionalElements.emplace(std::forward<SectionalElementsKeyT>(key), std::forward<SectionalElementsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schema version of the form.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    CreateFormData& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>FormCTA</code> object that stores the call to action configuration
     * for the form.</p>
     */
    inline const FormCTA& GetCta() const { return m_cta; }
    inline bool CtaHasBeenSet() const { return m_ctaHasBeenSet; }
    template<typename CtaT = FormCTA>
    void SetCta(CtaT&& value) { m_ctaHasBeenSet = true; m_cta = std::forward<CtaT>(value); }
    template<typename CtaT = FormCTA>
    CreateFormData& WithCta(CtaT&& value) { SetCta(std::forward<CtaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the form data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFormData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFormData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies an icon or decoration to display on the form.</p>
     */
    inline LabelDecorator GetLabelDecorator() const { return m_labelDecorator; }
    inline bool LabelDecoratorHasBeenSet() const { return m_labelDecoratorHasBeenSet; }
    inline void SetLabelDecorator(LabelDecorator value) { m_labelDecoratorHasBeenSet = true; m_labelDecorator = value; }
    inline CreateFormData& WithLabelDecorator(LabelDecorator value) { SetLabelDecorator(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FormDataTypeConfig m_dataType;
    bool m_dataTypeHasBeenSet = false;

    FormActionType m_formActionType{FormActionType::NOT_SET};
    bool m_formActionTypeHasBeenSet = false;

    Aws::Map<Aws::String, FieldConfig> m_fields;
    bool m_fieldsHasBeenSet = false;

    FormStyle m_style;
    bool m_styleHasBeenSet = false;

    Aws::Map<Aws::String, SectionalElement> m_sectionalElements;
    bool m_sectionalElementsHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    FormCTA m_cta;
    bool m_ctaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    LabelDecorator m_labelDecorator{LabelDecorator::NOT_SET};
    bool m_labelDecoratorHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
