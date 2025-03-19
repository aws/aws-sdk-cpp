/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ProcessorConfiguration.h>
#include <aws/chime-sdk-messaging/model/FallbackAction.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The information about a processor in a channel flow.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/Processor">AWS
   * API Reference</a></p>
   */
  class Processor
  {
  public:
    AWS_CHIMESDKMESSAGING_API Processor() = default;
    AWS_CHIMESDKMESSAGING_API Processor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Processor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Processor& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline const ProcessorConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ProcessorConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ProcessorConfiguration>
    Processor& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence in which processors run. If you have multiple processors in a
     * channel flow, message processing goes through each processor in the sequence.
     * The value determines the sequence. At this point, we support only 1 processor
     * within a flow.</p>
     */
    inline int GetExecutionOrder() const { return m_executionOrder; }
    inline bool ExecutionOrderHasBeenSet() const { return m_executionOrderHasBeenSet; }
    inline void SetExecutionOrder(int value) { m_executionOrderHasBeenSet = true; m_executionOrder = value; }
    inline Processor& WithExecutionOrder(int value) { SetExecutionOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to continue with message processing or stop it in cases
     * where communication with a processor fails. If a processor has a fallback action
     * of <code>ABORT</code> and communication with it fails, the processor sets the
     * message status to <code>FAILED</code> and does not send the message to any
     * recipients. Note that if the last processor in the channel flow sequence has a
     * fallback action of <code>CONTINUE</code> and communication with the processor
     * fails, then the message is considered processed and sent to recipients of the
     * channel.</p>
     */
    inline FallbackAction GetFallbackAction() const { return m_fallbackAction; }
    inline bool FallbackActionHasBeenSet() const { return m_fallbackActionHasBeenSet; }
    inline void SetFallbackAction(FallbackAction value) { m_fallbackActionHasBeenSet = true; m_fallbackAction = value; }
    inline Processor& WithFallbackAction(FallbackAction value) { SetFallbackAction(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProcessorConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    int m_executionOrder{0};
    bool m_executionOrderHasBeenSet = false;

    FallbackAction m_fallbackAction{FallbackAction::NOT_SET};
    bool m_fallbackActionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
