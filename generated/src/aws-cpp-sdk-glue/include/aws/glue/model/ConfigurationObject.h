/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the values that an admin sets for each job or session parameter
   * configured in a Glue usage profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConfigurationObject">AWS
   * API Reference</a></p>
   */
  class ConfigurationObject
  {
  public:
    AWS_GLUE_API ConfigurationObject();
    AWS_GLUE_API ConfigurationObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConfigurationObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A default value for the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline ConfigurationObject& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline ConfigurationObject& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline ConfigurationObject& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of allowed values for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline ConfigurationObject& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}
    inline ConfigurationObject& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline ConfigurationObject& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline ConfigurationObject& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    inline ConfigurationObject& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A minimum allowed value for the parameter.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }
    inline ConfigurationObject& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}
    inline ConfigurationObject& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}
    inline ConfigurationObject& WithMinValue(const char* value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A maximum allowed value for the parameter.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }
    inline ConfigurationObject& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}
    inline ConfigurationObject& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}
    inline ConfigurationObject& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
