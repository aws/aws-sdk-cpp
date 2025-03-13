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
    AWS_GLUE_API ConfigurationObject() = default;
    AWS_GLUE_API ConfigurationObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConfigurationObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A default value for the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ConfigurationObject& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of allowed values for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    ConfigurationObject& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = Aws::String>
    ConfigurationObject& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A minimum allowed value for the parameter.</p>
     */
    inline const Aws::String& GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    template<typename MinValueT = Aws::String>
    void SetMinValue(MinValueT&& value) { m_minValueHasBeenSet = true; m_minValue = std::forward<MinValueT>(value); }
    template<typename MinValueT = Aws::String>
    ConfigurationObject& WithMinValue(MinValueT&& value) { SetMinValue(std::forward<MinValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A maximum allowed value for the parameter.</p>
     */
    inline const Aws::String& GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    template<typename MaxValueT = Aws::String>
    void SetMaxValue(MaxValueT&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::forward<MaxValueT>(value); }
    template<typename MaxValueT = Aws::String>
    ConfigurationObject& WithMaxValue(MaxValueT&& value) { SetMaxValue(std::forward<MaxValueT>(value)); return *this;}
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
