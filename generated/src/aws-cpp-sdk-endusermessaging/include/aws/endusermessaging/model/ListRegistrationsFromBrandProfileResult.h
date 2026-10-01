/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/RegistrationAssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class ListRegistrationsFromBrandProfileResult {
 public:
  AWS_ENDUSERMESSAGING_API ListRegistrationsFromBrandProfileResult() = default;
  AWS_ENDUSERMESSAGING_API ListRegistrationsFromBrandProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API ListRegistrationsFromBrandProfileResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of registrations that are associated with the brand profile.</p>
   */
  inline const Aws::Vector<RegistrationAssociationSummary>& GetRegistrationAssociations() const { return m_registrationAssociations; }
  template <typename RegistrationAssociationsT = Aws::Vector<RegistrationAssociationSummary>>
  void SetRegistrationAssociations(RegistrationAssociationsT&& value) {
    m_registrationAssociationsHasBeenSet = true;
    m_registrationAssociations = std::forward<RegistrationAssociationsT>(value);
  }
  template <typename RegistrationAssociationsT = Aws::Vector<RegistrationAssociationSummary>>
  ListRegistrationsFromBrandProfileResult& WithRegistrationAssociations(RegistrationAssociationsT&& value) {
    SetRegistrationAssociations(std::forward<RegistrationAssociationsT>(value));
    return *this;
  }
  template <typename RegistrationAssociationsT = RegistrationAssociationSummary>
  ListRegistrationsFromBrandProfileResult& AddRegistrationAssociations(RegistrationAssociationsT&& value) {
    m_registrationAssociationsHasBeenSet = true;
    m_registrationAssociations.emplace_back(std::forward<RegistrationAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is returned when
   * more results are available, and is null when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRegistrationsFromBrandProfileResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListRegistrationsFromBrandProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RegistrationAssociationSummary> m_registrationAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registrationAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
