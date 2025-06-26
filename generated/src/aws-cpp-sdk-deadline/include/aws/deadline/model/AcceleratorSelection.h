/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AcceleratorName.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Describes a specific GPU accelerator required for an Amazon Elastic Compute
   * Cloud worker host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AcceleratorSelection">AWS
   * API Reference</a></p>
   */
  class AcceleratorSelection
  {
  public:
    AWS_DEADLINE_API AcceleratorSelection() = default;
    AWS_DEADLINE_API AcceleratorSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AcceleratorSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the chip used by the GPU accelerator.</p> <p>If you specify
     * <code>l4</code> as the name of the accelerator, you must specify
     * <code>latest</code> or <code>grid:r570</code> as the runtime.</p> <p>The
     * available GPU accelerators are:</p> <ul> <li> <p> <code>t4</code> - NVIDIA T4
     * Tensor Core GPU</p> </li> <li> <p> <code>a10g</code> - NVIDIA A10G Tensor Core
     * GPU</p> </li> <li> <p> <code>l4</code> - NVIDIA L4 Tensor Core GPU</p> </li>
     * <li> <p> <code>l40s</code> - NVIDIA L40S Tensor Core GPU</p> </li> </ul>
     */
    inline AcceleratorName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AcceleratorName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AcceleratorSelection& WithName(AcceleratorName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the runtime driver to use for the GPU accelerator. You must use the
     * same runtime for all GPUs. </p> <p>You can choose from the following
     * runtimes:</p> <ul> <li> <p> <code>latest</code> - Use the latest runtime
     * available for the chip. If you specify <code>latest</code> and a new version of
     * the runtime is released, the new version of the runtime is used.</p> </li> <li>
     * <p> <code>grid:r570</code> - <a
     * href="https://docs.nvidia.com/vgpu/18.0/index.html">NVIDIA vGPU software 18</a>
     * </p> </li> <li> <p> <code>grid:r535</code> - <a
     * href="https://docs.nvidia.com/vgpu/16.0/index.html">NVIDIA vGPU software 16</a>
     * </p> </li> </ul> <p>If you don't specify a runtime, Deadline Cloud uses
     * <code>latest</code> as the default. However, if you have multiple accelerators
     * and specify <code>latest</code> for some and leave others blank, Deadline Cloud
     * raises an exception.</p>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    AcceleratorSelection& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}
  private:

    AcceleratorName m_name{AcceleratorName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
