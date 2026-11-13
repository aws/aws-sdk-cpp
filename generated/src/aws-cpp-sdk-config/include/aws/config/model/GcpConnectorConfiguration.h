/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>The configuration details for connecting to Google Cloud.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GcpConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class GcpConnectorConfiguration {
 public:
  AWS_CONFIGSERVICE_API GcpConnectorConfiguration() = default;
  AWS_CONFIGSERVICE_API GcpConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API GcpConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Google Cloud organization that contains the connector's
   * management project, which is the project of the service account in
   * <code>serviceAccountEmail</code>.</p> <p>Required if the management project
   * belongs to an organization. A connector needs an organization ID to record an
   * entire organization or more than one project. Omit it only if the management
   * project doesn't belong to an organization. In that case, the connector can
   * record only the management project.</p>
   */
  inline const Aws::String& GetGcpOrganizationId() const { return m_gcpOrganizationId; }
  inline bool GcpOrganizationIdHasBeenSet() const { return m_gcpOrganizationIdHasBeenSet; }
  template <typename GcpOrganizationIdT = Aws::String>
  void SetGcpOrganizationId(GcpOrganizationIdT&& value) {
    m_gcpOrganizationIdHasBeenSet = true;
    m_gcpOrganizationId = std::forward<GcpOrganizationIdT>(value);
  }
  template <typename GcpOrganizationIdT = Aws::String>
  GcpConnectorConfiguration& WithGcpOrganizationId(GcpOrganizationIdT&& value) {
    SetGcpOrganizationId(std::forward<GcpOrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the Google Cloud service account that Config uses to
   * access your Google Cloud resources. The format is
   * <code>SERVICE_ACCOUNT_NAME@PROJECT_ID.iam.gserviceaccount.com</code>.</p> <p>The
   * project that contains this service account is the connector's management
   * project. If the connector has no <code>gcpOrganizationId</code>, it can record
   * only the management project.</p>
   */
  inline const Aws::String& GetServiceAccountEmail() const { return m_serviceAccountEmail; }
  inline bool ServiceAccountEmailHasBeenSet() const { return m_serviceAccountEmailHasBeenSet; }
  template <typename ServiceAccountEmailT = Aws::String>
  void SetServiceAccountEmail(ServiceAccountEmailT&& value) {
    m_serviceAccountEmailHasBeenSet = true;
    m_serviceAccountEmail = std::forward<ServiceAccountEmailT>(value);
  }
  template <typename ServiceAccountEmailT = Aws::String>
  GcpConnectorConfiguration& WithServiceAccountEmail(ServiceAccountEmailT&& value) {
    SetServiceAccountEmail(std::forward<ServiceAccountEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full resource name of the Google Cloud workload identity pool provider
   * that trusts Config. The format is
   * <code>projects/PROJECT_NUMBER/locations/global/workloadIdentityPools/POOL_ID/providers/PROVIDER_ID</code>.</p>
   */
  inline const Aws::String& GetWorkloadIdentityPoolProvider() const { return m_workloadIdentityPoolProvider; }
  inline bool WorkloadIdentityPoolProviderHasBeenSet() const { return m_workloadIdentityPoolProviderHasBeenSet; }
  template <typename WorkloadIdentityPoolProviderT = Aws::String>
  void SetWorkloadIdentityPoolProvider(WorkloadIdentityPoolProviderT&& value) {
    m_workloadIdentityPoolProviderHasBeenSet = true;
    m_workloadIdentityPoolProvider = std::forward<WorkloadIdentityPoolProviderT>(value);
  }
  template <typename WorkloadIdentityPoolProviderT = Aws::String>
  GcpConnectorConfiguration& WithWorkloadIdentityPoolProvider(WorkloadIdentityPoolProviderT&& value) {
    SetWorkloadIdentityPoolProvider(std::forward<WorkloadIdentityPoolProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gcpOrganizationId;

  Aws::String m_serviceAccountEmail;

  Aws::String m_workloadIdentityPoolProvider;
  bool m_gcpOrganizationIdHasBeenSet = false;
  bool m_serviceAccountEmailHasBeenSet = false;
  bool m_workloadIdentityPoolProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
