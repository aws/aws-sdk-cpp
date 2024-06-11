/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information about the variable and its new value.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SetVariableAction">AWS
   * API Reference</a></p>
   */
  class SetVariableAction
  {
  public:
    AWS_IOTEVENTS_API SetVariableAction();
    AWS_IOTEVENTS_API SetVariableAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SetVariableAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetVariableName() const{ return m_variableName; }
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }
    inline void SetVariableName(const Aws::String& value) { m_variableNameHasBeenSet = true; m_variableName = value; }
    inline void SetVariableName(Aws::String&& value) { m_variableNameHasBeenSet = true; m_variableName = std::move(value); }
    inline void SetVariableName(const char* value) { m_variableNameHasBeenSet = true; m_variableName.assign(value); }
    inline SetVariableAction& WithVariableName(const Aws::String& value) { SetVariableName(value); return *this;}
    inline SetVariableAction& WithVariableName(Aws::String&& value) { SetVariableName(std::move(value)); return *this;}
    inline SetVariableAction& WithVariableName(const char* value) { SetVariableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the variable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline SetVariableAction& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline SetVariableAction& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline SetVariableAction& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_variableName;
    bool m_variableNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
