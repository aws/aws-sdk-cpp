/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The properties for the data export table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/TablePropertyDescription">AWS
   * API Reference</a></p>
   */
  class TablePropertyDescription
  {
  public:
    AWS_BCMDATAEXPORTS_API TablePropertyDescription() = default;
    AWS_BCMDATAEXPORTS_API TablePropertyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API TablePropertyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default value for the table.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    TablePropertyDescription& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TablePropertyDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TablePropertyDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid values for the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidValues() const { return m_validValues; }
    inline bool ValidValuesHasBeenSet() const { return m_validValuesHasBeenSet; }
    template<typename ValidValuesT = Aws::Vector<Aws::String>>
    void SetValidValues(ValidValuesT&& value) { m_validValuesHasBeenSet = true; m_validValues = std::forward<ValidValuesT>(value); }
    template<typename ValidValuesT = Aws::Vector<Aws::String>>
    TablePropertyDescription& WithValidValues(ValidValuesT&& value) { SetValidValues(std::forward<ValidValuesT>(value)); return *this;}
    template<typename ValidValuesT = Aws::String>
    TablePropertyDescription& AddValidValues(ValidValuesT&& value) { m_validValuesHasBeenSet = true; m_validValues.emplace_back(std::forward<ValidValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_validValues;
    bool m_validValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
