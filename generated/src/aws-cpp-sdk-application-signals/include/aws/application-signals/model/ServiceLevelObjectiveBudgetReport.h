/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/EvaluationType.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetStatus.h>
#include <aws/application-signals/model/ServiceLevelIndicator.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicator.h>
#include <aws/application-signals/model/Goal.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>A structure containing an SLO budget report that you have
   * requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjectiveBudgetReport">AWS
   * API Reference</a></p>
   */
  class ServiceLevelObjectiveBudgetReport
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport() = default;
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceLevelObjectiveBudgetReport& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceLevelObjectiveBudgetReport& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this budget report is for a period-based SLO or a
     * request-based SLO.</p>
     */
    inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
    inline void SetEvaluationType(EvaluationType value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }
    inline ServiceLevelObjectiveBudgetReport& WithEvaluationType(EvaluationType value) { SetEvaluationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specified start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline ServiceLevelObjectiveBudgetStatus GetBudgetStatus() const { return m_budgetStatus; }
    inline bool BudgetStatusHasBeenSet() const { return m_budgetStatusHasBeenSet; }
    inline void SetBudgetStatus(ServiceLevelObjectiveBudgetStatus value) { m_budgetStatusHasBeenSet = true; m_budgetStatus = value; }
    inline ServiceLevelObjectiveBudgetReport& WithBudgetStatus(ServiceLevelObjectiveBudgetStatus value) { SetBudgetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number between 0 and 100 that represents the success percentage of your
     * application compared to the goal set by the SLO.</p> <p>If this is a
     * period-based SLO, the number is the percentage of time periods that the service
     * has attained the SLO's attainment goal, as of the time of the request.</p> <p>If
     * this is a request-based SLO, the number is the number of successful requests
     * divided by the number of total requests, multiplied by 100, during the time
     * range that you specified in your request.</p>
     */
    inline double GetAttainment() const { return m_attainment; }
    inline bool AttainmentHasBeenSet() const { return m_attainmentHasBeenSet; }
    inline void SetAttainment(double value) { m_attainmentHasBeenSet = true; m_attainment = value; }
    inline ServiceLevelObjectiveBudgetReport& WithAttainment(double value) { SetAttainment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of seconds in the error budget for the interval. This field
     * is included only if the SLO is a period-based SLO.</p>
     */
    inline int GetTotalBudgetSeconds() const { return m_totalBudgetSeconds; }
    inline bool TotalBudgetSecondsHasBeenSet() const { return m_totalBudgetSecondsHasBeenSet; }
    inline void SetTotalBudgetSeconds(int value) { m_totalBudgetSecondsHasBeenSet = true; m_totalBudgetSeconds = value; }
    inline ServiceLevelObjectiveBudgetReport& WithTotalBudgetSeconds(int value) { SetTotalBudgetSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget amount remaining before the SLO status becomes
     * <code>BREACHING</code>, at the time specified in the <code>Timestemp</code>
     * parameter of the request. If this value is negative, then the SLO is already in
     * <code>BREACHING</code> status.</p> <p> This field is included only if the SLO is
     * a period-based SLO.</p>
     */
    inline int GetBudgetSecondsRemaining() const { return m_budgetSecondsRemaining; }
    inline bool BudgetSecondsRemainingHasBeenSet() const { return m_budgetSecondsRemainingHasBeenSet; }
    inline void SetBudgetSecondsRemaining(int value) { m_budgetSecondsRemainingHasBeenSet = true; m_budgetSecondsRemaining = value; }
    inline ServiceLevelObjectiveBudgetReport& WithBudgetSecondsRemaining(int value) { SetBudgetSecondsRemaining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is displayed only for request-based SLOs. It displays the total
     * number of failed requests that can be tolerated during the time range between
     * the start of the interval and the time stamp supplied in the budget report
     * request. It is based on the total number of requests that occurred, and the
     * percentage specified in the attainment goal. If the number of failed requests
     * matches this number or is higher, then this SLO is currently breaching.</p>
     * <p>This number can go up and down between reports with different time stamps,
     * based on both how many total requests occur.</p>
     */
    inline int GetTotalBudgetRequests() const { return m_totalBudgetRequests; }
    inline bool TotalBudgetRequestsHasBeenSet() const { return m_totalBudgetRequestsHasBeenSet; }
    inline void SetTotalBudgetRequests(int value) { m_totalBudgetRequestsHasBeenSet = true; m_totalBudgetRequests = value; }
    inline ServiceLevelObjectiveBudgetReport& WithTotalBudgetRequests(int value) { SetTotalBudgetRequests(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is displayed only for request-based SLOs. It displays the number
     * of failed requests that can be tolerated before any more successful requests
     * occur, and still have the application meet its SLO goal.</p> <p>This number can
     * go up and down between different reports, based on both how many successful
     * requests and how many failed requests occur in that time.</p>
     */
    inline int GetBudgetRequestsRemaining() const { return m_budgetRequestsRemaining; }
    inline bool BudgetRequestsRemainingHasBeenSet() const { return m_budgetRequestsRemainingHasBeenSet; }
    inline void SetBudgetRequestsRemaining(int value) { m_budgetRequestsRemainingHasBeenSet = true; m_budgetRequestsRemaining = value; }
    inline ServiceLevelObjectiveBudgetReport& WithBudgetRequestsRemaining(int value) { SetBudgetRequestsRemaining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline const ServiceLevelIndicator& GetSli() const { return m_sli; }
    inline bool SliHasBeenSet() const { return m_sliHasBeenSet; }
    template<typename SliT = ServiceLevelIndicator>
    void SetSli(SliT&& value) { m_sliHasBeenSet = true; m_sli = std::forward<SliT>(value); }
    template<typename SliT = ServiceLevelIndicator>
    ServiceLevelObjectiveBudgetReport& WithSli(SliT&& value) { SetSli(std::forward<SliT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RequestBasedServiceLevelIndicator& GetRequestBasedSli() const { return m_requestBasedSli; }
    inline bool RequestBasedSliHasBeenSet() const { return m_requestBasedSliHasBeenSet; }
    template<typename RequestBasedSliT = RequestBasedServiceLevelIndicator>
    void SetRequestBasedSli(RequestBasedSliT&& value) { m_requestBasedSliHasBeenSet = true; m_requestBasedSli = std::forward<RequestBasedSliT>(value); }
    template<typename RequestBasedSliT = RequestBasedServiceLevelIndicator>
    ServiceLevelObjectiveBudgetReport& WithRequestBasedSli(RequestBasedSliT&& value) { SetRequestBasedSli(std::forward<RequestBasedSliT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Goal& GetGoal() const { return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    template<typename GoalT = Goal>
    void SetGoal(GoalT&& value) { m_goalHasBeenSet = true; m_goal = std::forward<GoalT>(value); }
    template<typename GoalT = Goal>
    ServiceLevelObjectiveBudgetReport& WithGoal(GoalT&& value) { SetGoal(std::forward<GoalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EvaluationType m_evaluationType{EvaluationType::NOT_SET};
    bool m_evaluationTypeHasBeenSet = false;

    ServiceLevelObjectiveBudgetStatus m_budgetStatus{ServiceLevelObjectiveBudgetStatus::NOT_SET};
    bool m_budgetStatusHasBeenSet = false;

    double m_attainment{0.0};
    bool m_attainmentHasBeenSet = false;

    int m_totalBudgetSeconds{0};
    bool m_totalBudgetSecondsHasBeenSet = false;

    int m_budgetSecondsRemaining{0};
    bool m_budgetSecondsRemainingHasBeenSet = false;

    int m_totalBudgetRequests{0};
    bool m_totalBudgetRequestsHasBeenSet = false;

    int m_budgetRequestsRemaining{0};
    bool m_budgetRequestsRemainingHasBeenSet = false;

    ServiceLevelIndicator m_sli;
    bool m_sliHasBeenSet = false;

    RequestBasedServiceLevelIndicator m_requestBasedSli;
    bool m_requestBasedSliHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
