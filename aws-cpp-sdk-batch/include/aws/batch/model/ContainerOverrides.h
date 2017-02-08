/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/KeyValuePair.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>The overrides that should be sent to a container.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ContainerOverrides
  {
  public:
    ContainerOverrides();
    ContainerOverrides(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerOverrides& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The number of vCPUs to reserve for the container. This value overrides the
     * value set in the job definition.</p>
     */
    inline int GetVcpus() const{ return m_vcpus; }

    /**
     * <p>The number of vCPUs to reserve for the container. This value overrides the
     * value set in the job definition.</p>
     */
    inline void SetVcpus(int value) { m_vcpusHasBeenSet = true; m_vcpus = value; }

    /**
     * <p>The number of vCPUs to reserve for the container. This value overrides the
     * value set in the job definition.</p>
     */
    inline ContainerOverrides& WithVcpus(int value) { SetVcpus(value); return *this;}

    /**
     * <p>The number of MiB of memory reserved for the job. This value overrides the
     * value set in the job definition.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The number of MiB of memory reserved for the job. This value overrides the
     * value set in the job definition.</p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The number of MiB of memory reserved for the job. This value overrides the
     * value set in the job definition.</p>
     */
    inline ContainerOverrides& WithMemory(int value) { SetMemory(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline ContainerOverrides& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline ContainerOverrides& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline ContainerOverrides& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>
     */
    inline ContainerOverrides& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

  private:
    int m_vcpus;
    bool m_vcpusHasBeenSet;
    int m_memory;
    bool m_memoryHasBeenSet;
    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;
    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
