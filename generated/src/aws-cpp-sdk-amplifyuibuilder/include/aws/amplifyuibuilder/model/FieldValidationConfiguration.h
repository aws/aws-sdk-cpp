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
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration();
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The validation to perform on an object type.<code/> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline FieldValidationConfiguration& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline FieldValidationConfiguration& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline FieldValidationConfiguration& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation to perform on a string value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStrValues() const{ return m_strValues; }
    inline bool StrValuesHasBeenSet() const { return m_strValuesHasBeenSet; }
    inline void SetStrValues(const Aws::Vector<Aws::String>& value) { m_strValuesHasBeenSet = true; m_strValues = value; }
    inline void SetStrValues(Aws::Vector<Aws::String>&& value) { m_strValuesHasBeenSet = true; m_strValues = std::move(value); }
    inline FieldValidationConfiguration& WithStrValues(const Aws::Vector<Aws::String>& value) { SetStrValues(value); return *this;}
    inline FieldValidationConfiguration& WithStrValues(Aws::Vector<Aws::String>&& value) { SetStrValues(std::move(value)); return *this;}
    inline FieldValidationConfiguration& AddStrValues(const Aws::String& value) { m_strValuesHasBeenSet = true; m_strValues.push_back(value); return *this; }
    inline FieldValidationConfiguration& AddStrValues(Aws::String&& value) { m_strValuesHasBeenSet = true; m_strValues.push_back(std::move(value)); return *this; }
    inline FieldValidationConfiguration& AddStrValues(const char* value) { m_strValuesHasBeenSet = true; m_strValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation to perform on a number value.</p>
     */
    inline const Aws::Vector<int>& GetNumValues() const{ return m_numValues; }
    inline bool NumValuesHasBeenSet() const { return m_numValuesHasBeenSet; }
    inline void SetNumValues(const Aws::Vector<int>& value) { m_numValuesHasBeenSet = true; m_numValues = value; }
    inline void SetNumValues(Aws::Vector<int>&& value) { m_numValuesHasBeenSet = true; m_numValues = std::move(value); }
    inline FieldValidationConfiguration& WithNumValues(const Aws::Vector<int>& value) { SetNumValues(value); return *this;}
    inline FieldValidationConfiguration& WithNumValues(Aws::Vector<int>&& value) { SetNumValues(std::move(value)); return *this;}
    inline FieldValidationConfiguration& AddNumValues(int value) { m_numValuesHasBeenSet = true; m_numValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation message to display.</p>
     */
    inline const Aws::String& GetValidationMessage() const{ return m_validationMessage; }
    inline bool ValidationMessageHasBeenSet() const { return m_validationMessageHasBeenSet; }
    inline void SetValidationMessage(const Aws::String& value) { m_validationMessageHasBeenSet = true; m_validationMessage = value; }
    inline void SetValidationMessage(Aws::String&& value) { m_validationMessageHasBeenSet = true; m_validationMessage = std::move(value); }
    inline void SetValidationMessage(const char* value) { m_validationMessageHasBeenSet = true; m_validationMessage.assign(value); }
    inline FieldValidationConfiguration& WithValidationMessage(const Aws::String& value) { SetValidationMessage(value); return *this;}
    inline FieldValidationConfiguration& WithValidationMessage(Aws::String&& value) { SetValidationMessage(std::move(value)); return *this;}
    inline FieldValidationConfiguration& WithValidationMessage(const char* value) { SetValidationMessage(value); return *this;}
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
