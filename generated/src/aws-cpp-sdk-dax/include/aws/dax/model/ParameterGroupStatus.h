﻿/**
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
    AWS_DAX_API ParameterGroupStatus();
    AWS_DAX_API ParameterGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API ParameterGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }
    inline ParameterGroupStatus& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline ParameterGroupStatus& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline ParameterGroupStatus& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates. </p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }
    inline ParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}
    inline ParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}
    inline ParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node IDs of one or more nodes to be rebooted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToReboot() const{ return m_nodeIdsToReboot; }
    inline bool NodeIdsToRebootHasBeenSet() const { return m_nodeIdsToRebootHasBeenSet; }
    inline void SetNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot = value; }
    inline void SetNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot = std::move(value); }
    inline ParameterGroupStatus& WithNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetNodeIdsToReboot(value); return *this;}
    inline ParameterGroupStatus& WithNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetNodeIdsToReboot(std::move(value)); return *this;}
    inline ParameterGroupStatus& AddNodeIdsToReboot(const Aws::String& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(value); return *this; }
    inline ParameterGroupStatus& AddNodeIdsToReboot(Aws::String&& value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(std::move(value)); return *this; }
    inline ParameterGroupStatus& AddNodeIdsToReboot(const char* value) { m_nodeIdsToRebootHasBeenSet = true; m_nodeIdsToReboot.push_back(value); return *this; }
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
