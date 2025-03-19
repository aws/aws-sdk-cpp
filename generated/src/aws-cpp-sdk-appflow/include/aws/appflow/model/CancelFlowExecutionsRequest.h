/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class CancelFlowExecutionsRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API CancelFlowExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelFlowExecutions"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    CancelFlowExecutionsRequest& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionIds() const { return m_executionIds; }
    inline bool ExecutionIdsHasBeenSet() const { return m_executionIdsHasBeenSet; }
    template<typename ExecutionIdsT = Aws::Vector<Aws::String>>
    void SetExecutionIds(ExecutionIdsT&& value) { m_executionIdsHasBeenSet = true; m_executionIds = std::forward<ExecutionIdsT>(value); }
    template<typename ExecutionIdsT = Aws::Vector<Aws::String>>
    CancelFlowExecutionsRequest& WithExecutionIds(ExecutionIdsT&& value) { SetExecutionIds(std::forward<ExecutionIdsT>(value)); return *this;}
    template<typename ExecutionIdsT = Aws::String>
    CancelFlowExecutionsRequest& AddExecutionIds(ExecutionIdsT&& value) { m_executionIdsHasBeenSet = true; m_executionIds.emplace_back(std::forward<ExecutionIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionIds;
    bool m_executionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
