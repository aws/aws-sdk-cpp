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
    AWS_APPFLOW_API CancelFlowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelFlowExecutions"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline CancelFlowExecutionsRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline CancelFlowExecutionsRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p>The name of a flow with active runs that you want to cancel.</p>
     */
    inline CancelFlowExecutionsRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionIds() const{ return m_executionIds; }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline bool ExecutionIdsHasBeenSet() const { return m_executionIdsHasBeenSet; }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline void SetExecutionIds(const Aws::Vector<Aws::String>& value) { m_executionIdsHasBeenSet = true; m_executionIds = value; }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline void SetExecutionIds(Aws::Vector<Aws::String>&& value) { m_executionIdsHasBeenSet = true; m_executionIds = std::move(value); }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline CancelFlowExecutionsRequest& WithExecutionIds(const Aws::Vector<Aws::String>& value) { SetExecutionIds(value); return *this;}

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline CancelFlowExecutionsRequest& WithExecutionIds(Aws::Vector<Aws::String>&& value) { SetExecutionIds(std::move(value)); return *this;}

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline CancelFlowExecutionsRequest& AddExecutionIds(const Aws::String& value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(value); return *this; }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline CancelFlowExecutionsRequest& AddExecutionIds(Aws::String&& value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of each active run to cancel. These runs must belong to the flow you
     * specify in your request.</p> <p>If you omit this parameter, your request ends
     * all active runs that belong to the flow.</p>
     */
    inline CancelFlowExecutionsRequest& AddExecutionIds(const char* value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(value); return *this; }

  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionIds;
    bool m_executionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
