/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the validation configuration for a field.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FieldValidationConfiguration">AWS
   * API Reference</a></p>
   */
  class FieldValidationConfiguration
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration() = default;
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The validation to perform on an object type.<code/> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    FieldValidationConfiguration& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation to perform on a string value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStrValues() const { return m_strValues; }
    inline bool StrValuesHasBeenSet() const { return m_strValuesHasBeenSet; }
    template<typename StrValuesT = Aws::Vector<Aws::String>>
    void SetStrValues(StrValuesT&& value) { m_strValuesHasBeenSet = true; m_strValues = std::forward<StrValuesT>(value); }
    template<typename StrValuesT = Aws::Vector<Aws::String>>
    FieldValidationConfiguration& WithStrValues(StrValuesT&& value) { SetStrValues(std::forward<StrValuesT>(value)); return *this;}
    template<typename StrValuesT = Aws::String>
    FieldValidationConfiguration& AddStrValues(StrValuesT&& value) { m_strValuesHasBeenSet = true; m_strValues.emplace_back(std::forward<StrValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation to perform on a number value.</p>
     */
    inline const Aws::Vector<int>& GetNumValues() const { return m_numValues; }
    inline bool NumValuesHasBeenSet() const { return m_numValuesHasBeenSet; }
    template<typename NumValuesT = Aws::Vector<int>>
    void SetNumValues(NumValuesT&& value) { m_numValuesHasBeenSet = true; m_numValues = std::forward<NumValuesT>(value); }
    template<typename NumValuesT = Aws::Vector<int>>
    FieldValidationConfiguration& WithNumValues(NumValuesT&& value) { SetNumValues(std::forward<NumValuesT>(value)); return *this;}
    inline FieldValidationConfiguration& AddNumValues(int value) { m_numValuesHasBeenSet = true; m_numValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation message to display.</p>
     */
    inline const Aws::String& GetValidationMessage() const { return m_validationMessage; }
    inline bool ValidationMessageHasBeenSet() const { return m_validationMessageHasBeenSet; }
    template<typename ValidationMessageT = Aws::String>
    void SetValidationMessage(ValidationMessageT&& value) { m_validationMessageHasBeenSet = true; m_validationMessage = std::forward<ValidationMessageT>(value); }
    template<typename ValidationMessageT = Aws::String>
    FieldValidationConfiguration& WithValidationMessage(ValidationMessageT&& value) { SetValidationMessage(std::forward<ValidationMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_strValues;
    bool m_strValuesHasBeenSet = false;

    Aws::Vector<int> m_numValues;
    bool m_numValuesHasBeenSet = false;

    Aws::String m_validationMessage;
    bool m_validationMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
