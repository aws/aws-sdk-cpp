/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DAX_API ParameterGroupStatus
  {
  public:
    ParameterGroupStatus();
    ParameterGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    ParameterGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroupStatus& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroupStatus& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroupStatus& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The status of parameter updates. </p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of parameter updates. </p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of parameter updates. </p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of parameter updates. </p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of parameter updates. </p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of parameter updates. </p>
     */
    inline ParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of parameter updates. </p>
     */
    inline ParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of parameter updates. </p>
     */
    inline ParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToReboot() const{ return m_nodeIdsToReboot; }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline bool NodeIdsToRebootHasBeenSet() const { return m_nodeIdsToRebootHasBeenSet; }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline void SetNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot = value; }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline void SetNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot = std::move(value); }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline ParameterGroupStatus& WithNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetNodeIdsToReboot(value); return *this;}

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline ParameterGroupStatus& WithNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetNodeIdsToReboot(std::move(value)); return *this;}

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline ParameterGroupStatus& AddNodeIdsToReboot(const Aws::String& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(value); return *this; }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline ParameterGroupStatus& AddNodeIdsToReboot(Aws::String&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(std::move(value)); return *this; }

    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline ParameterGroupStatus& AddNodeIdsToReboot(const char* value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(value); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;

    Aws::Vector<Aws::String> m_nodeIdsToReboot;
    bool m_nodeIdsToRebootHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
