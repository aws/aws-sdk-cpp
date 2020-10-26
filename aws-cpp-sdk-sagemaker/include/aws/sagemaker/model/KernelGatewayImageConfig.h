/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FileSystemConfig.h>
#include <aws/sagemaker/model/KernelSpec.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration for an Amazon SageMaker KernelGateway app.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KernelGatewayImageConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API KernelGatewayImageConfig
  {
  public:
    KernelGatewayImageConfig();
    KernelGatewayImageConfig(Aws::Utils::Json::JsonView jsonValue);
    KernelGatewayImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline const Aws::Vector<KernelSpec>& GetKernelSpecs() const{ return m_kernelSpecs; }

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline bool KernelSpecsHasBeenSet() const { return m_kernelSpecsHasBeenSet; }

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline void SetKernelSpecs(const Aws::Vector<KernelSpec>& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs = value; }

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline void SetKernelSpecs(Aws::Vector<KernelSpec>&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs = std::move(value); }

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline KernelGatewayImageConfig& WithKernelSpecs(const Aws::Vector<KernelSpec>& value) { SetKernelSpecs(value); return *this;}

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline KernelGatewayImageConfig& WithKernelSpecs(Aws::Vector<KernelSpec>&& value) { SetKernelSpecs(std::move(value)); return *this;}

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline KernelGatewayImageConfig& AddKernelSpecs(const KernelSpec& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs.push_back(value); return *this; }

    /**
     * <p>Defines how a kernel is started and the arguments, environment variables, and
     * metadata that are available to the kernel.</p>
     */
    inline KernelGatewayImageConfig& AddKernelSpecs(KernelSpec&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs.push_back(std::move(value)); return *this; }


    /**
     * <p>The file system configuration.</p>
     */
    inline const FileSystemConfig& GetFileSystemConfig() const{ return m_fileSystemConfig; }

    /**
     * <p>The file system configuration.</p>
     */
    inline bool FileSystemConfigHasBeenSet() const { return m_fileSystemConfigHasBeenSet; }

    /**
     * <p>The file system configuration.</p>
     */
    inline void SetFileSystemConfig(const FileSystemConfig& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = value; }

    /**
     * <p>The file system configuration.</p>
     */
    inline void SetFileSystemConfig(FileSystemConfig&& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = std::move(value); }

    /**
     * <p>The file system configuration.</p>
     */
    inline KernelGatewayImageConfig& WithFileSystemConfig(const FileSystemConfig& value) { SetFileSystemConfig(value); return *this;}

    /**
     * <p>The file system configuration.</p>
     */
    inline KernelGatewayImageConfig& WithFileSystemConfig(FileSystemConfig&& value) { SetFileSystemConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<KernelSpec> m_kernelSpecs;
    bool m_kernelSpecsHasBeenSet;

    FileSystemConfig m_fileSystemConfig;
    bool m_fileSystemConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
