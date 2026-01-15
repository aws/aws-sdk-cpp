/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/AuditContext.h>
#include <aws/lakeformation/model/CredentialsScope.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class GetTemporaryDataLocationCredentialsRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API GetTemporaryDataLocationCredentialsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTemporaryDataLocationCredentials"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The time period, between 900 and 43,200 seconds, for the timeout of the
   * temporary credentials.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline GetTemporaryDataLocationCredentialsRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{

  inline const AuditContext& GetAuditContext() const { return m_auditContext; }
  inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
  template <typename AuditContextT = AuditContext>
  void SetAuditContext(AuditContextT&& value) {
    m_auditContextHasBeenSet = true;
    m_auditContext = std::forward<AuditContextT>(value);
  }
  template <typename AuditContextT = AuditContext>
  GetTemporaryDataLocationCredentialsRequest& WithAuditContext(AuditContextT&& value) {
    SetAuditContext(std::forward<AuditContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 data location that you want to access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDataLocations() const { return m_dataLocations; }
  inline bool DataLocationsHasBeenSet() const { return m_dataLocationsHasBeenSet; }
  template <typename DataLocationsT = Aws::Vector<Aws::String>>
  void SetDataLocations(DataLocationsT&& value) {
    m_dataLocationsHasBeenSet = true;
    m_dataLocations = std::forward<DataLocationsT>(value);
  }
  template <typename DataLocationsT = Aws::Vector<Aws::String>>
  GetTemporaryDataLocationCredentialsRequest& WithDataLocations(DataLocationsT&& value) {
    SetDataLocations(std::forward<DataLocationsT>(value));
    return *this;
  }
  template <typename DataLocationsT = Aws::String>
  GetTemporaryDataLocationCredentialsRequest& AddDataLocations(DataLocationsT&& value) {
    m_dataLocationsHasBeenSet = true;
    m_dataLocations.emplace_back(std::forward<DataLocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential scope is determined by the caller's Lake Formation permission
   * on the associated table. Credential scope can be either:</p> <ul> <li> <p>READ -
   * Provides read-only access to the data location.</p> </li> <li> <p>READ_WRITE -
   * Provides both read and write access to the data location.</p> </li> </ul>
   */
  inline CredentialsScope GetCredentialsScope() const { return m_credentialsScope; }
  inline bool CredentialsScopeHasBeenSet() const { return m_credentialsScopeHasBeenSet; }
  inline void SetCredentialsScope(CredentialsScope value) {
    m_credentialsScopeHasBeenSet = true;
    m_credentialsScope = value;
  }
  inline GetTemporaryDataLocationCredentialsRequest& WithCredentialsScope(CredentialsScope value) {
    SetCredentialsScope(value);
    return *this;
  }
  ///@}
 private:
  int m_durationSeconds{0};

  AuditContext m_auditContext;

  Aws::Vector<Aws::String> m_dataLocations;

  CredentialsScope m_credentialsScope{CredentialsScope::NOT_SET};
  bool m_durationSecondsHasBeenSet = false;
  bool m_auditContextHasBeenSet = false;
  bool m_dataLocationsHasBeenSet = false;
  bool m_credentialsScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
