/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {
class CheckSubdomainAvailabilityResult {
 public:
  AWS_LIGHTSAIL_API CheckSubdomainAvailabilityResult() = default;
  AWS_LIGHTSAIL_API CheckSubdomainAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LIGHTSAIL_API CheckSubdomainAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A Boolean value that indicates whether the subdomain is available to
   * create.</p>
   */
  inline bool GetAvailable() const { return m_available; }
  inline void SetAvailable(bool value) {
    m_availableHasBeenSet = true;
    m_available = value;
  }
  inline CheckSubdomainAvailabilityResult& WithAvailable(bool value) {
    SetAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the reservation of the subdomain expires.</p> <p>The
   * expiry is returned only when your account holds an active reservation for the
   * subdomain.</p>
   */
  inline const Aws::Utils::DateTime& GetReservationExpiresAt() const { return m_reservationExpiresAt; }
  template <typename ReservationExpiresAtT = Aws::Utils::DateTime>
  void SetReservationExpiresAt(ReservationExpiresAtT&& value) {
    m_reservationExpiresAtHasBeenSet = true;
    m_reservationExpiresAt = std::forward<ReservationExpiresAtT>(value);
  }
  template <typename ReservationExpiresAtT = Aws::Utils::DateTime>
  CheckSubdomainAvailabilityResult& WithReservationExpiresAt(ReservationExpiresAtT&& value) {
    SetReservationExpiresAt(std::forward<ReservationExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subdomain that was checked.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  CheckSubdomainAvailabilityResult& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
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
  CheckSubdomainAvailabilityResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_available{false};

  Aws::Utils::DateTime m_reservationExpiresAt{};

  Aws::String m_subdomainName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_availableHasBeenSet = false;
  bool m_reservationExpiresAtHasBeenSet = false;
  bool m_subdomainNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
