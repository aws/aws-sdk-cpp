/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ConnectScheduling {
namespace Model {
/**
 * <p>The response for <code>CreateTimeOff</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/CreateTimeOffResponse">AWS
 * API Reference</a></p>
 */
class CreateTimeOffResult {
 public:
  AWS_CONNECTSCHEDULING_API CreateTimeOffResult() = default;
  AWS_CONNECTSCHEDULING_API CreateTimeOffResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTSCHEDULING_API CreateTimeOffResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the time off request.</p>
   */
  inline const Aws::String& GetTimeOffId() const { return m_timeOffId; }
  template <typename TimeOffIdT = Aws::String>
  void SetTimeOffId(TimeOffIdT&& value) {
    m_timeOffIdHasBeenSet = true;
    m_timeOffId = std::forward<TimeOffIdT>(value);
  }
  template <typename TimeOffIdT = Aws::String>
  CreateTimeOffResult& WithTimeOffId(TimeOffIdT&& value) {
    SetTimeOffId(std::forward<TimeOffIdT>(value));
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
  CreateTimeOffResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_timeOffId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_timeOffIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
