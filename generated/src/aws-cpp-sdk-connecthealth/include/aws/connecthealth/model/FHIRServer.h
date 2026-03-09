/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>FHIR server configuration for input data source</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/FHIRServer">AWS
 * API Reference</a></p>
 */
class FHIRServer {
 public:
  AWS_CONNECTHEALTH_API FHIRServer() = default;
  AWS_CONNECTHEALTH_API FHIRServer(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API FHIRServer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>FHIR server endpoint URL for accessing patient data.</p>
   */
  inline const Aws::String& GetFhirEndpoint() const { return m_fhirEndpoint; }
  inline bool FhirEndpointHasBeenSet() const { return m_fhirEndpointHasBeenSet; }
  template <typename FhirEndpointT = Aws::String>
  void SetFhirEndpoint(FhirEndpointT&& value) {
    m_fhirEndpointHasBeenSet = true;
    m_fhirEndpoint = std::forward<FhirEndpointT>(value);
  }
  template <typename FhirEndpointT = Aws::String>
  FHIRServer& WithFhirEndpoint(FhirEndpointT&& value) {
    SetFhirEndpoint(std::forward<FhirEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth token for authenticating with the FHIR server.</p>
   */
  inline const Aws::String& GetOauthToken() const { return m_oauthToken; }
  inline bool OauthTokenHasBeenSet() const { return m_oauthTokenHasBeenSet; }
  template <typename OauthTokenT = Aws::String>
  void SetOauthToken(OauthTokenT&& value) {
    m_oauthTokenHasBeenSet = true;
    m_oauthToken = std::forward<OauthTokenT>(value);
  }
  template <typename OauthTokenT = Aws::String>
  FHIRServer& WithOauthToken(OauthTokenT&& value) {
    SetOauthToken(std::forward<OauthTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fhirEndpoint;

  Aws::String m_oauthToken;
  bool m_fhirEndpointHasBeenSet = false;
  bool m_oauthTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
