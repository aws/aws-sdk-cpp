/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {
class DatetimeOffsetsResult {
 public:
  AWS_JSONPROTOCOL_API DatetimeOffsetsResult() = default;
  AWS_JSONPROTOCOL_API DatetimeOffsetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_JSONPROTOCOL_API DatetimeOffsetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Utils::DateTime& GetDatetime() const { return m_datetime; }
  template <typename DatetimeT = Aws::Utils::DateTime>
  void SetDatetime(DatetimeT&& value) {
    m_datetimeHasBeenSet = true;
    m_datetime = std::forward<DatetimeT>(value);
  }
  template <typename DatetimeT = Aws::Utils::DateTime>
  DatetimeOffsetsResult& WithDatetime(DatetimeT&& value) {
    SetDatetime(std::forward<DatetimeT>(value));
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
  DatetimeOffsetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_datetime{};
  bool m_datetimeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
