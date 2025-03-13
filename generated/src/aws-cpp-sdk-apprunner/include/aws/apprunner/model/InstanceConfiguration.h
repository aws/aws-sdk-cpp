/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the runtime configuration of an App Runner service instance
   * (scaling unit).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/InstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceConfiguration
  {
  public:
    AWS_APPRUNNER_API InstanceConfiguration() = default;
    AWS_APPRUNNER_API InstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API InstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    InstanceConfiguration& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    InstanceConfiguration& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const { return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    template<typename InstanceRoleArnT = Aws::String>
    void SetInstanceRoleArn(InstanceRoleArnT&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::forward<InstanceRoleArnT>(value); }
    template<typename InstanceRoleArnT = Aws::String>
    InstanceConfiguration& WithInstanceRoleArn(InstanceRoleArnT&& value) { SetInstanceRoleArn(std::forward<InstanceRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
