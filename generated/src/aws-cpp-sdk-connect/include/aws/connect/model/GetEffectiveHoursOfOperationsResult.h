/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EffectiveHoursOfOperations.h>
#include <aws/connect/model/EffectiveOverrideHours.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class GetEffectiveHoursOfOperationsResult {
 public:
  AWS_CONNECT_API GetEffectiveHoursOfOperationsResult() = default;
  AWS_CONNECT_API GetEffectiveHoursOfOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API GetEffectiveHoursOfOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the effective hours of operations.</p>
   */
  inline const Aws::Vector<EffectiveHoursOfOperations>& GetEffectiveHoursOfOperationList() const { return m_effectiveHoursOfOperationList; }
  template <typename EffectiveHoursOfOperationListT = Aws::Vector<EffectiveHoursOfOperations>>
  void SetEffectiveHoursOfOperationList(EffectiveHoursOfOperationListT&& value) {
    m_effectiveHoursOfOperationListHasBeenSet = true;
    m_effectiveHoursOfOperationList = std::forward<EffectiveHoursOfOperationListT>(value);
  }
  template <typename EffectiveHoursOfOperationListT = Aws::Vector<EffectiveHoursOfOperations>>
  GetEffectiveHoursOfOperationsResult& WithEffectiveHoursOfOperationList(EffectiveHoursOfOperationListT&& value) {
    SetEffectiveHoursOfOperationList(std::forward<EffectiveHoursOfOperationListT>(value));
    return *this;
  }
  template <typename EffectiveHoursOfOperationListT = EffectiveHoursOfOperations>
  GetEffectiveHoursOfOperationsResult& AddEffectiveHoursOfOperationList(EffectiveHoursOfOperationListT&& value) {
    m_effectiveHoursOfOperationListHasBeenSet = true;
    m_effectiveHoursOfOperationList.emplace_back(std::forward<EffectiveHoursOfOperationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about override configurations applied to the base hours of
   * operation to calculate the effective hours.</p> <p>For more information about
   * how override types are applied, see <a
   * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/connect/latest/adminguide/hours-of-operation-overrides.html">Build
   * your list of overrides</a> in the <i> Administrator Guide</i>.</p>
   */
  inline const Aws::Vector<EffectiveOverrideHours>& GetEffectiveOverrideHoursList() const { return m_effectiveOverrideHoursList; }
  template <typename EffectiveOverrideHoursListT = Aws::Vector<EffectiveOverrideHours>>
  void SetEffectiveOverrideHoursList(EffectiveOverrideHoursListT&& value) {
    m_effectiveOverrideHoursListHasBeenSet = true;
    m_effectiveOverrideHoursList = std::forward<EffectiveOverrideHoursListT>(value);
  }
  template <typename EffectiveOverrideHoursListT = Aws::Vector<EffectiveOverrideHours>>
  GetEffectiveHoursOfOperationsResult& WithEffectiveOverrideHoursList(EffectiveOverrideHoursListT&& value) {
    SetEffectiveOverrideHoursList(std::forward<EffectiveOverrideHoursListT>(value));
    return *this;
  }
  template <typename EffectiveOverrideHoursListT = EffectiveOverrideHours>
  GetEffectiveHoursOfOperationsResult& AddEffectiveOverrideHoursList(EffectiveOverrideHoursListT&& value) {
    m_effectiveOverrideHoursListHasBeenSet = true;
    m_effectiveOverrideHoursList.emplace_back(std::forward<EffectiveOverrideHoursListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone for the hours of operation.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  GetEffectiveHoursOfOperationsResult& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
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
  GetEffectiveHoursOfOperationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EffectiveHoursOfOperations> m_effectiveHoursOfOperationList;

  Aws::Vector<EffectiveOverrideHours> m_effectiveOverrideHoursList;

  Aws::String m_timeZone;

  Aws::String m_requestId;
  bool m_effectiveHoursOfOperationListHasBeenSet = false;
  bool m_effectiveOverrideHoursListHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
