/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetStatus.h>
#include <aws/application-signals/model/ServiceLevelIndicator.h>
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
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport();
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SLO that this report is for.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline const ServiceLevelObjectiveBudgetStatus& GetBudgetStatus() const{ return m_budgetStatus; }

    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline bool BudgetStatusHasBeenSet() const { return m_budgetStatusHasBeenSet; }

    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline void SetBudgetStatus(const ServiceLevelObjectiveBudgetStatus& value) { m_budgetStatusHasBeenSet = true; m_budgetStatus = value; }

    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline void SetBudgetStatus(ServiceLevelObjectiveBudgetStatus&& value) { m_budgetStatusHasBeenSet = true; m_budgetStatus = std::move(value); }

    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline ServiceLevelObjectiveBudgetReport& WithBudgetStatus(const ServiceLevelObjectiveBudgetStatus& value) { SetBudgetStatus(value); return *this;}

    /**
     * <p>The status of this SLO, as it relates to the error budget for the entire time
     * interval.</p> <ul> <li> <p> <code>OK</code> means that the SLO had remaining
     * budget above the warning threshold, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>WARNING</code> means that the
     * SLO's remaining budget was below the warning threshold, as of the time that you
     * specified in <code>TimeStamp</code>.</p> </li> <li> <p> <code>BREACHED</code>
     * means that the SLO's budget was exhausted, as of the time that you specified in
     * <code>TimeStamp</code>.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> means
     * that the specifed start and end times were before the SLO was created, or that
     * attainment data is missing.</p> </li> </ul>
     */
    inline ServiceLevelObjectiveBudgetReport& WithBudgetStatus(ServiceLevelObjectiveBudgetStatus&& value) { SetBudgetStatus(std::move(value)); return *this;}


    /**
     * <p>A number between 0 and 100 that represents the percentage of time periods
     * that the service has attained the SLO's attainment goal, as of the time of the
     * request.</p>
     */
    inline double GetAttainment() const{ return m_attainment; }

    /**
     * <p>A number between 0 and 100 that represents the percentage of time periods
     * that the service has attained the SLO's attainment goal, as of the time of the
     * request.</p>
     */
    inline bool AttainmentHasBeenSet() const { return m_attainmentHasBeenSet; }

    /**
     * <p>A number between 0 and 100 that represents the percentage of time periods
     * that the service has attained the SLO's attainment goal, as of the time of the
     * request.</p>
     */
    inline void SetAttainment(double value) { m_attainmentHasBeenSet = true; m_attainment = value; }

    /**
     * <p>A number between 0 and 100 that represents the percentage of time periods
     * that the service has attained the SLO's attainment goal, as of the time of the
     * request.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithAttainment(double value) { SetAttainment(value); return *this;}


    /**
     * <p>The total number of seconds in the error budget for the interval.</p>
     */
    inline int GetTotalBudgetSeconds() const{ return m_totalBudgetSeconds; }

    /**
     * <p>The total number of seconds in the error budget for the interval.</p>
     */
    inline bool TotalBudgetSecondsHasBeenSet() const { return m_totalBudgetSecondsHasBeenSet; }

    /**
     * <p>The total number of seconds in the error budget for the interval.</p>
     */
    inline void SetTotalBudgetSeconds(int value) { m_totalBudgetSecondsHasBeenSet = true; m_totalBudgetSeconds = value; }

    /**
     * <p>The total number of seconds in the error budget for the interval.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithTotalBudgetSeconds(int value) { SetTotalBudgetSeconds(value); return *this;}


    /**
     * <p>The budget amount remaining before the SLO status becomes
     * <code>BREACHING</code>, at the time specified in the <code>Timestemp</code>
     * parameter of the request. If this value is negative, then the SLO is already in
     * <code>BREACHING</code> status.</p>
     */
    inline int GetBudgetSecondsRemaining() const{ return m_budgetSecondsRemaining; }

    /**
     * <p>The budget amount remaining before the SLO status becomes
     * <code>BREACHING</code>, at the time specified in the <code>Timestemp</code>
     * parameter of the request. If this value is negative, then the SLO is already in
     * <code>BREACHING</code> status.</p>
     */
    inline bool BudgetSecondsRemainingHasBeenSet() const { return m_budgetSecondsRemainingHasBeenSet; }

    /**
     * <p>The budget amount remaining before the SLO status becomes
     * <code>BREACHING</code>, at the time specified in the <code>Timestemp</code>
     * parameter of the request. If this value is negative, then the SLO is already in
     * <code>BREACHING</code> status.</p>
     */
    inline void SetBudgetSecondsRemaining(int value) { m_budgetSecondsRemainingHasBeenSet = true; m_budgetSecondsRemaining = value; }

    /**
     * <p>The budget amount remaining before the SLO status becomes
     * <code>BREACHING</code>, at the time specified in the <code>Timestemp</code>
     * parameter of the request. If this value is negative, then the SLO is already in
     * <code>BREACHING</code> status.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithBudgetSecondsRemaining(int value) { SetBudgetSecondsRemaining(value); return *this;}


    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline const ServiceLevelIndicator& GetSli() const{ return m_sli; }

    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline bool SliHasBeenSet() const { return m_sliHasBeenSet; }

    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline void SetSli(const ServiceLevelIndicator& value) { m_sliHasBeenSet = true; m_sli = value; }

    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline void SetSli(ServiceLevelIndicator&& value) { m_sliHasBeenSet = true; m_sli = std::move(value); }

    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithSli(const ServiceLevelIndicator& value) { SetSli(value); return *this;}

    /**
     * <p>A structure that contains information about the performance metric that this
     * SLO monitors.</p>
     */
    inline ServiceLevelObjectiveBudgetReport& WithSli(ServiceLevelIndicator&& value) { SetSli(std::move(value)); return *this;}


    
    inline const Goal& GetGoal() const{ return m_goal; }

    
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }

    
    inline void SetGoal(const Goal& value) { m_goalHasBeenSet = true; m_goal = value; }

    
    inline void SetGoal(Goal&& value) { m_goalHasBeenSet = true; m_goal = std::move(value); }

    
    inline ServiceLevelObjectiveBudgetReport& WithGoal(const Goal& value) { SetGoal(value); return *this;}

    
    inline ServiceLevelObjectiveBudgetReport& WithGoal(Goal&& value) { SetGoal(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceLevelObjectiveBudgetStatus m_budgetStatus;
    bool m_budgetStatusHasBeenSet = false;

    double m_attainment;
    bool m_attainmentHasBeenSet = false;

    int m_totalBudgetSeconds;
    bool m_totalBudgetSecondsHasBeenSet = false;

    int m_budgetSecondsRemaining;
    bool m_budgetSecondsRemainingHasBeenSet = false;

    ServiceLevelIndicator m_sli;
    bool m_sliHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
