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
    AWS_GREENGRASSV2_API LambdaExecutionParameters();
    AWS_GREENGRASSV2_API LambdaExecutionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaExecutionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline const Aws::Vector<LambdaEventSource>& GetEventSources() const{ return m_eventSources; }

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline bool EventSourcesHasBeenSet() const { return m_eventSourcesHasBeenSet; }

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline void SetEventSources(const Aws::Vector<LambdaEventSource>& value) { m_eventSourcesHasBeenSet = true; m_eventSources = value; }

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline void SetEventSources(Aws::Vector<LambdaEventSource>&& value) { m_eventSourcesHasBeenSet = true; m_eventSources = std::move(value); }

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline LambdaExecutionParameters& WithEventSources(const Aws::Vector<LambdaEventSource>& value) { SetEventSources(value); return *this;}

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline LambdaExecutionParameters& WithEventSources(Aws::Vector<LambdaEventSource>&& value) { SetEventSources(std::move(value)); return *this;}

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline LambdaExecutionParameters& AddEventSources(const LambdaEventSource& value) { m_eventSourcesHasBeenSet = true; m_eventSources.push_back(value); return *this; }

    /**
     * <p>The list of event sources to which to subscribe to receive work messages. The
     * Lambda function runs when it receives a message from an event source. You can
     * subscribe this function to local publish/subscribe messages and Amazon Web
     * Services IoT Core MQTT messages.</p>
     */
    inline LambdaExecutionParameters& AddEventSources(LambdaEventSource&& value) { m_eventSourcesHasBeenSet = true; m_eventSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum size of the message queue for the Lambda function component. The
     * IoT Greengrass core stores messages in a FIFO (first-in-first-out) queue until
     * it can run the Lambda function to consume each message.</p>
     */
    inline int GetMaxQueueSize() const{ return m_maxQueueSize; }

    /**
     * <p>The maximum size of the message queue for the Lambda function component. The
     * IoT Greengrass core stores messages in a FIFO (first-in-first-out) queue until
     * it can run the Lambda function to consume each message.</p>
     */
    inline bool MaxQueueSizeHasBeenSet() const { return m_maxQueueSizeHasBeenSet; }

    /**
     * <p>The maximum size of the message queue for the Lambda function component. The
     * IoT Greengrass core stores messages in a FIFO (first-in-first-out) queue until
     * it can run the Lambda function to consume each message.</p>
     */
    inline void SetMaxQueueSize(int value) { m_maxQueueSizeHasBeenSet = true; m_maxQueueSize = value; }

    /**
     * <p>The maximum size of the message queue for the Lambda function component. The
     * IoT Greengrass core stores messages in a FIFO (first-in-first-out) queue until
     * it can run the Lambda function to consume each message.</p>
     */
    inline LambdaExecutionParameters& WithMaxQueueSize(int value) { SetMaxQueueSize(value); return *this;}


    /**
     * <p>The maximum number of instances that a non-pinned Lambda function can run at
     * the same time.</p>
     */
    inline int GetMaxInstancesCount() const{ return m_maxInstancesCount; }

    /**
     * <p>The maximum number of instances that a non-pinned Lambda function can run at
     * the same time.</p>
     */
    inline bool MaxInstancesCountHasBeenSet() const { return m_maxInstancesCountHasBeenSet; }

    /**
     * <p>The maximum number of instances that a non-pinned Lambda function can run at
     * the same time.</p>
     */
    inline void SetMaxInstancesCount(int value) { m_maxInstancesCountHasBeenSet = true; m_maxInstancesCount = value; }

    /**
     * <p>The maximum number of instances that a non-pinned Lambda function can run at
     * the same time.</p>
     */
    inline LambdaExecutionParameters& WithMaxInstancesCount(int value) { SetMaxInstancesCount(value); return *this;}


    /**
     * <p>The maximum amount of time in seconds that a non-pinned Lambda function can
     * idle before the IoT Greengrass Core software stops its process.</p>
     */
    inline int GetMaxIdleTimeInSeconds() const{ return m_maxIdleTimeInSeconds; }

    /**
     * <p>The maximum amount of time in seconds that a non-pinned Lambda function can
     * idle before the IoT Greengrass Core software stops its process.</p>
     */
    inline bool MaxIdleTimeInSecondsHasBeenSet() const { return m_maxIdleTimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum amount of time in seconds that a non-pinned Lambda function can
     * idle before the IoT Greengrass Core software stops its process.</p>
     */
    inline void SetMaxIdleTimeInSeconds(int value) { m_maxIdleTimeInSecondsHasBeenSet = true; m_maxIdleTimeInSeconds = value; }

    /**
     * <p>The maximum amount of time in seconds that a non-pinned Lambda function can
     * idle before the IoT Greengrass Core software stops its process.</p>
     */
    inline LambdaExecutionParameters& WithMaxIdleTimeInSeconds(int value) { SetMaxIdleTimeInSeconds(value); return *this;}


    /**
     * <p>The maximum amount of time in seconds that the Lambda function can process a
     * work item.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum amount of time in seconds that the Lambda function can process a
     * work item.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum amount of time in seconds that the Lambda function can process a
     * work item.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum amount of time in seconds that the Lambda function can process a
     * work item.</p>
     */
    inline LambdaExecutionParameters& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The interval in seconds at which a pinned (also known as long-lived) Lambda
     * function component sends status updates to the Lambda manager component.</p>
     */
    inline int GetStatusTimeoutInSeconds() const{ return m_statusTimeoutInSeconds; }

    /**
     * <p>The interval in seconds at which a pinned (also known as long-lived) Lambda
     * function component sends status updates to the Lambda manager component.</p>
     */
    inline bool StatusTimeoutInSecondsHasBeenSet() const { return m_statusTimeoutInSecondsHasBeenSet; }

    /**
     * <p>The interval in seconds at which a pinned (also known as long-lived) Lambda
     * function component sends status updates to the Lambda manager component.</p>
     */
    inline void SetStatusTimeoutInSeconds(int value) { m_statusTimeoutInSecondsHasBeenSet = true; m_statusTimeoutInSeconds = value; }

    /**
     * <p>The interval in seconds at which a pinned (also known as long-lived) Lambda
     * function component sends status updates to the Lambda manager component.</p>
     */
    inline LambdaExecutionParameters& WithStatusTimeoutInSeconds(int value) { SetStatusTimeoutInSeconds(value); return *this;}


    /**
     * <p>Whether or not the Lambda function is pinned, or long-lived.</p> <ul> <li>
     * <p>A pinned Lambda function starts when IoT Greengrass starts and keeps running
     * in its own container.</p> </li> <li> <p>A non-pinned Lambda function starts only
     * when it receives a work item and exists after it idles for
     * <code>maxIdleTimeInSeconds</code>. If the function has multiple work items, the
     * IoT Greengrass Core software creates multiple instances of the function.</p>
     * </li> </ul> <p>Default: <code>true</code> </p>
     */
    inline bool GetPinned() const{ return m_pinned; }

    /**
     * <p>Whether or not the Lambda function is pinned, or long-lived.</p> <ul> <li>
     * <p>A pinned Lambda function starts when IoT Greengrass starts and keeps running
     * in its own container.</p> </li> <li> <p>A non-pinned Lambda function starts only
     * when it receives a work item and exists after it idles for
     * <code>maxIdleTimeInSeconds</code>. If the function has multiple work items, the
     * IoT Greengrass Core software creates multiple instances of the function.</p>
     * </li> </ul> <p>Default: <code>true</code> </p>
     */
    inline bool PinnedHasBeenSet() const { return m_pinnedHasBeenSet; }

    /**
     * <p>Whether or not the Lambda function is pinned, or long-lived.</p> <ul> <li>
     * <p>A pinned Lambda function starts when IoT Greengrass starts and keeps running
     * in its own container.</p> </li> <li> <p>A non-pinned Lambda function starts only
     * when it receives a work item and exists after it idles for
     * <code>maxIdleTimeInSeconds</code>. If the function has multiple work items, the
     * IoT Greengrass Core software creates multiple instances of the function.</p>
     * </li> </ul> <p>Default: <code>true</code> </p>
     */
    inline void SetPinned(bool value) { m_pinnedHasBeenSet = true; m_pinned = value; }

    /**
     * <p>Whether or not the Lambda function is pinned, or long-lived.</p> <ul> <li>
     * <p>A pinned Lambda function starts when IoT Greengrass starts and keeps running
     * in its own container.</p> </li> <li> <p>A non-pinned Lambda function starts only
     * when it receives a work item and exists after it idles for
     * <code>maxIdleTimeInSeconds</code>. If the function has multiple work items, the
     * IoT Greengrass Core software creates multiple instances of the function.</p>
     * </li> </ul> <p>Default: <code>true</code> </p>
     */
    inline LambdaExecutionParameters& WithPinned(bool value) { SetPinned(value); return *this;}


    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline const LambdaInputPayloadEncodingType& GetInputPayloadEncodingType() const{ return m_inputPayloadEncodingType; }

    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline bool InputPayloadEncodingTypeHasBeenSet() const { return m_inputPayloadEncodingTypeHasBeenSet; }

    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline void SetInputPayloadEncodingType(const LambdaInputPayloadEncodingType& value) { m_inputPayloadEncodingTypeHasBeenSet = true; m_inputPayloadEncodingType = value; }

    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline void SetInputPayloadEncodingType(LambdaInputPayloadEncodingType&& value) { m_inputPayloadEncodingTypeHasBeenSet = true; m_inputPayloadEncodingType = std::move(value); }

    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline LambdaExecutionParameters& WithInputPayloadEncodingType(const LambdaInputPayloadEncodingType& value) { SetInputPayloadEncodingType(value); return *this;}

    /**
     * <p>The encoding type that the Lambda function supports.</p> <p>Default:
     * <code>json</code> </p>
     */
    inline LambdaExecutionParameters& WithInputPayloadEncodingType(LambdaInputPayloadEncodingType&& value) { SetInputPayloadEncodingType(std::move(value)); return *this;}


    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecArgs() const{ return m_execArgs; }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline bool ExecArgsHasBeenSet() const { return m_execArgsHasBeenSet; }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline void SetExecArgs(const Aws::Vector<Aws::String>& value) { m_execArgsHasBeenSet = true; m_execArgs = value; }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline void SetExecArgs(Aws::Vector<Aws::String>&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::move(value); }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline LambdaExecutionParameters& WithExecArgs(const Aws::Vector<Aws::String>& value) { SetExecArgs(value); return *this;}

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline LambdaExecutionParameters& WithExecArgs(Aws::Vector<Aws::String>&& value) { SetExecArgs(std::move(value)); return *this;}

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline LambdaExecutionParameters& AddExecArgs(const Aws::String& value) { m_execArgsHasBeenSet = true; m_execArgs.push_back(value); return *this; }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline LambdaExecutionParameters& AddExecArgs(Aws::String&& value) { m_execArgsHasBeenSet = true; m_execArgs.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of arguments to pass to the Lambda function when it runs.</p>
     */
    inline LambdaExecutionParameters& AddExecArgs(const char* value) { m_execArgsHasBeenSet = true; m_execArgs.push_back(value); return *this; }


    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of environment variables that are available to the Lambda function
     * when it runs.</p>
     */
    inline LambdaExecutionParameters& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline const LambdaLinuxProcessParams& GetLinuxProcessParams() const{ return m_linuxProcessParams; }

    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline bool LinuxProcessParamsHasBeenSet() const { return m_linuxProcessParamsHasBeenSet; }

    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline void SetLinuxProcessParams(const LambdaLinuxProcessParams& value) { m_linuxProcessParamsHasBeenSet = true; m_linuxProcessParams = value; }

    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline void SetLinuxProcessParams(LambdaLinuxProcessParams&& value) { m_linuxProcessParamsHasBeenSet = true; m_linuxProcessParams = std::move(value); }

    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline LambdaExecutionParameters& WithLinuxProcessParams(const LambdaLinuxProcessParams& value) { SetLinuxProcessParams(value); return *this;}

    /**
     * <p>The parameters for the Linux process that contains the Lambda function.</p>
     */
    inline LambdaExecutionParameters& WithLinuxProcessParams(LambdaLinuxProcessParams&& value) { SetLinuxProcessParams(std::move(value)); return *this;}

  private:

    Aws::Vector<LambdaEventSource> m_eventSources;
    bool m_eventSourcesHasBeenSet = false;

    int m_maxQueueSize;
    bool m_maxQueueSizeHasBeenSet = false;

    int m_maxInstancesCount;
    bool m_maxInstancesCountHasBeenSet = false;

    int m_maxIdleTimeInSeconds;
    bool m_maxIdleTimeInSecondsHasBeenSet = false;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_statusTimeoutInSeconds;
    bool m_statusTimeoutInSecondsHasBeenSet = false;

    bool m_pinned;
    bool m_pinnedHasBeenSet = false;

    LambdaInputPayloadEncodingType m_inputPayloadEncodingType;
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
