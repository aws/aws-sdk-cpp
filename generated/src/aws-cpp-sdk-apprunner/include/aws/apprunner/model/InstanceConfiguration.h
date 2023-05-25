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
    AWS_APPRUNNER_API InstanceConfiguration();
    AWS_APPRUNNER_API InstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API InstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline InstanceConfiguration& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline InstanceConfiguration& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of CPU units reserved for each instance of your App Runner
     * service.</p> <p>Default: <code>1 vCPU</code> </p>
     */
    inline InstanceConfiguration& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline InstanceConfiguration& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline InstanceConfiguration& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount of memory, in MB or GB, reserved for each instance of your App
     * Runner service.</p> <p>Default: <code>2 GB</code> </p>
     */
    inline InstanceConfiguration& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline InstanceConfiguration& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline InstanceConfiguration& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that provides permissions to
     * your App Runner service. These are permissions that your code needs when it
     * calls any Amazon Web Services APIs.</p>
     */
    inline InstanceConfiguration& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}

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
