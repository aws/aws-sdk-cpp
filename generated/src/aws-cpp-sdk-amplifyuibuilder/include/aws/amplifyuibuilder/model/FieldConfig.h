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
    AWS_AMPLIFYUIBUILDER_API FieldConfig() = default;
    AWS_AMPLIFYUIBUILDER_API FieldConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The label for the field.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    FieldConfig& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the field position.</p>
     */
    inline const FieldPosition& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = FieldPosition>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = FieldPosition>
    FieldConfig& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to hide a field.</p>
     */
    inline bool GetExcluded() const { return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline FieldConfig& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration for the default input value to display for a
     * field.</p>
     */
    inline const FieldInputConfig& GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    template<typename InputTypeT = FieldInputConfig>
    void SetInputType(InputTypeT&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::forward<InputTypeT>(value); }
    template<typename InputTypeT = FieldInputConfig>
    FieldConfig& WithInputType(InputTypeT&& value) { SetInputType(std::forward<InputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validations to perform on the value in the field.</p>
     */
    inline const Aws::Vector<FieldValidationConfiguration>& GetValidations() const { return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    template<typename ValidationsT = Aws::Vector<FieldValidationConfiguration>>
    void SetValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations = std::forward<ValidationsT>(value); }
    template<typename ValidationsT = Aws::Vector<FieldValidationConfiguration>>
    FieldConfig& WithValidations(ValidationsT&& value) { SetValidations(std::forward<ValidationsT>(value)); return *this;}
    template<typename ValidationsT = FieldValidationConfiguration>
    FieldConfig& AddValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations.emplace_back(std::forward<ValidationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;

    bool m_excluded{false};
    bool m_excludedHasBeenSet = false;

    FieldInputConfig m_inputType;
    bool m_inputTypeHasBeenSet = false;

    Aws::Vector<FieldValidationConfiguration> m_validations;
    bool m_validationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
