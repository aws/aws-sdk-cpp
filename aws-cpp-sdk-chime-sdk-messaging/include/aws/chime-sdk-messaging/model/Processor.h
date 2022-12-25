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
    AWS_CHIMESDKMESSAGING_API Processor();
    AWS_CHIMESDKMESSAGING_API Processor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Processor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline Processor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline Processor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline Processor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline const ProcessorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline void SetConfiguration(const ProcessorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline void SetConfiguration(ProcessorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline Processor& WithConfiguration(const ProcessorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The information about the type of processor and its identifier.</p>
     */
    inline Processor& WithConfiguration(ProcessorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The sequence in which processors run. If you have multiple processors in a
     * channel flow, message processing goes through each processor in the sequence.
     * The value determines the sequence. At this point, we support only 1 processor
     * within a flow.</p>
     */
    inline int GetExecutionOrder() const{ return m_executionOrder; }

    /**
     * <p>The sequence in which processors run. If you have multiple processors in a
     * channel flow, message processing goes through each processor in the sequence.
     * The value determines the sequence. At this point, we support only 1 processor
     * within a flow.</p>
     */
    inline bool ExecutionOrderHasBeenSet() const { return m_executionOrderHasBeenSet; }

    /**
     * <p>The sequence in which processors run. If you have multiple processors in a
     * channel flow, message processing goes through each processor in the sequence.
     * The value determines the sequence. At this point, we support only 1 processor
     * within a flow.</p>
     */
    inline void SetExecutionOrder(int value) { m_executionOrderHasBeenSet = true; m_executionOrder = value; }

    /**
     * <p>The sequence in which processors run. If you have multiple processors in a
     * channel flow, message processing goes through each processor in the sequence.
     * The value determines the sequence. At this point, we support only 1 processor
     * within a flow.</p>
     */
    inline Processor& WithExecutionOrder(int value) { SetExecutionOrder(value); return *this;}


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
    inline const FallbackAction& GetFallbackAction() const{ return m_fallbackAction; }

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
    inline bool FallbackActionHasBeenSet() const { return m_fallbackActionHasBeenSet; }

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
    inline void SetFallbackAction(const FallbackAction& value) { m_fallbackActionHasBeenSet = true; m_fallbackAction = value; }

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
    inline void SetFallbackAction(FallbackAction&& value) { m_fallbackActionHasBeenSet = true; m_fallbackAction = std::move(value); }

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
    inline Processor& WithFallbackAction(const FallbackAction& value) { SetFallbackAction(value); return *this;}

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
    inline Processor& WithFallbackAction(FallbackAction&& value) { SetFallbackAction(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProcessorConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    int m_executionOrder;
    bool m_executionOrderHasBeenSet = false;

    FallbackAction m_fallbackAction;
    bool m_fallbackActionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
