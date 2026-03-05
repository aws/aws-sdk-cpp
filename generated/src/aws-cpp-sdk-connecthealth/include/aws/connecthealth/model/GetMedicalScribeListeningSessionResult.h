/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeListeningSessionDetails.h>
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
namespace ConnectHealth {
namespace Model {
class GetMedicalScribeListeningSessionResult {
 public:
  AWS_CONNECTHEALTH_API GetMedicalScribeListeningSessionResult() = default;
  AWS_CONNECTHEALTH_API GetMedicalScribeListeningSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API GetMedicalScribeListeningSessionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the Medical Scribe listening session</p>
   */
  inline const MedicalScribeListeningSessionDetails& GetMedicalScribeListeningSessionDetails() const {
    return m_medicalScribeListeningSessionDetails;
  }
  template <typename MedicalScribeListeningSessionDetailsT = MedicalScribeListeningSessionDetails>
  void SetMedicalScribeListeningSessionDetails(MedicalScribeListeningSessionDetailsT&& value) {
    m_medicalScribeListeningSessionDetailsHasBeenSet = true;
    m_medicalScribeListeningSessionDetails = std::forward<MedicalScribeListeningSessionDetailsT>(value);
  }
  template <typename MedicalScribeListeningSessionDetailsT = MedicalScribeListeningSessionDetails>
  GetMedicalScribeListeningSessionResult& WithMedicalScribeListeningSessionDetails(MedicalScribeListeningSessionDetailsT&& value) {
    SetMedicalScribeListeningSessionDetails(std::forward<MedicalScribeListeningSessionDetailsT>(value));
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
  GetMedicalScribeListeningSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  MedicalScribeListeningSessionDetails m_medicalScribeListeningSessionDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_medicalScribeListeningSessionDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
