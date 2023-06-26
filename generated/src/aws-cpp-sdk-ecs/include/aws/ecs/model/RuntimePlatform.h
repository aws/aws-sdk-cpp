/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CPUArchitecture.h>
#include <aws/ecs/model/OSFamily.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Information about the platform for the Amazon ECS service or task.</p> <p>For
   * more information about <code>RuntimePlatform</code>, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#runtime-platform">RuntimePlatform</a>
   * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RuntimePlatform">AWS
   * API Reference</a></p>
   */
  class RuntimePlatform
  {
  public:
    AWS_ECS_API RuntimePlatform();
    AWS_ECS_API RuntimePlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API RuntimePlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline const CPUArchitecture& GetCpuArchitecture() const{ return m_cpuArchitecture; }

    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }

    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline void SetCpuArchitecture(const CPUArchitecture& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = value; }

    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline void SetCpuArchitecture(CPUArchitecture&& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = std::move(value); }

    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline RuntimePlatform& WithCpuArchitecture(const CPUArchitecture& value) { SetCpuArchitecture(value); return *this;}

    /**
     * <p>The CPU architecture.</p> <p>You can run your Linux tasks on an ARM-based
     * platform by setting the value to <code>ARM64</code>. This option is available
     * for tasks that run on Linux Amazon EC2 instance or Linux containers on
     * Fargate.</p>
     */
    inline RuntimePlatform& WithCpuArchitecture(CPUArchitecture&& value) { SetCpuArchitecture(std::move(value)); return *this;}


    /**
     * <p>The operating system.</p>
     */
    inline const OSFamily& GetOperatingSystemFamily() const{ return m_operatingSystemFamily; }

    /**
     * <p>The operating system.</p>
     */
    inline bool OperatingSystemFamilyHasBeenSet() const { return m_operatingSystemFamilyHasBeenSet; }

    /**
     * <p>The operating system.</p>
     */
    inline void SetOperatingSystemFamily(const OSFamily& value) { m_operatingSystemFamilyHasBeenSet = true; m_operatingSystemFamily = value; }

    /**
     * <p>The operating system.</p>
     */
    inline void SetOperatingSystemFamily(OSFamily&& value) { m_operatingSystemFamilyHasBeenSet = true; m_operatingSystemFamily = std::move(value); }

    /**
     * <p>The operating system.</p>
     */
    inline RuntimePlatform& WithOperatingSystemFamily(const OSFamily& value) { SetOperatingSystemFamily(value); return *this;}

    /**
     * <p>The operating system.</p>
     */
    inline RuntimePlatform& WithOperatingSystemFamily(OSFamily&& value) { SetOperatingSystemFamily(std::move(value)); return *this;}

  private:

    CPUArchitecture m_cpuArchitecture;
    bool m_cpuArchitectureHasBeenSet = false;

    OSFamily m_operatingSystemFamily;
    bool m_operatingSystemFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
