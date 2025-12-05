/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsStats.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetObjectTypeAttributeStatisticsResult {
 public:
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsResult() = default;
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The statistics.</p>
   */
  inline const GetObjectTypeAttributeStatisticsStats& GetStatistics() const { return m_statistics; }
  template <typename StatisticsT = GetObjectTypeAttributeStatisticsStats>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = GetObjectTypeAttributeStatisticsStats>
  GetObjectTypeAttributeStatisticsResult& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time when this statistics was calculated.</p>
   */
  inline const Aws::Utils::DateTime& GetCalculatedAt() const { return m_calculatedAt; }
  template <typename CalculatedAtT = Aws::Utils::DateTime>
  void SetCalculatedAt(CalculatedAtT&& value) {
    m_calculatedAtHasBeenSet = true;
    m_calculatedAt = std::forward<CalculatedAtT>(value);
  }
  template <typename CalculatedAtT = Aws::Utils::DateTime>
  GetObjectTypeAttributeStatisticsResult& WithCalculatedAt(CalculatedAtT&& value) {
    SetCalculatedAt(std::forward<CalculatedAtT>(value));
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
  GetObjectTypeAttributeStatisticsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  GetObjectTypeAttributeStatisticsStats m_statistics;

  Aws::Utils::DateTime m_calculatedAt{};

  Aws::String m_requestId;
  bool m_statisticsHasBeenSet = false;
  bool m_calculatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
