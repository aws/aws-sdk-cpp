/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/InputConfiguration.h>
#include <aws/iotevents/model/InputDefinition.h>
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
   * <p>Information about the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Input">AWS API
   * Reference</a></p>
   */
  class Input
  {
  public:
    AWS_IOTEVENTS_API Input() = default;
    AWS_IOTEVENTS_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    template<typename InputConfigurationT = InputConfiguration>
    void SetInputConfiguration(InputConfigurationT&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::forward<InputConfigurationT>(value); }
    template<typename InputConfigurationT = InputConfiguration>
    Input& WithInputConfiguration(InputConfigurationT&& value) { SetInputConfiguration(std::forward<InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the input.</p>
     */
    inline const InputDefinition& GetInputDefinition() const { return m_inputDefinition; }
    inline bool InputDefinitionHasBeenSet() const { return m_inputDefinitionHasBeenSet; }
    template<typename InputDefinitionT = InputDefinition>
    void SetInputDefinition(InputDefinitionT&& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = std::forward<InputDefinitionT>(value); }
    template<typename InputDefinitionT = InputDefinition>
    Input& WithInputDefinition(InputDefinitionT&& value) { SetInputDefinition(std::forward<InputDefinitionT>(value)); return *this;}
    ///@}
  private:

    InputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    InputDefinition m_inputDefinition;
    bool m_inputDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
