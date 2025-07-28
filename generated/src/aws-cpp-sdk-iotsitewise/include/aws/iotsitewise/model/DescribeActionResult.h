/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TargetResource.h>
#include <aws/iotsitewise/model/ActionPayload.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/ResolveTo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeActionResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeActionResult() = default;
    AWS_IOTSITEWISE_API DescribeActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    DescribeActionResult& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    DescribeActionResult& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const { return m_actionDefinitionId; }
    template<typename ActionDefinitionIdT = Aws::String>
    void SetActionDefinitionId(ActionDefinitionIdT&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::forward<ActionDefinitionIdT>(value); }
    template<typename ActionDefinitionIdT = Aws::String>
    DescribeActionResult& WithActionDefinitionId(ActionDefinitionIdT&& value) { SetActionDefinitionId(std::forward<ActionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON payload of the action.</p>
     */
    inline const ActionPayload& GetActionPayload() const { return m_actionPayload; }
    template<typename ActionPayloadT = ActionPayload>
    void SetActionPayload(ActionPayloadT&& value) { m_actionPayloadHasBeenSet = true; m_actionPayload = std::forward<ActionPayloadT>(value); }
    template<typename ActionPayloadT = ActionPayload>
    DescribeActionResult& WithActionPayload(ActionPayloadT&& value) { SetActionPayload(std::forward<ActionPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the action was executed.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionTime() const { return m_executionTime; }
    template<typename ExecutionTimeT = Aws::Utils::DateTime>
    void SetExecutionTime(ExecutionTimeT&& value) { m_executionTimeHasBeenSet = true; m_executionTime = std::forward<ExecutionTimeT>(value); }
    template<typename ExecutionTimeT = Aws::Utils::DateTime>
    DescribeActionResult& WithExecutionTime(ExecutionTimeT&& value) { SetExecutionTime(std::forward<ExecutionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this action resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    DescribeActionResult& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    ActionPayload m_actionPayload;
    bool m_actionPayloadHasBeenSet = false;

    Aws::Utils::DateTime m_executionTime{};
    bool m_executionTimeHasBeenSet = false;

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
