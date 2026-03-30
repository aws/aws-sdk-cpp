/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/UsageMetric.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
class GetAccountUsageResult {
 public:
  AWS_DEVOPSAGENT_API GetAccountUsageResult() = default;
  AWS_DEVOPSAGENT_API GetAccountUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API GetAccountUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Monthly investigation hours usage and limit for an account</p>
   */
  inline const UsageMetric& GetMonthlyAccountInvestigationHours() const { return m_monthlyAccountInvestigationHours; }
  template <typename MonthlyAccountInvestigationHoursT = UsageMetric>
  void SetMonthlyAccountInvestigationHours(MonthlyAccountInvestigationHoursT&& value) {
    m_monthlyAccountInvestigationHoursHasBeenSet = true;
    m_monthlyAccountInvestigationHours = std::forward<MonthlyAccountInvestigationHoursT>(value);
  }
  template <typename MonthlyAccountInvestigationHoursT = UsageMetric>
  GetAccountUsageResult& WithMonthlyAccountInvestigationHours(MonthlyAccountInvestigationHoursT&& value) {
    SetMonthlyAccountInvestigationHours(std::forward<MonthlyAccountInvestigationHoursT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Monthly evaluation hours usage and limit for an account</p>
   */
  inline const UsageMetric& GetMonthlyAccountEvaluationHours() const { return m_monthlyAccountEvaluationHours; }
  template <typename MonthlyAccountEvaluationHoursT = UsageMetric>
  void SetMonthlyAccountEvaluationHours(MonthlyAccountEvaluationHoursT&& value) {
    m_monthlyAccountEvaluationHoursHasBeenSet = true;
    m_monthlyAccountEvaluationHours = std::forward<MonthlyAccountEvaluationHoursT>(value);
  }
  template <typename MonthlyAccountEvaluationHoursT = UsageMetric>
  GetAccountUsageResult& WithMonthlyAccountEvaluationHours(MonthlyAccountEvaluationHoursT&& value) {
    SetMonthlyAccountEvaluationHours(std::forward<MonthlyAccountEvaluationHoursT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Monthly system learning hours usage and limit for an account</p>
   */
  inline const UsageMetric& GetMonthlyAccountSystemLearningHours() const { return m_monthlyAccountSystemLearningHours; }
  template <typename MonthlyAccountSystemLearningHoursT = UsageMetric>
  void SetMonthlyAccountSystemLearningHours(MonthlyAccountSystemLearningHoursT&& value) {
    m_monthlyAccountSystemLearningHoursHasBeenSet = true;
    m_monthlyAccountSystemLearningHours = std::forward<MonthlyAccountSystemLearningHoursT>(value);
  }
  template <typename MonthlyAccountSystemLearningHoursT = UsageMetric>
  GetAccountUsageResult& WithMonthlyAccountSystemLearningHours(MonthlyAccountSystemLearningHoursT&& value) {
    SetMonthlyAccountSystemLearningHours(std::forward<MonthlyAccountSystemLearningHoursT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the usage tracking period</p>
   */
  inline const Aws::Utils::DateTime& GetUsagePeriodStartTime() const { return m_usagePeriodStartTime; }
  template <typename UsagePeriodStartTimeT = Aws::Utils::DateTime>
  void SetUsagePeriodStartTime(UsagePeriodStartTimeT&& value) {
    m_usagePeriodStartTimeHasBeenSet = true;
    m_usagePeriodStartTime = std::forward<UsagePeriodStartTimeT>(value);
  }
  template <typename UsagePeriodStartTimeT = Aws::Utils::DateTime>
  GetAccountUsageResult& WithUsagePeriodStartTime(UsagePeriodStartTimeT&& value) {
    SetUsagePeriodStartTime(std::forward<UsagePeriodStartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the usage tracking period</p>
   */
  inline const Aws::Utils::DateTime& GetUsagePeriodEndTime() const { return m_usagePeriodEndTime; }
  template <typename UsagePeriodEndTimeT = Aws::Utils::DateTime>
  void SetUsagePeriodEndTime(UsagePeriodEndTimeT&& value) {
    m_usagePeriodEndTimeHasBeenSet = true;
    m_usagePeriodEndTime = std::forward<UsagePeriodEndTimeT>(value);
  }
  template <typename UsagePeriodEndTimeT = Aws::Utils::DateTime>
  GetAccountUsageResult& WithUsagePeriodEndTime(UsagePeriodEndTimeT&& value) {
    SetUsagePeriodEndTime(std::forward<UsagePeriodEndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAccountUsageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  UsageMetric m_monthlyAccountInvestigationHours;

  UsageMetric m_monthlyAccountEvaluationHours;

  UsageMetric m_monthlyAccountSystemLearningHours;

  Aws::Utils::DateTime m_usagePeriodStartTime{};

  Aws::Utils::DateTime m_usagePeriodEndTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_monthlyAccountInvestigationHoursHasBeenSet = false;
  bool m_monthlyAccountEvaluationHoursHasBeenSet = false;
  bool m_monthlyAccountSystemLearningHoursHasBeenSet = false;
  bool m_usagePeriodStartTimeHasBeenSet = false;
  bool m_usagePeriodEndTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
