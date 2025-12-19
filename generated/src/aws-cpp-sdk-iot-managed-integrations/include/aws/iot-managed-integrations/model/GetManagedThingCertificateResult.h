/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTManagedIntegrations {
namespace Model {
class GetManagedThingCertificateResult {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCertificateResult() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCertificateResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the managed thing.</p>
   */
  inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
  template <typename ManagedThingIdT = Aws::String>
  void SetManagedThingId(ManagedThingIdT&& value) {
    m_managedThingIdHasBeenSet = true;
    m_managedThingId = std::forward<ManagedThingIdT>(value);
  }
  template <typename ManagedThingIdT = Aws::String>
  GetManagedThingCertificateResult& WithManagedThingId(ManagedThingIdT&& value) {
    SetManagedThingId(std::forward<ManagedThingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PEM-encoded certificate for the managed thing.</p>
   */
  inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
  template <typename CertificatePemT = Aws::String>
  void SetCertificatePem(CertificatePemT&& value) {
    m_certificatePemHasBeenSet = true;
    m_certificatePem = std::forward<CertificatePemT>(value);
  }
  template <typename CertificatePemT = Aws::String>
  GetManagedThingCertificateResult& WithCertificatePem(CertificatePemT&& value) {
    SetCertificatePem(std::forward<CertificatePemT>(value));
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
  GetManagedThingCertificateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedThingId;

  Aws::String m_certificatePem;

  Aws::String m_requestId;
  bool m_managedThingIdHasBeenSet = false;
  bool m_certificatePemHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
