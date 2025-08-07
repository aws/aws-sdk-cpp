/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p> An object that represents the compute environment architecture for Batch
   * jobs on Fargate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RuntimePlatform">AWS
   * API Reference</a></p>
   */
  class RuntimePlatform
  {
  public:
    AWS_BATCH_API RuntimePlatform() = default;
    AWS_BATCH_API RuntimePlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API RuntimePlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating system for the compute environment. Valid values are:
     * <code>LINUX</code> (default), <code>WINDOWS_SERVER_2019_CORE</code>,
     * <code>WINDOWS_SERVER_2019_FULL</code>, <code>WINDOWS_SERVER_2022_CORE</code>,
     * and <code>WINDOWS_SERVER_2022_FULL</code>.</p>  <p>The following
     * parameters can’t be set for Windows containers: <code>linuxParameters</code>,
     * <code>privileged</code>, <code>user</code>, <code>ulimits</code>,
     * <code>readonlyRootFilesystem</code>, and
     * <code>efsVolumeConfiguration</code>.</p>   <p>The Batch Scheduler
     * checks the compute environments that are attached to the job queue before
     * registering a task definition with Fargate. In this scenario, the job queue is
     * where the job is submitted. If the job requires a Windows container and the
     * first compute environment is <code>LINUX</code>, the compute environment is
     * skipped and the next compute environment is checked until a Windows-based
     * compute environment is found.</p>   <p>Fargate Spot is not
     * supported on Windows-based containers on Fargate. A job queue will be blocked if
     * a Windows job is submitted to a job queue with only Fargate Spot compute
     * environments. However, you can attach both <code>FARGATE</code> and
     * <code>FARGATE_SPOT</code> compute environments to the same job queue.</p>
     * 
     */
    inline const Aws::String& GetOperatingSystemFamily() const { return m_operatingSystemFamily; }
    inline bool OperatingSystemFamilyHasBeenSet() const { return m_operatingSystemFamilyHasBeenSet; }
    template<typename OperatingSystemFamilyT = Aws::String>
    void SetOperatingSystemFamily(OperatingSystemFamilyT&& value) { m_operatingSystemFamilyHasBeenSet = true; m_operatingSystemFamily = std::forward<OperatingSystemFamilyT>(value); }
    template<typename OperatingSystemFamilyT = Aws::String>
    RuntimePlatform& WithOperatingSystemFamily(OperatingSystemFamilyT&& value) { SetOperatingSystemFamily(std::forward<OperatingSystemFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vCPU architecture. The default value is <code>X86_64</code>. Valid values
     * are <code>X86_64</code> and <code>ARM64</code>.</p>  <p>This parameter
     * must be set to <code>X86_64</code> for Windows containers.</p>  
     * <p>Fargate Spot is not supported on Windows-based containers on Fargate. A job
     * queue will be blocked if a Windows job is submitted to a job queue with only
     * Fargate Spot compute environments. However, you can attach both
     * <code>FARGATE</code> and <code>FARGATE_SPOT</code> compute environments to the
     * same job queue.</p> 
     */
    inline const Aws::String& GetCpuArchitecture() const { return m_cpuArchitecture; }
    inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }
    template<typename CpuArchitectureT = Aws::String>
    void SetCpuArchitecture(CpuArchitectureT&& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = std::forward<CpuArchitectureT>(value); }
    template<typename CpuArchitectureT = Aws::String>
    RuntimePlatform& WithCpuArchitecture(CpuArchitectureT&& value) { SetCpuArchitecture(std::forward<CpuArchitectureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operatingSystemFamily;
    bool m_operatingSystemFamilyHasBeenSet = false;

    Aws::String m_cpuArchitecture;
    bool m_cpuArchitectureHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
