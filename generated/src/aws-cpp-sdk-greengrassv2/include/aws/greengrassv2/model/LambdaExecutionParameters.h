/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/LambdaInputPayloadEncodingType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/LambdaLinuxProcessParams.h>
#include <aws/greengrassv2/model/LambdaEventSource.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains parameters for a Lambda function that runs on IoT
   * Greengrass.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaExecutionParameters">AWS
   * API Reference</a></p>
   */
  class LambdaExecutionParameters
  {
  public:
    AWS_GREENGRASSV2_API LambdaExecutionParameters() = default;
    AWS_GREENGRASSV2_API LambdaExecutionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaExecutionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline const Aws::Vector<LambdaEventSource>& GetEventSources() const { return m_eventSources; }
    inline bool EventSourcesHasBeenSet() const { return m_eventSourcesHasBeenSet; }
    template<typename EventSourcesT = Aws::Vector<LambdaEventSource>>
    void SetEventSources(EventSourcesT&& value) { m_eventSourcesHasBeenSet = true; m_eventSources = std::forward<EventSourcesT>(value); }
    template<typename EventSourcesT = Aws::Vector<LambdaEventSource>>
    LambdaExecutionParameters& WithEventSources(EventSourcesT&& value) { SetEventSources(std::forward<EventSourcesT>(value)); return *this;}
    template<typename EventSourcesT = LambdaEventSource>
    LambdaExecutionParameters& AddEventSources(EventSourcesT&& value) { m_eventSourcesHasBeenSet = true; m_eventSources.emplace_back(std::forward<EventSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum size of the message queue for the Lambda function component. The
     * IoT Greengrass core stores messages in a FIFO (first-in-first-out) queue until
     * it can run the Lambda function to consume each message.</p>
     */
    inline int GetMaxQueueSize() const { return m_maxQueueSize; }
    inline bool MaxQueueSizeHasBeenSet() const { return m_maxQueueSizeHasBeenSet; }
    inline void SetMaxQueueSize(int value) { m_maxQueueSizeHasBeenSet = true; m_maxQueueSize = value; }
    inline LambdaExecutionParameters& WithMaxQueueSize(int value) { SetMaxQueueSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that a non-pinned Lambda function can run at
     * the same time.</p>
     */
    inline int GetMaxInstancesCount() const { return m_maxInstancesCount; }
    inline bool MaxInstancesCountHasBeenSet() const { return m_maxInstancesCountHasBeenSet; }
    inline void SetMaxInstancesCount(int value) { m_maxInstancesCountHasBeenSet = true; m_maxInstancesCount = value; }
    inline LambdaExecutionParameters& WithMaxInstancesCount(int value) { SetMaxInstancesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time in seconds that a non-pinned Lambda function can
     * idle before the IoT Greengrass Core software stops its process.</p>
     */
    inline int GetMaxIdleTimeInSeconds() const { return m_maxIdleTimeInSeconds; }
    inline bool MaxIdleTimeInSecondsHasBeenSet() const { return m_maxIdleTimeInSecondsHasBeenSet; }
    inline void SetMaxIdleTimeInSeconds(int value) { m_maxIdleTimeInSecondsHasBeenSet = true; m_maxIdleTimeInSeconds = value; }
    inline LambdaExecutionParameters& WithMaxIdleTimeInSeconds(int value) { SetMaxIdleTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time in seconds that the Lambda function can process a
     * work item.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline LambdaExecutionParameters& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval in seconds at which a pinned (also known as long-lived) Lambda
     * function component sends status updates to the Lambda manager component.</p>
     */
    inline int GetStatusTimeoutInSeconds() const { return m_statusTimeoutInSeconds; }
    inline bool StatusTimeoutInSecondsHasBeenSet() const { return m_statusTimeoutInSecondsHasBeenSet; }
    inline void SetStatusTimeoutInSeconds(int value) { m_statusTimeoutInSecondsHasBeenSet = true; m_statusTimeoutInSeconds = value; }
    inline LambdaExecutionParameters& WithStatusTimeoutInSeconds(int value) { SetStatusTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the Lambda function is pinned, or long-lived.</p> <ul> <li>
     * <p>A pinned Lambda function starts when IoT Greengrass starts and keeps running
     * in its own container.</p> </li> <li> <p>A non-pinned Lambda function starts only
     * when it receives a work item and exists after it idles for
     * <code>maxIdleTimeInSeconds</code>. If the function has multiple work items, the
     * IoT Greengrass Core software creates multiple instances of the function.</p>
     * </li> </ul> <p>Default: <code>true</code> </p>
     */
    inline bool GetPinned() const { return m_pinned; }
    inline bool PinnedHasBeenSet() const { return m_pinnedHasBeenSet; }
    inline void SetPinned(bool value) { m_pinnedHasBeenSet = true; m_pinned = value; }
    inline LambdaExecutionParameters& WithPinned(bool value) { SetPinned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline LambdaInputPayloadEncodingType GetInputPayloadEncodingType() const { return m_inputPayloadEncodingType; }
    inline bool InputPayloadEncodingTypeHasBeenSet() const { return m_inputPayloadEncodingTypeHasBeenSet; }
    inline void SetInputPayloadEncodingType(LambdaInputPayloadEncodingType value) { m_inputPayloadEncodingTypeHasBeenSet = true; m_inputPayloadEncodingType = value; }
    inline LambdaExecutionParameters& WithInputPayloadEncodingType(LambdaInputPayloadEncodingType value) { SetInputPayloadEncodingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecArgs() const { return m_execArgs; }
    inline bool ExecArgsHasBeenSet() const { return m_execArgsHasBeenSet; }
    template<typename ExecArgsT = Aws::Vector<Aws::String>>
    void SetExecArgs(ExecArgsT&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::forward<ExecArgsT>(value); }
    template<typename ExecArgsT = Aws::Vector<Aws::String>>
    LambdaExecutionParameters& WithExecArgs(ExecArgsT&& value) { SetExecArgs(std::forward<ExecArgsT>(value)); return *this;}
    template<typename ExecArgsT = Aws::String>
    LambdaExecutionParameters& AddExecArgs(ExecArgsT&& value) { m_execArgsHasBeenSet = true; m_execArgs.emplace_back(std::forward<ExecArgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    LambdaExecutionParameters& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    LambdaExecutionParameters& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline const LambdaLinuxProcessParams& GetLinuxProcessParams() const { return m_linuxProcessParams; }
    inline bool LinuxProcessParamsHasBeenSet() const { return m_linuxProcessParamsHasBeenSet; }
    template<typename LinuxProcessParamsT = LambdaLinuxProcessParams>
    void SetLinuxProcessParams(LinuxProcessParamsT&& value) { m_linuxProcessParamsHasBeenSet = true; m_linuxProcessParams = std::forward<LinuxProcessParamsT>(value); }
    template<typename LinuxProcessParamsT = LambdaLinuxProcessParams>
    LambdaExecutionParameters& WithLinuxProcessParams(LinuxProcessParamsT&& value) { SetLinuxProcessParams(std::forward<LinuxProcessParamsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LambdaEventSource> m_eventSources;
    bool m_eventSourcesHasBeenSet = false;

    int m_maxQueueSize{0};
    bool m_maxQueueSizeHasBeenSet = false;

    int m_maxInstancesCount{0};
    bool m_maxInstancesCountHasBeenSet = false;

    int m_maxIdleTimeInSeconds{0};
    bool m_maxIdleTimeInSecondsHasBeenSet = false;

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_statusTimeoutInSeconds{0};
    bool m_statusTimeoutInSecondsHasBeenSet = false;

    bool m_pinned{false};
    bool m_pinnedHasBeenSet = false;

    LambdaInputPayloadEncodingType m_inputPayloadEncodingType{LambdaInputPayloadEncodingType::NOT_SET};
    bool m_inputPayloadEncodingTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_execArgs;
    bool m_execArgsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    LambdaLinuxProcessParams m_linuxProcessParams;
    bool m_linuxProcessParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
