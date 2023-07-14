﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/TargetPlatformOs.h>
#include <aws/lookoutvision/model/TargetPlatformArch.h>
#include <aws/lookoutvision/model/TargetPlatformAccelerator.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The platform on which a model runs on an AWS IoT Greengrass core
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TargetPlatform">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTFORVISION_API TargetPlatform
  {
  public:
    TargetPlatform();
    TargetPlatform(Aws::Utils::Json::JsonView jsonValue);
    TargetPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline const TargetPlatformOs& GetOs() const{ return m_os; }

    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }

    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline void SetOs(const TargetPlatformOs& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline void SetOs(TargetPlatformOs&& value) { m_osHasBeenSet = true; m_os = std::move(value); }

    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline TargetPlatform& WithOs(const TargetPlatformOs& value) { SetOs(value); return *this;}

    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline TargetPlatform& WithOs(TargetPlatformOs&& value) { SetOs(std::move(value)); return *this;}


    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline const TargetPlatformArch& GetArch() const{ return m_arch; }

    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }

    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline void SetArch(const TargetPlatformArch& value) { m_archHasBeenSet = true; m_arch = value; }

    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline void SetArch(TargetPlatformArch&& value) { m_archHasBeenSet = true; m_arch = std::move(value); }

    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline TargetPlatform& WithArch(const TargetPlatformArch& value) { SetArch(value); return *this;}

    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline TargetPlatform& WithArch(TargetPlatformArch&& value) { SetArch(std::move(value)); return *this;}


    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline const TargetPlatformAccelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline bool AcceleratorHasBeenSet() const { return m_acceleratorHasBeenSet; }

    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline void SetAccelerator(const TargetPlatformAccelerator& value) { m_acceleratorHasBeenSet = true; m_accelerator = value; }

    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline void SetAccelerator(TargetPlatformAccelerator&& value) { m_acceleratorHasBeenSet = true; m_accelerator = std::move(value); }

    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline TargetPlatform& WithAccelerator(const TargetPlatformAccelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>The target accelerator for the model. NVIDIA (Nvidia graphics processing
     * unit) is the only accelerator that is currently supported. You must also specify
     * the <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code>
     * compiler options. </p>
     */
    inline TargetPlatform& WithAccelerator(TargetPlatformAccelerator&& value) { SetAccelerator(std::move(value)); return *this;}

  private:

    TargetPlatformOs m_os;
    bool m_osHasBeenSet;

    TargetPlatformArch m_arch;
    bool m_archHasBeenSet;

    TargetPlatformAccelerator m_accelerator;
    bool m_acceleratorHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
