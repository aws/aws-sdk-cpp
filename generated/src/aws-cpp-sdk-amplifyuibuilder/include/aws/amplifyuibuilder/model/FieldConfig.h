/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FieldPosition.h>
#include <aws/amplifyuibuilder/model/FieldInputConfig.h>
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


    ///@{
    /**
     * <p>The label for the field.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline FieldConfig& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline FieldConfig& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline FieldConfig& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the field position.</p>
     */
    inline const FieldPosition& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const FieldPosition& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(FieldPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline FieldConfig& WithPosition(const FieldPosition& value) { SetPosition(value); return *this;}
    inline FieldConfig& WithPosition(FieldPosition&& value) { SetPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline FieldConfig& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline const FieldInputConfig& GetInputType() const{ return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(const FieldInputConfig& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline void SetInputType(FieldInputConfig&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }
    inline FieldConfig& WithInputType(const FieldInputConfig& value) { SetInputType(value); return *this;}
    inline FieldConfig& WithInputType(FieldInputConfig&& value) { SetInputType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline const Aws::Vector<FieldValidationConfiguration>& GetValidations() const{ return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    inline void SetValidations(const Aws::Vector<FieldValidationConfiguration>& value) { m_validationsHasBeenSet = true; m_validations = value; }
    inline void SetValidations(Aws::Vector<FieldValidationConfiguration>&& value) { m_validationsHasBeenSet = true; m_validations = std::move(value); }
    inline FieldConfig& WithValidations(const Aws::Vector<FieldValidationConfiguration>& value) { SetValidations(value); return *this;}
    inline FieldConfig& WithValidations(Aws::Vector<FieldValidationConfiguration>&& value) { SetValidations(std::move(value)); return *this;}
    inline FieldConfig& AddValidations(const FieldValidationConfiguration& value) { m_validationsHasBeenSet = true; m_validations.push_back(value); return *this; }
    inline FieldConfig& AddValidations(FieldValidationConfiguration&& value) { m_validationsHasBeenSet = true; m_validations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    FieldInputConfig m_inputType;
    bool m_inputTypeHasBeenSet = false;

    Aws::Vector<FieldValidationConfiguration> m_validations;
    bool m_validationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
