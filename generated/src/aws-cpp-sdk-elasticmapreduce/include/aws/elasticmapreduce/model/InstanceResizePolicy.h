/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Custom policy for requesting termination protection or termination of
   * specific instances when shrinking an instance group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceResizePolicy">AWS
   * API Reference</a></p>
   */
  class InstanceResizePolicy
  {
  public:
    AWS_EMR_API InstanceResizePolicy() = default;
    AWS_EMR_API InstanceResizePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceResizePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstancesToTerminate() const { return m_instancesToTerminate; }
    inline bool InstancesToTerminateHasBeenSet() const { return m_instancesToTerminateHasBeenSet; }
    template<typename InstancesToTerminateT = Aws::Vector<Aws::String>>
    void SetInstancesToTerminate(InstancesToTerminateT&& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate = std::forward<InstancesToTerminateT>(value); }
    template<typename InstancesToTerminateT = Aws::Vector<Aws::String>>
    InstanceResizePolicy& WithInstancesToTerminate(InstancesToTerminateT&& value) { SetInstancesToTerminate(std::forward<InstancesToTerminateT>(value)); return *this;}
    template<typename InstancesToTerminateT = Aws::String>
    InstanceResizePolicy& AddInstancesToTerminate(InstancesToTerminateT&& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate.emplace_back(std::forward<InstancesToTerminateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstancesToProtect() const { return m_instancesToProtect; }
    inline bool InstancesToProtectHasBeenSet() const { return m_instancesToProtectHasBeenSet; }
    template<typename InstancesToProtectT = Aws::Vector<Aws::String>>
    void SetInstancesToProtect(InstancesToProtectT&& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect = std::forward<InstancesToProtectT>(value); }
    template<typename InstancesToProtectT = Aws::Vector<Aws::String>>
    InstanceResizePolicy& WithInstancesToProtect(InstancesToProtectT&& value) { SetInstancesToProtect(std::forward<InstancesToProtectT>(value)); return *this;}
    template<typename InstancesToProtectT = Aws::String>
    InstanceResizePolicy& AddInstancesToProtect(InstancesToProtectT&& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect.emplace_back(std::forward<InstancesToProtectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Decommissioning timeout override for the specific list of instances to be
     * terminated.</p>
     */
    inline int GetInstanceTerminationTimeout() const { return m_instanceTerminationTimeout; }
    inline bool InstanceTerminationTimeoutHasBeenSet() const { return m_instanceTerminationTimeoutHasBeenSet; }
    inline void SetInstanceTerminationTimeout(int value) { m_instanceTerminationTimeoutHasBeenSet = true; m_instanceTerminationTimeout = value; }
    inline InstanceResizePolicy& WithInstanceTerminationTimeout(int value) { SetInstanceTerminationTimeout(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instancesToTerminate;
    bool m_instancesToTerminateHasBeenSet = false;

    Aws::Vector<Aws::String> m_instancesToProtect;
    bool m_instancesToProtectHasBeenSet = false;

    int m_instanceTerminationTimeout{0};
    bool m_instanceTerminationTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
