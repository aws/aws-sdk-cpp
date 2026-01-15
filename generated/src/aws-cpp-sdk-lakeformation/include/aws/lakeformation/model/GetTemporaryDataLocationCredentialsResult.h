/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/CredentialsScope.h>
#include <aws/lakeformation/model/TemporaryCredentials.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {
class GetTemporaryDataLocationCredentialsResult {
 public:
  AWS_LAKEFORMATION_API GetTemporaryDataLocationCredentialsResult() = default;
  AWS_LAKEFORMATION_API GetTemporaryDataLocationCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAKEFORMATION_API GetTemporaryDataLocationCredentialsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const TemporaryCredentials& GetCredentials() const { return m_credentials; }
  template <typename CredentialsT = TemporaryCredentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = TemporaryCredentials>
  GetTemporaryDataLocationCredentialsResult& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Refers to the Amazon S3 locations that can be accessed through the
   * <code>GetTemporaryCredentialsForLocation</code> API operation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccessibleDataLocations() const { return m_accessibleDataLocations; }
  template <typename AccessibleDataLocationsT = Aws::Vector<Aws::String>>
  void SetAccessibleDataLocations(AccessibleDataLocationsT&& value) {
    m_accessibleDataLocationsHasBeenSet = true;
    m_accessibleDataLocations = std::forward<AccessibleDataLocationsT>(value);
  }
  template <typename AccessibleDataLocationsT = Aws::Vector<Aws::String>>
  GetTemporaryDataLocationCredentialsResult& WithAccessibleDataLocations(AccessibleDataLocationsT&& value) {
    SetAccessibleDataLocations(std::forward<AccessibleDataLocationsT>(value));
    return *this;
  }
  template <typename AccessibleDataLocationsT = Aws::String>
  GetTemporaryDataLocationCredentialsResult& AddAccessibleDataLocations(AccessibleDataLocationsT&& value) {
    m_accessibleDataLocationsHasBeenSet = true;
    m_accessibleDataLocations.emplace_back(std::forward<AccessibleDataLocationsT>(value));
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
  inline void SetCredentialsScope(CredentialsScope value) {
    m_credentialsScopeHasBeenSet = true;
    m_credentialsScope = value;
  }
  inline GetTemporaryDataLocationCredentialsResult& WithCredentialsScope(CredentialsScope value) {
    SetCredentialsScope(value);
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
  GetTemporaryDataLocationCredentialsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TemporaryCredentials m_credentials;

  Aws::Vector<Aws::String> m_accessibleDataLocations;

  CredentialsScope m_credentialsScope{CredentialsScope::NOT_SET};

  Aws::String m_requestId;
  bool m_credentialsHasBeenSet = false;
  bool m_accessibleDataLocationsHasBeenSet = false;
  bool m_credentialsScopeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
