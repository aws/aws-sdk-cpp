/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FieldInputConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FieldPosition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/FieldValidationConfiguration.h>
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
   * <p>Describes the configuration information for a field in a table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FieldConfig">AWS
   * API Reference</a></p>
   */
  class FieldConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FieldConfig();
    AWS_AMPLIFYUIBUILDER_API FieldConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }

    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }

    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }

    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline FieldConfig& WithExcluded(bool value) { SetExcluded(value); return *this;}


    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline const FieldInputConfig& GetInputType() const{ return m_inputType; }

    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }

    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline void SetInputType(const FieldInputConfig& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }

    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline void SetInputType(FieldInputConfig&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }

    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline FieldConfig& WithInputType(const FieldInputConfig& value) { SetInputType(value); return *this;}

    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline FieldConfig& WithInputType(FieldInputConfig&& value) { SetInputType(std::move(value)); return *this;}


    /**
     * <p>The label for the field.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the field.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label for the field.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the field.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label for the field.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label for the field.</p>
     */
    inline FieldConfig& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the field.</p>
     */
    inline FieldConfig& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label for the field.</p>
     */
    inline FieldConfig& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>Specifies the field position.</p>
     */
    inline const FieldPosition& GetPosition() const{ return m_position; }

    /**
     * <p>Specifies the field position.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Specifies the field position.</p>
     */
    inline void SetPosition(const FieldPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Specifies the field position.</p>
     */
    inline void SetPosition(FieldPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Specifies the field position.</p>
     */
    inline FieldConfig& WithPosition(const FieldPosition& value) { SetPosition(value); return *this;}

    /**
     * <p>Specifies the field position.</p>
     */
    inline FieldConfig& WithPosition(FieldPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline const Aws::Vector<FieldValidationConfiguration>& GetValidations() const{ return m_validations; }

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline void SetValidations(const Aws::Vector<FieldValidationConfiguration>& value) { m_validationsHasBeenSet = true; m_validations = value; }

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline void SetValidations(Aws::Vector<FieldValidationConfiguration>&& value) { m_validationsHasBeenSet = true; m_validations = std::move(value); }

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline FieldConfig& WithValidations(const Aws::Vector<FieldValidationConfiguration>& value) { SetValidations(value); return *this;}

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline FieldConfig& WithValidations(Aws::Vector<FieldValidationConfiguration>&& value) { SetValidations(std::move(value)); return *this;}

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline FieldConfig& AddValidations(const FieldValidationConfiguration& value) { m_validationsHasBeenSet = true; m_validations.push_back(value); return *this; }

    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline FieldConfig& AddValidations(FieldValidationConfiguration&& value) { m_validationsHasBeenSet = true; m_validations.push_back(std::move(value)); return *this; }

  private:

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    FieldInputConfig m_inputType;
    bool m_inputTypeHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;

    Aws::Vector<FieldValidationConfiguration> m_validations;
    bool m_validationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
