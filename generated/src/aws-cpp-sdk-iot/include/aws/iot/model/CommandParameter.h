/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandParameterValue.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A map of key-value pairs that describe the command.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandParameter">AWS
   * API Reference</a></p>
   */
  class CommandParameter
  {
  public:
    AWS_IOT_API CommandParameter();
    AWS_IOT_API CommandParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CommandParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a specific parameter used in a command and command execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CommandParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CommandParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CommandParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used to describe the command. When you assign a value to a
     * parameter, it will override any default value that you had already
     * specified.</p>
     */
    inline const CommandParameterValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const CommandParameterValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(CommandParameterValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline CommandParameter& WithValue(const CommandParameterValue& value) { SetValue(value); return *this;}
    inline CommandParameter& WithValue(CommandParameterValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value used to describe the command. This is the value assumed by
     * the parameter if no other value is assigned to it.</p>
     */
    inline const CommandParameterValue& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const CommandParameterValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(CommandParameterValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline CommandParameter& WithDefaultValue(const CommandParameterValue& value) { SetDefaultValue(value); return *this;}
    inline CommandParameter& WithDefaultValue(CommandParameterValue&& value) { SetDefaultValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the command parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CommandParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CommandParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CommandParameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CommandParameterValue m_value;
    bool m_valueHasBeenSet = false;

    CommandParameterValue m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
