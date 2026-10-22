/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IntegrationType.h>
#include <aws/continuum/model/ProviderDetails.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace Continuum {
namespace Model {
/**
 * <p>Contains the current state of the updated S3 integration. The sensitive
 * external ID is omitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateIntegrationOutput">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationResult {
 public:
  AWS_CONTINUUM_API UpdateIntegrationResult() = default;
  AWS_CONTINUUM_API UpdateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API UpdateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  UpdateIntegrationResult& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
  template <typename IntegrationArnT = Aws::String>
  void SetIntegrationArn(IntegrationArnT&& value) {
    m_integrationArnHasBeenSet = true;
    m_integrationArn = std::forward<IntegrationArnT>(value);
  }
  template <typename IntegrationArnT = Aws::String>
  UpdateIntegrationResult& WithIntegrationArn(IntegrationArnT&& value) {
    SetIntegrationArn(std::forward<IntegrationArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateIntegrationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline UpdateIntegrationResult& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ProviderDetails& GetProviderDetails() const { return m_providerDetails; }
  template <typename ProviderDetailsT = ProviderDetails>
  void SetProviderDetails(ProviderDetailsT&& value) {
    m_providerDetailsHasBeenSet = true;
    m_providerDetails = std::forward<ProviderDetailsT>(value);
  }
  template <typename ProviderDetailsT = ProviderDetails>
  UpdateIntegrationResult& WithProviderDetails(ProviderDetailsT&& value) {
    SetProviderDetails(std::forward<ProviderDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the integration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateIntegrationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the integration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateIntegrationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateIntegrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_integrationId;

  Aws::String m_integrationArn;

  Aws::String m_name;

  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  ProviderDetails m_providerDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integrationIdHasBeenSet = false;
  bool m_integrationArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_integrationTypeHasBeenSet = false;
  bool m_providerDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
