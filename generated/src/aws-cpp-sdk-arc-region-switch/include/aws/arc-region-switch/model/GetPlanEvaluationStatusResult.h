/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-region-switch/model/EvaluationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/ResourceWarning.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class GetPlanEvaluationStatusResult
  {
  public:
    AWS_ARCREGIONSWITCH_API GetPlanEvaluationStatusResult() = default;
    AWS_ARCREGIONSWITCH_API GetPlanEvaluationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCREGIONSWITCH_API GetPlanEvaluationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    GetPlanEvaluationStatusResult& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last time that Region switch ran an evaluation of the
     * plan.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluationTime() const { return m_lastEvaluationTime; }
    template<typename LastEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastEvaluationTime(LastEvaluationTimeT&& value) { m_lastEvaluationTimeHasBeenSet = true; m_lastEvaluationTime = std::forward<LastEvaluationTimeT>(value); }
    template<typename LastEvaluationTimeT = Aws::Utils::DateTime>
    GetPlanEvaluationStatusResult& WithLastEvaluationTime(LastEvaluationTimeT&& value) { SetLastEvaluationTime(std::forward<LastEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the last evaluation of the plan.</p>
     */
    inline const Aws::String& GetLastEvaluatedVersion() const { return m_lastEvaluatedVersion; }
    template<typename LastEvaluatedVersionT = Aws::String>
    void SetLastEvaluatedVersion(LastEvaluatedVersionT&& value) { m_lastEvaluatedVersionHasBeenSet = true; m_lastEvaluatedVersion = std::forward<LastEvaluatedVersionT>(value); }
    template<typename LastEvaluatedVersionT = Aws::String>
    GetPlanEvaluationStatusResult& WithLastEvaluatedVersion(LastEvaluatedVersionT&& value) { SetLastEvaluatedVersion(std::forward<LastEvaluatedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the plan.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetPlanEvaluationStatusResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation state for the plan.</p>
     */
    inline EvaluationStatus GetEvaluationState() const { return m_evaluationState; }
    inline void SetEvaluationState(EvaluationStatus value) { m_evaluationStateHasBeenSet = true; m_evaluationState = value; }
    inline GetPlanEvaluationStatusResult& WithEvaluationState(EvaluationStatus value) { SetEvaluationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current evaluation warnings for the plan. </p>
     */
    inline const Aws::Vector<ResourceWarning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<ResourceWarning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<ResourceWarning>>
    GetPlanEvaluationStatusResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = ResourceWarning>
    GetPlanEvaluationStatusResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>nextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>nextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPlanEvaluationStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPlanEvaluationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planArn;
    bool m_planArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastEvaluationTime{};
    bool m_lastEvaluationTimeHasBeenSet = false;

    Aws::String m_lastEvaluatedVersion;
    bool m_lastEvaluatedVersionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    EvaluationStatus m_evaluationState{EvaluationStatus::NOT_SET};
    bool m_evaluationStateHasBeenSet = false;

    Aws::Vector<ResourceWarning> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
