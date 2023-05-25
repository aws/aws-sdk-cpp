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
    AWS_IOTEVENTS_API Input();
    AWS_IOTEVENTS_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }

    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }

    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline void SetInputConfiguration(const InputConfiguration& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = value; }

    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline void SetInputConfiguration(InputConfiguration&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::move(value); }

    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline Input& WithInputConfiguration(const InputConfiguration& value) { SetInputConfiguration(value); return *this;}

    /**
     * <p>Information about the configuration of an input.</p>
     */
    inline Input& WithInputConfiguration(InputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The definition of the input.</p>
     */
    inline const InputDefinition& GetInputDefinition() const{ return m_inputDefinition; }

    /**
     * <p>The definition of the input.</p>
     */
    inline bool InputDefinitionHasBeenSet() const { return m_inputDefinitionHasBeenSet; }

    /**
     * <p>The definition of the input.</p>
     */
    inline void SetInputDefinition(const InputDefinition& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = value; }

    /**
     * <p>The definition of the input.</p>
     */
    inline void SetInputDefinition(InputDefinition&& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = std::move(value); }

    /**
     * <p>The definition of the input.</p>
     */
    inline Input& WithInputDefinition(const InputDefinition& value) { SetInputDefinition(value); return *this;}

    /**
     * <p>The definition of the input.</p>
     */
    inline Input& WithInputDefinition(InputDefinition&& value) { SetInputDefinition(std::move(value)); return *this;}

  private:

    InputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    InputDefinition m_inputDefinition;
    bool m_inputDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
