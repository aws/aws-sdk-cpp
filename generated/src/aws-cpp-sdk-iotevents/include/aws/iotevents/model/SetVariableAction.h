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
    AWS_IOTEVENTS_API SetVariableAction() = default;
    AWS_IOTEVENTS_API SetVariableAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SetVariableAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetVariableName() const { return m_variableName; }
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }
    template<typename VariableNameT = Aws::String>
    void SetVariableName(VariableNameT&& value) { m_variableNameHasBeenSet = true; m_variableName = std::forward<VariableNameT>(value); }
    template<typename VariableNameT = Aws::String>
    SetVariableAction& WithVariableName(VariableNameT&& value) { SetVariableName(std::forward<VariableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the variable.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    SetVariableAction& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
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
