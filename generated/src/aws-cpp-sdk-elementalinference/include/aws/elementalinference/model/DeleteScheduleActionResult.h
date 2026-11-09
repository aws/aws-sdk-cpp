/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class DeleteScheduleActionResult {
 public:
  AWS_ELEMENTALINFERENCE_API DeleteScheduleActionResult() = default;
  AWS_ELEMENTALINFERENCE_API DeleteScheduleActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API DeleteScheduleActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the schedule action that Elemental Inference deleted.</p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  DeleteScheduleActionResult& WithActionName(ActionNameT&& value) {
    SetActionName(std::forward<ActionNameT>(value));
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
  DeleteScheduleActionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_actionName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_actionNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
