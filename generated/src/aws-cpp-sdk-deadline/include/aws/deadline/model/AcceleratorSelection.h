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
   * <p>Values that you can use to select a particular Amazon EC2 instance type.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AcceleratorSelection">AWS
   * API Reference</a></p>
   */
  class AcceleratorSelection
  {
  public:
    AWS_DEADLINE_API AcceleratorSelection();
    AWS_DEADLINE_API AcceleratorSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AcceleratorSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the GPU accelerator.</p>
     */
    inline const AcceleratorName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const AcceleratorName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(AcceleratorName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline AcceleratorSelection& WithName(const AcceleratorName& value) { SetName(value); return *this;}
    inline AcceleratorSelection& WithName(AcceleratorName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The driver version that the GPU accelerator uses. </p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }
    inline AcceleratorSelection& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline AcceleratorSelection& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline AcceleratorSelection& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}
  private:

    AcceleratorName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
