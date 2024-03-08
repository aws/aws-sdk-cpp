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
    AWS_BCMDATAEXPORTS_API TablePropertyDescription();
    AWS_BCMDATAEXPORTS_API TablePropertyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API TablePropertyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value for the table.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the table.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the table.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the table.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the table.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the table.</p>
     */
    inline TablePropertyDescription& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the table.</p>
     */
    inline TablePropertyDescription& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the table.</p>
     */
    inline TablePropertyDescription& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description for the table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the table.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the table.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the table.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the table.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the table.</p>
     */
    inline TablePropertyDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the table.</p>
     */
    inline TablePropertyDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the table.</p>
     */
    inline TablePropertyDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TablePropertyDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TablePropertyDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TablePropertyDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The valid values for the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidValues() const{ return m_validValues; }

    /**
     * <p>The valid values for the table.</p>
     */
    inline bool ValidValuesHasBeenSet() const { return m_validValuesHasBeenSet; }

    /**
     * <p>The valid values for the table.</p>
     */
    inline void SetValidValues(const Aws::Vector<Aws::String>& value) { m_validValuesHasBeenSet = true; m_validValues = value; }

    /**
     * <p>The valid values for the table.</p>
     */
    inline void SetValidValues(Aws::Vector<Aws::String>&& value) { m_validValuesHasBeenSet = true; m_validValues = std::move(value); }

    /**
     * <p>The valid values for the table.</p>
     */
    inline TablePropertyDescription& WithValidValues(const Aws::Vector<Aws::String>& value) { SetValidValues(value); return *this;}

    /**
     * <p>The valid values for the table.</p>
     */
    inline TablePropertyDescription& WithValidValues(Aws::Vector<Aws::String>&& value) { SetValidValues(std::move(value)); return *this;}

    /**
     * <p>The valid values for the table.</p>
     */
    inline TablePropertyDescription& AddValidValues(const Aws::String& value) { m_validValuesHasBeenSet = true; m_validValues.push_back(value); return *this; }

    /**
     * <p>The valid values for the table.</p>
     */
    inline TablePropertyDescription& AddValidValues(Aws::String&& value) { m_validValuesHasBeenSet = true; m_validValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The valid values for the table.</p>
     */
    inline TablePropertyDescription& AddValidValues(const char* value) { m_validValuesHasBeenSet = true; m_validValues.push_back(value); return *this; }

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
