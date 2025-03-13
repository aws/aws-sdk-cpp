/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>The status of a parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/ParameterGroupStatus">AWS
   * API Reference</a></p>
   */
  class ParameterGroupStatus
  {
  public:
    AWS_DAX_API ParameterGroupStatus() = default;
    AWS_DAX_API ParameterGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API ParameterGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    ParameterGroupStatus& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates. </p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    ParameterGroupStatus& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToReboot() const { return m_nodeIdsToReboot; }
    inline bool NodeIdsToRebootHasBeenSet() const { return m_nodeIdsToRebootHasBeenSet; }
    template<typename NodeIdsToRebootT = Aws::Vector<Aws::String>>
    void SetNodeIdsToReboot(NodeIdsToRebootT&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot = std::forward<NodeIdsToRebootT>(value); }
    template<typename NodeIdsToRebootT = Aws::Vector<Aws::String>>
    ParameterGroupStatus& WithNodeIdsToReboot(NodeIdsToRebootT&& value) { SetNodeIdsToReboot(std::forward<NodeIdsToRebootT>(value)); return *this;}
    template<typename NodeIdsToRebootT = Aws::String>
    ParameterGroupStatus& AddNodeIdsToReboot(NodeIdsToRebootT&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.emplace_back(std::forward<NodeIdsToRebootT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIdsToReboot;
    bool m_nodeIdsToRebootHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
