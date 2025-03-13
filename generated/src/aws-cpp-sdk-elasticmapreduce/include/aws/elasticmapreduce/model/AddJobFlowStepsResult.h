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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{
  /**
   * <p> The output for the <a>AddJobFlowSteps</a> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowStepsOutput">AWS
   * API Reference</a></p>
   */
  class AddJobFlowStepsResult
  {
  public:
    AWS_EMR_API AddJobFlowStepsResult() = default;
    AWS_EMR_API AddJobFlowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API AddJobFlowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const { return m_stepIds; }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    void SetStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds = std::forward<StepIdsT>(value); }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    AddJobFlowStepsResult& WithStepIds(StepIdsT&& value) { SetStepIds(std::forward<StepIdsT>(value)); return *this;}
    template<typename StepIdsT = Aws::String>
    AddJobFlowStepsResult& AddStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds.emplace_back(std::forward<StepIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddJobFlowStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
