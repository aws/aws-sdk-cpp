/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/MergeStatus.h>
#include <aws/core/http/HttpResponse.h>
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
namespace ConnectCases {
namespace Model {
class GetMergeCasesStatusResult {
 public:
  AWS_CONNECTCASES_API GetMergeCasesStatusResult() = default;
  AWS_CONNECTCASES_API GetMergeCasesStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTCASES_API GetMergeCasesStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The merge status of the case.</p>
   */
  inline MergeStatus GetStatus() const { return m_status; }
  inline void SetStatus(MergeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetMergeCasesStatusResult& WithStatus(MergeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the primary case of the merge.</p>
   */
  inline const Aws::String& GetPrimaryCaseId() const { return m_primaryCaseId; }
  template <typename PrimaryCaseIdT = Aws::String>
  void SetPrimaryCaseId(PrimaryCaseIdT&& value) {
    m_primaryCaseIdHasBeenSet = true;
    m_primaryCaseId = std::forward<PrimaryCaseIdT>(value);
  }
  template <typename PrimaryCaseIdT = Aws::String>
  GetMergeCasesStatusResult& WithPrimaryCaseId(PrimaryCaseIdT&& value) {
    SetPrimaryCaseId(std::forward<PrimaryCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifiers of the secondary cases of the merge.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecondaryCaseIds() const { return m_secondaryCaseIds; }
  template <typename SecondaryCaseIdsT = Aws::Vector<Aws::String>>
  void SetSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    m_secondaryCaseIdsHasBeenSet = true;
    m_secondaryCaseIds = std::forward<SecondaryCaseIdsT>(value);
  }
  template <typename SecondaryCaseIdsT = Aws::Vector<Aws::String>>
  GetMergeCasesStatusResult& WithSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    SetSecondaryCaseIds(std::forward<SecondaryCaseIdsT>(value));
    return *this;
  }
  template <typename SecondaryCaseIdsT = Aws::String>
  GetMergeCasesStatusResult& AddSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    m_secondaryCaseIdsHasBeenSet = true;
    m_secondaryCaseIds.emplace_back(std::forward<SecondaryCaseIdsT>(value));
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
  GetMergeCasesStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  MergeStatus m_status{MergeStatus::NOT_SET};

  Aws::String m_primaryCaseId;

  Aws::Vector<Aws::String> m_secondaryCaseIds;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_primaryCaseIdHasBeenSet = false;
  bool m_secondaryCaseIdsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
